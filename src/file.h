// For License and Copyright information, see main.h

#ifndef ACTION_H
#define ACTION_H

#include <vector>
#include <string>
////////////////////////////////////////
// file (abstract base) - Represents a "file" on disk that has been or will be loaded.
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