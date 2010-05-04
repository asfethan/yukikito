// For License and Copyright information, see main.cpp

#ifndef RESOURCE_H
#define RESOURCE_H

#include <string>
////////////////////////////////////////
// resource (abstract base) - Represents a Resource to be loaded, from disk or elsewhere. Wraps files with their own behaviors depending on format.
////////////////////////////////////////

namespace Stage {
	enum LoadStatus { UNLOADED, LOADED };
	template <typename T> class File { 
		private:
			bool is_loaded;
			std::string file_name;
			T file_contents;
		public:
			File(std::string userFileName);
			~File();
			
			virtual void load() = 0;
			virtual T contents() = 0;
			virtual bool isLoaded() = 0;
		};
}
#endif