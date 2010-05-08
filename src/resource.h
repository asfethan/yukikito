// For License and Copyright information, see main.cpp

#ifndef RESOURCE_H
#define RESOURCE_H

#include <string>
////////////////////////////////////////
// resource (abstract base) - Represents a Resource to be loaded, from disk or elsewhere. Wraps files with their own behaviors depending on format.
////////////////////////////////////////

namespace Stage {
	enum LoadStatus { UNLOADED, LOADED };
	class Resource { 
		private:
			bool is_loaded;
			std::string resource_name;
			void* resource_contents;
		public:
			Resource(std::string userFileName);
			~Resource();
			
			virtual void load() = 0;
			virtual void* contents() = 0;
			virtual bool isLoaded() = 0;
		};
}
#endif