// For License and Copyright information, please see game.h

#ifndef ACTION_H
#define ACTION_H

#include <vector>
////////////////////////////////////////
// action (abstract base) - The concept of the "Action" - An event or anything that happens in response to it; An Entity behavior. In behaviors for game Entities, Actions as return values replace void.
////////////////////////////////////////

namespace Stage {
	enum ActionStage { PERFORM, COMMIT, RECOVER };
	class Action {
		private:
			int current_stage;
			std::vector<Action*> success_conditions;
			std::vector<Action*> failure_conditions;
		public:
			void link(Action* link_action);
			bool perform() = 0;
			bool commit() = 0;
			bool recover() = 0;
			
			virtual bool execute();
	};
}
#endif