#include "script_component.hpp"

class CfgPatches
{
	class aux187_Compats_Addon
	{
		name = "187th Legion Compats";
		author = "Tim";
		requiredVersion = 0.50;
		requiredAddons[] = 
		{
			"jsrs2025_sounds_air",
			"jsrs2025_sounds_vehicles",
			"jsrs2025_sounds_weapons",
			"aux187_Vehicles_Addon",
			"aux187_Aircraft_Addon"
		};
		units[] = 
		{
			
		};

		weapons[] = 
		{

		};

		skipWhenMissingDependencies = 1;
	};
};

class CfgVehicles
{
	#include "groundVehicles\CfgVehicles.hpp"
	#include "airVehicles\CfgVehicles.hpp"
};
