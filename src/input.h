// For License and Copyright information, see main.cpp

#ifndef INPUT_H
#define INPUT_H

#include <queue>
#include <set>
#include "action.h"
////////////////////////////////////////
// input (abstract base) - Base class for the abstract concept of "Input Device" -- something that acts upon the game to invoke a reaction. Polls for Actions, puts in queue, executes every action in queue.
////////////////////////////////////////

namespace Stage {
	class Input {
		private:
			int max_queue_size();
			virtual queue<Action*> input_queue;
		protected:
			virtual void pushAction(Action action_to_push);
			virtual void popAction();
		public:
			Input();
			virtual void poll() = 0;
	};
}
#endif