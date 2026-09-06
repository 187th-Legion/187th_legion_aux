#include "script_component.hpp"

class CfgPatches
{
	class aux187_Opfor_Addon
	{
		name = "187th Legion OPFOR";
		author = "Tim";
		requiredVersion = 0.01;
		requiredAddons[] = 
		{
			"A3_Characters_F",
			"ls_loadorder",
			"WBK_Droids_LS"
		};
		units[] = 
		{
			"aux187_opfor_b1_base",
			"aux187_opfor_bx_base",
			"aux187_opfor_b2_base",

			"aux187_opfor_b1_scout",
			"aux187_opfor_b1",
			"aux187_opfor_b1_at",
			"aux187_opfor_b1_aa",
			"aux187_opfor_b1_autorifleman",
			"aux187_opfor_b1_pilot",
			"aux187_opfor_b1_crew",
			"aux187_opfor_b1_engineer",
			"aux187_opfor_b1_commander",
			"aux187_opfor_b1_cqb",

			"aux187_opfor_b1_scout_training",
			"aux187_opfor_b1_training",
			"aux187_opfor_b1_at_training",
			"aux187_opfor_b1_autorifleman_training",

			"aux187_opfor_b1_scout_geonosis",
			"aux187_opfor_b1_geonosis",
			"aux187_opfor_b1_at_geonosis",
			"aux187_opfor_b1_autorifleman_geonosis",
			"aux187_opfor_b1_pilot_geonosis",
			"aux187_opfor_b1_crew_geonosis",
			"aux187_opfor_b1_engineer_geonosis",
			"aux187_opfor_b1_commander_geonosis",
			"aux187_opfor_b1_cqb_geonosis",

			"aux187_opfor_b1_scout_advanced",
			"aux187_opfor_b1_advanced",
			"aux187_opfor_b1_at_advanced",
			"aux187_opfor_b1_autorifleman_advanced",

			"aux187_opfor_b1_scout_security",
			"aux187_opfor_b1_security",
			"aux187_opfor_b1_at_security",
			"aux187_opfor_b1_autorifleman_security",

			"aux187_opfor_b1_scout_marine",
			"aux187_opfor_b1_marine",
			"aux187_opfor_b1_at_marine",
			"aux187_opfor_b1_autorifleman_marine",

			"aux187_opfor_b2",

			"aux187_opfor_bx",
			"aux187_opfor_bx_shield",
			"aux187_opfor_bx_diplomat_shield",
			"aux187_opfor_bx_citadel_shield",
			"aux187_opfor_bx_captain",
			"aux187_opfor_bx_citadel",
			"aux187_opfor_bx_diplomat",
			"aux187_opfor_bx_training",
			
			"aux187_opfor_droideka",
			"aux187_opfor_droideka_noShield",
			"aux187_opfor_droideka_training",
			"aux187_opfor_droideka_noShield_training",

			"aux187_opfor_tri_fighter",
			"aux187_opfor_vulture",
			"aux187_opfor_vulture_advanced",
			"aux187_opfor_hmp_transport",
			"aux187_opfor_hmp_gunship",
			
			"aux187_opfor_hagm_artillery",

			"aux187_opfor_scavDrone",
			"aux187_opfor_agt",

			"aux187_opfor_gat_light",
			"aux187_opfor_gat",
			"aux187_opfor_src",
			"aux187_opfor_sac",
			"aux187_opfor_pac",
			"aux187_opfor_fliknot",
			"aux187_opfor_combat_speeder",
			"aux187_opfor_octuptarra_torpedo",
			"aux187_opfor_octuptarra_combat",
			"aux187_opfor_n99",
			"aux187_opfor_hailfire_art",
			"aux187_opfor_hailfire_aa",
			"aux187_opfor_hailfire_at",
			"aux187_opfor_DSD",
			"aux187_opfor_MTT",
			"aux187_opfor_AAT_Shield",
			"aux187_opfor_AAT_Flamer",
			"aux187_opfor_AAT_Defoliator",
			"aux187_opfor_AAT_snow",
			"aux187_opfor_AAT_Sand",
			"aux187_opfor_AAT_Arid",
			"aux187_opfor_AAT_Heavy",
			"aux187_opfor_AAT",
			
			"aux187_opfor_og9",
			"aux187_opfor_protonCannon",
			"aux187_opfor_particleCannon",
			"aux187_opfor_J1_protonCannon_legged",
			"aux187_opfor_J1_protonCannon",
			"aux187_opfor_flakCannon",
			"aux187_opfor_navalGun_inverted",
			"aux187_opfor_navalGun",
			"aux187_opfor_mortar",
			"aux187_opfor_fcp",
			"aux187_opfor_j10s"

		};
		weapons[] = 
		{
			"aux187_opfor_e5",
			"aux187_opfor_e5s",
			"aux187_opfor_e5c",
			"aux187_opfor_e5_shield",
			"aux187_opfor_sbb3",
			"aux187_opfor_droidekaBlaster",
		};
		magazines[] = {};
		ammo[] = {};
	};
};

class XtdGearModels
{
	class CfgWeapons
	{
		#include "weapons\XtdGearModels.hpp"
	};
};

class CfgWeapons
{
	#include "weapons\CfgWeapons.hpp"
};

class CfgVehicles
{
	#include "units\CfgVehicles.hpp"
};

class CfgMagazines
{
	#include "weapons\CfgMagazines.hpp"
};

class CfgAmmo
{
	#include "weapons\CfgAmmo.hpp"
};

class cfgGroups
{
	#include "units\CfgGroups.hpp"
};

#include "CfgFactionClasses.hpp"
#include "CfgEditorCategories.hpp"
#include "CfgEditorSubCategories.hpp"
