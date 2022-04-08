#pragma once
#include "AppFeaturesOpsExports.h"

namespace Application
{
	class Block;
	class PartFile;
	class BlockBuilder;
}


APPLIBRARY_API void Journaling_ScrewManager_CreateScrewBuilder(Application::PartFile* part, Application::Block* block);
