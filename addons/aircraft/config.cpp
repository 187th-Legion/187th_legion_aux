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
			"3AS_LAAT",
			"3AS_ARC_170",
			"3AS_BTLB_Bomber",
			"3AS_Z95_base"
		};
		units[] = 
		{
			"aux187_LAAT_Mk1",
            "aux187_LAAT_Mk1_Lamps",
            "aux187_LAAT_Mk2",
			"aux187_LAAT_C",
			"aux187_ARC_170",
			"aux187_BTLB_Y_Wing",
			"aux187_Z95"
		};
		weapons[] = {};
		magazines[] = {};
		ammo[] = {};
	};
};

class CfgVehicles
{
	class ACE_SelfActions;
    #include "laat\CfgVehicles.hpp"
	#include "z95\CfgVehicles.hpp"
	#include "ywing\CfgVehicles.hpp"
	#include "arc170\CfgVehicles.hpp"
};

class CfgWeapons
{
    #include "laat\CfgWeapons.hpp"
};

class CfgMagazines
{
	#include "laat\CfgMagazines.hpp"
};
