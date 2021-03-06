// For License and Copyright information, see main.cpp

#ifndef ENTRYPOINT_H
#define ENTRYPOINT_H

#include "resource.h"
////////////////////////////////////////
// entrypoint (concrete) - "Where's All the Data?" "Right here, baby. Let me show you this Game's Entry Point."
////////////////////////////////////////

namespace Stage {
	class EntryPoint{
		private:
			Resource* entry_resource;
		public:
			EntryPoint();
			EntryPoint(std::string userEntryFile);
	};
}
#endif	