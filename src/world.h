#ifndef ACTION_H
#define ACTION_H

#include <vector>
////////////////////////////////////////
// world (singleton) - The logical space that contains every entity in the game. Only one may exist. From it users may retrieve references to Entities from a vector. This is done with free functions.
////////////////////////////////////////

namespaces Stage {
	class World {
		private:
			std::vector<Entity*> entity_space;
		public:
			static World 
			std::vector<Entity*>
	};
	