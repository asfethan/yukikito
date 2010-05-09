// For License and Copyright information, see main.cpp

#ifndef DISPLAY_H
#define DISPLAY_H


////////////////////////////////////////
// display (abstract base) - A representation of all data in the game World. Such representation can be through console text (text game), sound (audio game), graphics (video game), et cetera.
////////////////////////////////////////

namespace Stage {
	class Display {
		private:
			World& display_world;
		public:
			Display(World& userDisplayWorld);
			void show();
	};
}