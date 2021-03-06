// For License and Copyright information, see main.cpp

#ifndef SCENE_H
#define SCENE_H

#include <string>
////////////////////////////////////////
// scene (concrete) - A unit of narrative and/or ludological occurrence. Consists of operations to be executed with every occurrence of the game loop. Imagine a list of constraints and rules for a game. Scenes can be nested within other scenes.
////////////////////////////////////////

namespace Stage {
	class Scene {
		private:
			std::string name;
		public:
			Scene();
			
	};
}