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
			int max_queue_size;
			queue<Action*> input_queue;
			
			virtual void pushAction() = 0;
			virtual void Action* popAction() = 0;
		public:
			a
			virtual void poll() = 0;
	};
}
#endif