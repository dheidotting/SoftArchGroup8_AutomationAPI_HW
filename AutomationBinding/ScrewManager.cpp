#include "AutomationAPI_ScrewManager.h"
#include "AutomationAPI_Block.h"
#include "AutomationAPI_ScrewBuilder.h"
#include <iostream>
#include "..\AppLibrary\Journaling_ScrewManager.h"
#include "..\AppLibrary\Block.h"
#include "..\AppLibrary\BlockBuilder.h"
#include "..\AppPartOps\PartOps.h"

AutomationAPI::ScrewManager::ScrewManager(int guid) : m_guid(guid)
{

}

AutomationAPI::ScrewManager::~ScrewManager()
{

}

AutomationAPI::ScrewBuilder* AutomationAPI::ScrewManager::CreateScrewBuilder(AutomationAPI::Block* block)
{
	int guid = 0;
	Application::Block* appBlock = nullptr;
	if (block != nullptr)
	{
		guid = block->GetGuid();
		appBlock = new Application::Block(guid);
	}

	Application::PartFile* part =
		dynamic_cast<Application::PartFile*>(
			GuidObjectManager::GetGuidObjectManager().GetObjectFromGUID(m_guid));
	if (part == nullptr)
	{
		throw std::exception("not able to retrieve Part Object");
	}

	Journaling_ScrewManager_CreateScrewBuilder(part, appBlock);


	return nullptr;

}