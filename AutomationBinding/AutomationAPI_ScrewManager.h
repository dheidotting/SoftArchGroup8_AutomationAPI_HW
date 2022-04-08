#pragma once
#include "AutomationBindingExports.h"
namespace AutomationAPI
{
	class ScrewBuilder;
	class Block;
	/// <summary>
	/// FeatureCollection comment
	/// </summary>
	class AUTOMATIONBINDING_API ScrewManager
	{
	public:
		ScrewManager(int guid);

		virtual ~ScrewManager();

		/// <summary>
		/// Create a Block builder.
		/// </summary>
		/// <param name="block"> if nullptr is passed in this will be created in 
		/// create mode, otherwise it be in edit mode.</param>
		/// <returns></returns>
		ScrewBuilder* CreateScrewBuilder(Block* block);


	private:
		int m_guid;
	};
}
