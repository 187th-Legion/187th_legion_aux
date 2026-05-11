#include "script_component.hpp"

class CfgPatches
{
	class aux187_Weapons_Addon
	{
		name = "187th Legion Weapons";
		author = "Tim";
		requiredVersion = 0.01;
		requiredAddons[] = 
		{
			"A3_Weapons_F_Mark_Acc",
		};
		units[] = 
		{
            
		};
		weapons[] = 
        {
            "aux187_ptr7",
			"aux187_ptr7_bipod",
			"aux187_ptr7_scope",
			"aux187_ptr7_suppressor",
        };
		magazines[] = 
		{
			"aux187_ptr7_base_magazine",
			"aux187_ptr7_slap_magazine",
			"aux187_ptr7_amhei_magazine",
			"aux187_ptr7_pthp_magazine",
		};
		ammo[] = 
		{
			"aux187_ptr7_base_ammo",
			"aux187_ptr7_slap_ammo",
			"aux187_ptr7_amhei_ammo",
			"aux187_ptr7_pthp_ammo",
		};
	};
};

class CfgWeapons
{
    #include "custom\ptr7\CfgWeapons.hpp"
};

class cfgMagazines
{
	#include "custom\ptr7\CfgMagazines.hpp"
};

class cfgAmmo
{
	#include "custom\ptr7\CfgAmmo.hpp"
};
