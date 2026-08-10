#include "script_component.hpp"

class CfgPatches
{
	class aux187_Vehicles_Addon
	{
		name = "187th Legion Core";
		author = "Tim, PraetorPanda,";
		requiredVersion = 0.01;
		requiredAddons[] = 
		{
			
		};
		units[] = 
		{
			"aux187_ATTE"
		};
		weapons[] = {};
		magazines[] = {};
		ammo[] = {};
	};
};

class CfgVehicles
{
	#include "atte\CfgVehicles.hpp"
};
