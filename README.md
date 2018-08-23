# Particle-Fire-Explosion
Visual c++ Effects

## Nintendo Switch *HomeBrew*

To compile the makefile you need a couple of dependencies. Or you can download the precompiled version [here](https://github.com/Annihilator708/Particle-Fire-Explosion/tree/master/Nintendo_Switch/prebuild).
Make sure DevKitPro is installed, which you can find [here](https://devkitpro.org/wiki/Getting_Started).
I personally created this build on a windows system and I did not test it on any other OS. (keep that in mind).

After DevKitPro is installed navigate to the folder where your installation is located and make sure to run the updater once more.
When you updated your devkitpro, go to the startmenu and search for `MSYS`. If you open up this application you will end up in a shell.
In this unix like shell navigate to C:\Particle-Fire-Explosion\Nintendo_Switch.
This can be done with the command `CD C:\Particle-Fire-Explosion\Nintendo_Switch` or where ever your repo download location is.

Before we build our project with `make` we need a couple of dependencies. To do this we can install packages with pacman which is a package manager. Pacman is located in the unix like shell `MSYS`.
Execute the following command in your `MSYS` terminal to get the list of dependencies (which we need).

`pacman -Sl | grep switch-sdl`

Everything listed here is what we need.
To see all packages available execute: `pacman -Sl` instead.
To install a package you can do them one by one using the command:

`pacman -S switch-sdl2` etc,.. etc,...

Or do them all at once:

`pacman -S switch-sdl2 switch-sdl2_gfx switch-sdl2_image switch-sdl2_mixer switch-sdl2_net switch-sdl2_ttf`

When all dependencies are installed feel free to build the make file.
If you are still in `CD C:\Particle-Fire-Explosion\Nintendo_Switch` type in your terminal to execute the compiler:
`make`

A bunch of files will apear. In the *root* dir you will find a `Nintendo_Switch.nro` file. Copy this to your HomeBrewed switch.

## PC

The first version I learned to make. the precompiled version can be found [here](https://github.com/Annihilator708/Particle-Fire-Explosion/tree/master/PC/prebuild).
No make files for this one, I'm deeply sorry ~~not~~... You can see the code if you like or load it into eclipse (or whatever editor you use) or you can use the precompiled version to look how it should look on your switch.

## Video
[![Vid](http://dakota-ruiters.nl/wp-content/uploads/2016/06/video-play.png)](https://github.com/Annihilator708/Particle-Fire-Explosion/blob/master/Vid.mp4?raw=true)

## Screenshots
[RED]: https://github.com/Annihilator708/Particle-Fire-Explosion/blob/master/images/RED.png?raw=true "RED"
[GREENISH]: https://github.com/Annihilator708/Particle-Fire-Explosion/blob/master/images/GREENISH.png?raw=true "GREENISH"

![RED][RED]
![GREENISH][GREENISH]