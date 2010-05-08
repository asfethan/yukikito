// For License and Copyright information, see main.cpp

#ifndef KEYBOARDINPUT_H
#define KEYBOARDINPUT_H

#include <queue>
#include <set>
#include "action.h"
#include "SDL.h"
////////////////////////////////////////
// point (concrete) - a point in virtual space.
////////////////////////////////////////

namespace Stage {
	template<typename T> class Point {
		private:
			T x_pos;
			T y_pos;
			T z_pos;
		public:
			Point(T userX, T userY, T userZ);
	};
}
#endif