#pragma once
#include "AutomationBindingExports.h"
#include "AutomationAPI_IBuilder.h"

namespace AutomationAPI
{
	class CADObject;
	class ScrewBuilder;
	class ScrewBuilderImpl;
	/// <summary>
	/// BlockBuilder comment
	/// </summary>
	class AUTOMATIONBINDING_API ScrewBuilder : public IBuilder
	{
	public:
		enum ScrewBuilderTypes
		{
			TypesDiameterAndExtrude,
			TypesThreadWidthAndLength
		};

		void SetType(ScrewBuilderTypes type);
		ScrewBuilderTypes GetType();

		void SetDiameter(int d);
		int GetDiameter();
		void SetThreadWidth(int w);
		int GetThreadWidth();
		void SetLength(int l);
		int GetLength();
		void Extrude(int e);

		CADObject* Commit() override;

		/*
		* Internal Usage only.
		*/
		static ScrewBuilder* CreateScrewBuilder(int guid);
		virtual ~ScrewBuilder();
		ScrewBuilder() = delete;

	private:

		ScrewBuilder(int guid);
		ScrewBuilderImpl* m_screwBuilderImpl;

	};
}
