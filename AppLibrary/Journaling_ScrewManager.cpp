#include "Journaling_ScrewManager.h"
#include "Block.h";
#include "BlockBuilder.h";
#include "..\AppPartOps\PartOps.h"
#include "..\Journaling\Journaling.h"
#include "..\Journaling\JournalHelpers.h"

void Journaling_ScrewManager_CreateScrewBuilder(Application::PartFile* part, Application::Block* block)
{
	//If Journaling write the thing things
	if (IsJournaling())
	{
		JournalStartCall("CreateScrewBuilder", part);
		JournalInClassParam(block, "AutomationAPI::Block", "block");
	}

	if (IsJournaling())
	{
		JournalReturnClass(nullptr, "AutomationAPI::ScrewBuilder", "ScrewBuilder");
		JournalEndCall();
	}

}