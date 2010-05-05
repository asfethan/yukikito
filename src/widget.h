// For License and Copyright information, see main.cpp

#ifndef WIDGET_H
#define WIDGET_H

#include <vector>
////////////////////////////////////////
// widget (concrete) - Any user interface element. Can contain user interface elements that contain user interface elements that contain usre interface elements. Behavior similar to Entity.
////////////////////////////////////////

namespace Stage {
	class Widget: public Entity {
		private:
			Resource& widget_resource;
			std::vector<Widget&> sub_widgets;
		public:
			Widget(Resource& widget_resource);
	};
}
#endif