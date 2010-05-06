// For License and Copyright information, see main.cpp

#ifndef GAME_H
#define GAME_H

#include "entrypoint.h"
#include "keyboardinput.h"
////////////////////////////////////////
// game (concrete) - The Game. Requires the following: An Entry Point. A World.
////////////////////////////////////////

namespace Stage {
	class Game {
			private:
				EntryPoint game_entry;
				void GameLoop();
				KeyboardInput test_keyboardinput;
			public:
				Game(EntryPoint& userEntryPoint, World& userWorld);
	};
}