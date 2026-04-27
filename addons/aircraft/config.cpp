#include "script_component.hpp"

class CfgPatches
{
	class aux187_Aircraft_Addon
	{
		name = "187th Legion Aircraft";
		author = "Tim";
		requiredVersion = 0.01;
		requiredAddons[] = 
		{
			"3AS_LAAT"
		};
		units[] = { "Aux187_LAAT_Mk1" };
		weapons[] = {};
		magazines[] = {};
		ammo[] = {};
	};
};

class CfgVehicles
{
    #include "laat\CfgVehicles.hpp"
};

class CfgWeapons
{
    #include "laat\CfgWeapons.hpp"
};
