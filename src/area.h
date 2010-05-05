// For License and Copyright information, see main.cpp

#ifndef AREA_H
#define AREA_H

////////////////////////////////////////
// area (concrete) - A bounding cube that encompasses a sector of the game World's virtual space and gives unto it a name. Operates on the cartographer model: A cartographer takes a part of the world that has long existed, and she gives unto it a name. 
////////////////////////////////////////

namespace Stage {
	class Area {
		private:
			Attribute<std::string> name;
			Point<long int> back_topleft;
			Point<long int> back_topright;
			Point<long int> back_bottomleft;
			point<long int> back_bottomright;
			
			Point<long int> front_topleft;
			Point<long int> front_topright;
			point<long int>
				
		public:
			Area(Attribute userName);
			void expand(long int userScaleFactor);
	}
}