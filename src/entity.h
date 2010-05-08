// For License and Copyright information, see main.cpp

#ifndef ENTITY_H
#define ENTITY_H

#include <vector>
#include <string>
#include <tr1/unordered_map>
#include <set>
#include "resource.h"
#include "attribute.h"
#include "sprite.h"
#include "point.h"
////////////////////////////////////////
// entity (concrete) - The building blocks of a game World. Any object existing within the game's constraints. Consists of Resource-derived properties (Attributes) and behaviors (Actions). Anything else is added for the sake of developer convenience.
// also included is the entity() free function, which retrieves from the game World an entity based on its std::string name.
////////////////////////////////////////

namespace Stage {
	class Entity {
		private:
			Resource& entity_resource;
			
			std::string name;
			std::tr1::unordered_map<std::string, Attribute<void*> > attribute_map;
			//std::set<Action> action_set;
			
			Point<long int> position;
			long int roll;
			long int pitch;
			long int yaw;
				
			Sprite* sprite_index;
		public:
			Entity(Resource& userEntityResource);
			~Entity();
	};
}
#endif