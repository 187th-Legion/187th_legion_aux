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
			"ls_props_staticships"
		};
		units[] = 
		{
			//SHIP PIECES
			"aux187_ship_retribution_interior8",
			"aux187_ship_retribution_interior7",
			"aux187_ship_retribution_interior6",
			"aux187_ship_retribution_interior5",
			"aux187_ship_retribution_interior4",
			"aux187_ship_retribution_interior3",
			"aux187_ship_retribution_interior2",
			"aux187_ship_retribution_interior1",
			"aux187_ship_retribution_engine",
			"aux187_ship_retribution_door2",
			"aux187_ship_retribution_door",
			"aux187_ship_retribution_bridge",
			"aux187_ship_retribution_body10",
			"aux187_ship_retribution_body9",
			"aux187_ship_retribution_body8",
			"aux187_ship_retribution_body7",
			"aux187_ship_retribution_body6",
			"aux187_ship_retribution_body5",
			"aux187_ship_retribution_body4",
			"aux187_ship_retribution_body3",
			"aux187_ship_retribution_body2_3",
			"aux187_ship_retribution_body2_2",
			"aux187_ship_retribution_body2_1",
			"aux187_ship_retribution_body1_2",
			"aux187_ship_retribution_body1_1",

			"aux187_ship_venator_retribution_full"
		};
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
	#include "props\venator\retribution\CfgVehicles.hpp"
	#include "props\venator\retribution\VenatorPieces_CfgVehicles.hpp"
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
