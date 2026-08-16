#include "script_component.hpp"

class CfgPatches
{
	class aux187_Vehicles_Addon
	{
		name = "187th Legion Vehicles";
		author = "Tim";
		requiredVersion = 0.01;
		requiredAddons[] = 
		{
			"A3_Armor_F_Beta",
			"A3_Weapons_F",
			"A3_Armor_F_Beta_APC_Wheeled_01",
			"3AS_ATTE",
			"TKE_Wheeled_C",
			"TKE_Unit_Groups",
			"3AS_VehicleWeapons"
		};
		units[] = 
		{
			"aux187_ATTE",
			"aux187_bantha_mk2",
			"aux187_bantha_mk2_unarmed",
			"aux187_bantha_mk3_mgs",
			"aux187_bantha_mk3_ifv",
			"aux187_bantha_mk3_cmd"
		};
		weapons[] = 
		{
			"aux187_bantha_cannon",
			"aux187_bantha_plx",
            "aux187_bantha_z6"
		};
		magazines[] = 
		{
			"aux187_mag_100rnd_z20_autocannon",
			"aux187_mag_300rnd_z6",
			"aux187_bantha_missile"
		};
		ammo[] = 
		{

		};
	};
};

class CfgVehicles
{
	#include "atte\CfgVehicles.hpp"
	#include "bantha\CfgVehicles.hpp"
};

class CfgMagazines
{
	#include "munitions\CfgMagazines.hpp"
};

class CfgAmmo
{
	#include "munitions\CfgAmmo.hpp"
};

class CfgWeapons
{
	#include "munitions\CfgWeapons.hpp"
};
