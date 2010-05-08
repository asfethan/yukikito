// For License and Copyright information, see main.cpp

#ifndef SPRITE_H
#define SPRITE_H

#include <vector>
#include "image.h"
////////////////////////////////////////
// sprite (concrete) - An ordered sequence of Images.
////////////////////////////////////////

namespace Stage {
	class Sprite {
		private:
			std::vector<Image*> images;
			int image_index;
		public:
			Sprite();
			void nextImage();
	};
}
#endif