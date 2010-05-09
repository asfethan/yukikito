// For License and Copyright information, see main.cpp

#ifndef KEYBOARDINPUT_H
#define KEYBOARDINPUT_H

#include <queue>
#include <set>
#include "SDL/SDL.h"
#include "input.h"
////////////////////////////////////////
// keyboardinput (derived concrete) - Desktop or laptop computer keyboard as input device. 
////////////////////////////////////////

namespace Stage {

	class KeyboardInput : public Input {
		private:
			SDL_Event personal_event;
		public:
			KeyboardInput();
			//~KeyboardInput();
			void poll();
			
	};
}
#endif