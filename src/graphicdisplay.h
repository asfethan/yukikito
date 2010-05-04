// For License and Copyright information, see main.cpp

#ifndef GRAPHICDISPLAY_H
#define GRAPHICDISPLAY_H


////////////////////////////////////////
// display (abstract base) - A representation of all data in the game World. Such representation can be through console text (text game), sound (audio game), graphics (video game), et cetera.
////////////////////////////////////////

namespace Stage {
	class GraphicDisplay : public Display {
		private:
			World& display_world;
		public:
			Display(World& userDisplayWorld);
			void show();
	};
}