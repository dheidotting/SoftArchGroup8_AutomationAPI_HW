#include "AutomationAPI_ScrewBuilder.h"
#include "AutomationAPI_CADObject.h"
#include "..\AppLibrary\Journaling_BlockBuilder.h"
#include <exception>

namespace AutomationAPI
{
	class ScrewBuilderImpl
	{
	public:

		virtual ~ScrewBuilderImpl();
		ScrewBuilderImpl() = delete;

		ScrewBuilderImpl(int guid);
		int m_guid;

	};
}

AutomationAPI::ScrewBuilder::ScrewBuilder(int guid)
{
	m_screwBuilderImpl = new AutomationAPI::ScrewBuilderImpl(guid);
}

AutomationAPI::ScrewBuilder::~ScrewBuilder()
{
	delete m_screwBuilderImpl;
}

AutomationAPI::ScrewBuilderImpl::ScrewBuilderImpl(int guid)
{
	m_guid = guid;
}

AutomationAPI::ScrewBuilderImpl::~ScrewBuilderImpl()
{

}


AutomationAPI::ScrewBuilder* AutomationAPI::ScrewBuilder::CreateScrewBuilder(int guid)
{
	// We should check the guid being passed in, as this is public
	// but that is for another day

	return new AutomationAPI::ScrewBuilder(guid);
}

AutomationAPI::CADObject* AutomationAPI::ScrewBuilder::Commit()
{
	return nullptr;
}

void AutomationAPI::ScrewBuilder::SetType(AutomationAPI::ScrewBuilder::ScrewBuilderTypes type)
{
	

}

AutomationAPI::ScrewBuilder::ScrewBuilderTypes AutomationAPI::ScrewBuilder::GetType()
{

	return ScrewBuilderTypes::TypesDiameterAndExtrude;
}

void AutomationAPI::ScrewBuilder::SetDiameter(int d)
{
}

int AutomationAPI::ScrewBuilder::GetDiameter()
{
	return 0;
}

void AutomationAPI::ScrewBuilder::SetLength(int l)
{
}

int AutomationAPI::ScrewBuilder::GetLength()
{
	return 0;
}

void AutomationAPI::ScrewBuilder::SetThreadWidth(int w)
{
}

int AutomationAPI::ScrewBuilder::GetThreadWidth()
{
	return 0;
}


void AutomationAPI::ScrewBuilder::Extrude(int e)
{
}