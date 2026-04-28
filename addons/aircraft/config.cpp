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
		units[] = 
		{
			"aux187_LAAT_Mk1",
			"aux187_LAAT_C"
		};
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

class CfgMagazines
{
	#include "laat\CfgMagazines.hpp"
};
