// For License and Copyright information, see main.cpp

#ifndef CUT_H
#define CUT_H

#include <string>

#include "camera.h"
#include "entity.h"
////////////////////////////////////////
// cut (free function) - Cut a Camera between Areas or Entities. Allows for different styles of Camera Cuts.
////////////////////////////////////////

namespace Stage {
	enum CutStyle { SUDDEN }
	void cut(Camera& userCamera, Entity& userEntity);
	void cut(Camera& userCamera, Area& userArea);
}
	
#endif