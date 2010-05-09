// For License and Copyright information, see main.cpp

#include "world.h"
////////////////////////////////////////
// world (singleton) - The logical space that contains every Entity in the game. Only one may exist. Operates on the man-at-a-table model. Said man is the game-master, who keeps a set of all of the game pieces and their properties. From the World users may retrieve a the set listing all Entities to pick and prod and search and retrieve from, based on search criteria.
// Under consideration is the refactoring of World as a non-singleton class composing Game. Such an addition would affect the functionality of the free function entity().
////////////////////////////////////////

namespace Stage {
	World* World::the_world = NULL;
	
	World* World::Instance() {
		if(!the_world)
			the_world = new World;
			
		return the_world;
	}
}