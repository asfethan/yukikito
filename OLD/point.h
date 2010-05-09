// For License and Copyright information, see main.cpp

#ifndef POINT_H
#define POINT_H

#include <queue>
#include <set>
#include "action.h"

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