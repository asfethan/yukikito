// For License and Copyright information, see main.cpp

#ifndef ATTRIBUTE_H
#define ATTRIBUTE_H

#include <string>
////////////////////////////////////////
// attribute (concrete) - Any property of a game Entity. Has a name and value, often retrieved from Resource.
// Under consideration is the usage of void pointers in the place of templates for mobile devices.
////////////////////////////////////////

namespace Stage {
	template<typename T> class Attribute {
		private:
			std::string attribute_name;
			T attribute_value;
		public:
			Attribute(std::string userName);
			Attribute(std::string userName, T userValue);
		
			std::string name();
			T value();
	};
}
#endif