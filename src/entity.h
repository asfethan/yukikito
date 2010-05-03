// For License and Copyright information, see main.h

#ifndef ENTITY_H
#define ENTITY_H

#include <vector>
#include <string>
////////////////////////////////////////
// entity (concrete) - The building blocks of a game World. Any object existing within the game's constraints. Consists of Resource-derived properties (Attributes) and behaviors (Actions).
////////////////////////////////////////

namespace Stage {
	class Entity {
		private:
			Resource& entity_resource;
			
			std::string name;
			std::map<std::string, Attribute> attributes;
			std::set<Action> actions;
			
			Point<long int> position;
			
			Sprite* sprite_index;
		public:
			Entity(Resource& userEntityResource);
			~Entity();
			
	};
}
#endif