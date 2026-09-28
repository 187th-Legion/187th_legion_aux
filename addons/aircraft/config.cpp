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
			"3AS_Z95_base",
			"3AS_Imperial_Air_Gozanti",
		};
		units[] = 
		{
			"aux187_LAAT_Mk1",
            "aux187_LAAT_Mk1_Lamps",
            "aux187_LAAT_Mk2",
			"aux187_LAAT_C",
			"aux187_ARC_170",
			"aux187_BTLB_Y_Wing",
			"aux187_Z95",
			"aux187_Gozanti"
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
	#include "gozanti\CfgVehicles.hpp"
};

class CfgWeapons
{
    #include "munitions\CfgWeapons.hpp"
};

class CfgMagazines
{
	#include "munitions\CfgMagazines.hpp"
};

class CfgAmmo
{
	#include "munitions\CfgAmmo.hpp"
};

#include "munitions\CMEffects.hpp"

