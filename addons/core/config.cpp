#include "script_component.hpp"

class CfgPatches
{
	class aux187_Core_Addon
	{
		name = "187th Legion Core";
		author = "Tim, PraetorPanda,";
		requiredVersion = 0.01;
		requiredAddons[] = 
		{
			
		};
		units[] = {};
		weapons[] = {};
		magazines[] = {};
		ammo[] = {};
	};
};

#include "CfgFactionClasses.hpp"
#include "CfgEditorCategories.hpp"
#include "CfgEditorSubCategories.hpp"
#include "event_handlers.hpp"

class CfgVehicles
{
	#include "props\CfgVehicles.hpp"
};

class CfgMarkers
{
	#include "markers\CfgMarkers.hpp"
};

class cfgMods
{
	author="";
	timepacked="1652735951";
};

class CfgMarkerClasses
{
	class aux187_Markers
	{
		displayName="187th Map Markers";
	};
};
