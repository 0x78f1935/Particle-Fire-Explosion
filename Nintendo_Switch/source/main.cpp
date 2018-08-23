#include <switch.h>
#include <iostream>
#include <string.h>
#include <sstream>
#include <stdio.h>
#include <math.h>

#include "Swarm.h"
#include "Screen.h"

#include <SDL2/SDL.h>
#include <SDL2/SDL_events.h>
#include <SDL2/SDL_ttf.h>

using namespace std;
stringstream convert;

int main(int argc, char* argv[]) {
	//Do not use anything from <switch.h>
	//gfxInitDefault();
	//consoleInit(nullptr);


	GUI::Screen screen;
	screen.init();

//	if (screen.init() == false) {
//		printf("\x1b[45;0HError initializing SDL");
//	}

	//Move the cursor to row 16 and column 20 and then prints "Hello World!"
	//To move the cursor you have to print "\x1b[r;cH", where r and c are respectively
	//the row and column where you want your cursor to move

	GUI::Swarm swarm;

	while (appletMainLoop()) {
//		hidScanInput();

		int elapsed = SDL_GetTicks();

		swarm.update(elapsed);

		unsigned char red = (unsigned char) ((1 + sin(elapsed * 0.0001)) * 128);
		unsigned char green =(unsigned char) ((1 + sin(elapsed * 0.0002)) * 128);
		unsigned char blue = (unsigned char) ((1 + sin(elapsed * 0.0003)) * 128);
		printf("\x1b[42;0HRed: %d", red);
		printf("\x1b[43;0HGreen: %d", green);
		printf("\x1b[44;0HBlue: %d", blue);
		printf("\x1b[45;0HElapsed: %d", elapsed);

		const GUI::Particle * const pParticles = swarm.getParticles();
		for (int i = 0; i < GUI::Swarm::NPARTICLES; i++) {
			GUI::Particle particle = pParticles[i];

			int x = ((particle.m_x + 1) * (GUI::Screen::SCREEN_WIDTH / 2));
			int y = ((particle.m_y * (GUI::Screen::SCREEN_HEIGHT / 2)) + (GUI::Screen::SCREEN_WIDTH / 3.5));

			printf("\x1b[39;0HX: %d", x);
			printf("\x1b[40;0HY: %d", y);

			screen.setPixel(x, y, red, green, blue);
		}

		//hidKeysDown returns information about which buttons have been just pressed (and they weren't in the previous frame)
//		u64 kDown = hidKeysDown(CONTROLLER_P1_AUTO);
//
//		if (kDown & KEY_PLUS) {
//			break; // break in order to return to hbmenu
//		}
		screen.boxBlur();
		screen.update();
//		gfxFlushBuffers();
//		gfxSwapBuffers();
//		gfxWaitForVsync();
	}

//	SDL_DestroyTexture(texture);
//	SDL_FreeSurface(screen);
//	SDL_DestroyRenderer(renderer);
//	SDL_DestroyWindow(window);

	//No libnx function calls.
	//gfxExit();

	screen.close();
	SDL_Quit();
	return 0;
}
