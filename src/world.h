// For License and Copyright information, please see game.h

#ifndef WORLD_H
#define WORLD_H

#include <vector>
////////////////////////////////////////
// world (singleton) - The logical space that contains every entity in the game. Only one may exist. Operates on the man-at-a-table model. Said man is the game-master, who keeps a set of all of the game pieces and their properties. From the World users may retrieve a the set listing all entities to pick and prod and search and retrieve from, based on search criteria.
////////////////////////////////////////

namespaces Stage {
	class World {
		private:
			World(){};
			World(World const&){};
			World& operator=(World const&){};
			static World* instance;
			std::vector<Entity*> entity_space;
		public:
			static World* Instance();
			std::vector<Entity*> getEntitySpace();
			
	};
}
#endif