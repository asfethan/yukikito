#ifndef ACTION_H
#define ACTION_H

#include <vector>
////////////////////////////////////////
// file (abstract base) - Represents a "file" on disk that has been or will be loaded.
////////////////////////////////////////

namespace Stage {
	enum 
	class File { 
		private:
			bool load_status;
			std::string file_name;
		public:
			File();
			virtual ~File();
			
			bool isLoaded();
			