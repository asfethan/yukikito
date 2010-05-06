// For License and Copyright information, see main.cpp

#ifndef KEYBOARDINPUT_H
#define KEYBOARDINPUT_H

#include <queue>
#include <set>
#include "action.h"
#include "SDL.h"
////////////////////////////////////////
// keyboardinput (concrete) - Desktop or laptop computer keyboard as input device. 
////////////////////////////////////////

namespace Stage {
	class KeyboardInput : public Input {
		private:
			
		public:
			KeyboardInput();
	};
}
#endif