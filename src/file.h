// For License and Copyright information, please see game.h

#ifndef ACTION_H
#define ACTION_H

#include <vector>
////////////////////////////////////////
// file (abstract base) - Represents a "file" on disk that has been or will be loaded.
////////////////////////////////////////

namespace Stage {
	enum LoadStatus { UNLOADED, LOADED };
	class File { 
		private:
			bool is_loaded;
			int load_status;
			std::string file_name;
		public:
			File();
			virtual ~File();
			
			void load();
			
			bool isLoaded();
		};
}
#endif