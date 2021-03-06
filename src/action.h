// For License and Copyright information, see main.cpp

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
			std::vector<Action*> failure_conditions;
		public:
			void link(Action* link_action);
			virtual bool perform() = 0;
			virtual bool commit() = 0;
			virtual bool recover() = 0;
			
			virtual bool execute();
	};
}
#endif