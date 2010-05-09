// For License and Copyright information, see main.cpp

#ifndef GAME_H
#define GAME_H

#include "SDL.h"
#include "entrypoint.h"
#include "keyboardinput.h"
////////////////////////////////////////
// game (concrete) - The Game. Requires the following: An Entry Point.
////////////////////////////////////////

namespace Stage {
	class Game {
			private:
				EntryPoint game_entry;
				KeyboardInput test_keyboard;
				
				void initialize();
				void input();
				void processing();
				void output();

				void GameLoop();
				
			public:
				Game(EntryPoint& userEntryPoint);
	};
}
#endif