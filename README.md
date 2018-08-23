# Particle-Fire-Explosion
Visual c++ Effects

## Nintendo Switch *HomeBrew*

To compile the makefile you need a couple of dependencies. Or you can download the precompiled version [here](https://github.com/Annihilator708/Particle-Fire-Explosion/tree/master/Nintendo_Switch/prebuild).
Make sure DevKitPro is installed, which you can find [here](https://devkitpro.org/wiki/Getting_Started).
I personally created this build on a windows system and I did not test it on any other OS. (keep that in mind).

After DevKitPro is installed navigate to the folder where your installation is located and make sure to run the updater once more.
When you updated your devkitpro, go to the startmenu and seach for MSYS. If you open up this application you will end up in a shell.
In this unix like shell navigate to C:\Particle-Fire-Explosion\Nintendo_Switch.
This can be done with the command `CD C:\Particle-Fire-Explosion\Nintendo_Switch` or where ever your installation location is.

Before we build our project with `make` we need a couple of dependencies. We can install packages for DevKitPro with pacman which is a package manager.
Execute the following command in your MSYS terminal to get the list of dependencies.

`pacman -Sl | grep switch-sdl`

Everything listed here is what we need.
To install a package you can do them one by one using the command:

`pacman -S switch-sdl2` etc,.. etc,...

Or do them all at once:

`pacman -S switch-sdl2 switch-sdl2_gfx switch-sdl2_image switch-sdl2_mixer switch-sdl2_net switch-sdl2_ttf`

When all dependencies are installed feel free to build the make file.
If you are still in the same location as where we started in your terminal execute:
`make`

A bunch of files will apear. In the *root* you will find a `Nintendo_Switch.nro` file. Copy this to your HomeBrewed switch.

## PC

The first version I learned to do. the precompiled version can be found [here](https://github.com/Annihilator708/Particle-Fire-Explosion/tree/master/PC/prebuild).
No make files for this one, You can see the code and load it into eclipse. or you can use the precompiled version to look how it should look on your switch.

## Screenshots
[RED]: https://github.com/Annihilator708/Particle-Fire-Explosion/tree/master/images/RED.png "RED"
[GREENISH]: https://github.com/Annihilator708/Particle-Fire-Explosion/tree/master/images/GREENISH.png "GREENISH"

![RED][RED]
![GREENISH][GREENISH]