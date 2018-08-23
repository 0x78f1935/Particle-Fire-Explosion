/*
 * Screen.h
 *
 *  Created on: 21 Aug 2018
 *      Author: 7700K
 */

#ifndef SCREEN_H_
#define SCREEN_H_

#include <SDL2/SDL.h>
#include <string.h>

namespace GUI {

class Screen {
public:
	const static int SCREEN_WIDTH = 1280;
	const static int SCREEN_HEIGHT = 720;

private:
	SDL_Window *m_window;
	SDL_Renderer *m_renderer;
	SDL_Texture *m_texture;
	Uint32 *m_buffer1;
	Uint32 *m_buffer2;

public:
	Screen();
	bool init();
	void update();
	void setPixel(int x, int y, Uint8 red, Uint8 green, Uint8 blue);
	bool processEvents();
	void close();
	void boxBlur();
	void updateRenderer();
};

} /* namespace GUI */

#endif /* SCREEN_H_ */
