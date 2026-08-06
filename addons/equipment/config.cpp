#include "script_component.hpp"

class CfgPatches
{
	class aux187_Equipment_Addon
	{
		name = "187th Legion Equipment";
		author = "Tim";
		requiredVersion = 0.01;
		requiredAddons[] = 
		{
			"ace_arsenal_extended", 
			"A3_Characters_F",
			"JLTS_characters_CloneArmor",
			"3AS_Characters",
		};
		units[] = 
		{
            //UNIFORM VEHICLES
			"aux187_Base",
			"aux187_P2_Base",
			"aux187_P2_CP",
			"aux187_P2_CS",
			"aux187_P2_CGS",
			"aux187_P2_CL",
			"aux187_P2_CC",
			"aux187_P2_CO",
			"aux187_P2_CM",
			"aux187_P2_BaseEOD",
			"aux187_P2_BaseMedic",
			"aux187_P2_Veteran",
			"aux187_P2_VeteranEOD",
			"aux187_P2_VeteranMedic",
			"aux187_RC_Base",
			"aux187_RC_Sand",
			"aux187_RC_Snow",
			"aux187_RC_Wood",
		};
		weapons[] = 
        {
            //UNIFORMS
            "aux187_Uniform_Base",
			"aux187_P2_Base_Uniform",
            "aux187_P2_Recruit_Uniform",
			"aux187_P2_CC_Uniform",
			"aux187_P2_CP_Uniform",
			"aux187_P2_CS_Uniform",
			"aux187_P2_CGS_Uniform",
			"aux187_P2_CL_Uniform",
			"aux187_P2_CO_Uniform",
			"aux187_P2_CM_Uniform",
			"aux187_P2_BaseEOD_Uniform",
			"aux187_P2_BaseMedic_Uniform",
			"aux187_P2_Sand_Uniform",
			"aux187_P2_Snow_Uniform",
			"aux187_P2_Wood_Uniform",
			"aux187_P2_Veteran_Uniform",
			"aux187_P2_VeteranEOD_Uniform",
			"aux187_P2_VeteranMedic_Uniform",
			"aux187_RC_Base_Uniform",
			"aux187_RC_Sand_Uniform",
			"aux187_RC_Snow_Uniform",
			"aux187_RC_Wood_Uniform",
			"aux187_Airborne_Base_Uniform",
			"aux187_Airborne_BaseEOD_Uniform",
			"aux187_Airborne_BaseMedic_Uniform",
			"aux187_Airborne_Veteran_Uniform",
			"aux187_Airborne_VeteranEOD_Uniform",
			"aux187_Airborne_VeteranMedic_Uniform",


            //HELMETS
            "aux187_Helmet_Base",
			"aux187_P2_Base_Helmet",
			"aux187_P2_Sand_Helmet",
			"aux187_P2_Snow_Helmet",
			"aux187_P2_Wood_Helmet",
			"aux187_ARF_Base_Helmet",
			"aux187_ARF_Sand_Helmet",
			"aux187_ARF_Snow_Helmet",
			"aux187_ARF_Wood_Helmet",
			"aux187_Pilot_Base_Helmet",
			"aux187_RC_Base_Helmet",
			"aux187_RC_Sand_Helmet",
			"aux187_RC_Snow_Helmet",
			"aux187_RC_Wood_Helmet",
            "aux187_BARC_Base_Helmet",
            "aux187_ARC_Base_Helmet",
            "aux187_Airborne_Base_Helmet",

			//WEAPONS
			"aux187_DC15S",
			"aux187_DC15A",
			"aux187_DC15C",
			"aux187_DC15S_GL",
			"aux187_DC15A_GL",
			"aux187_DC15C_GL",
			"aux187_RPS6",
			"aux187_RPS6_Disposable",
			"aux187_PLX1",
			"aux187_Z6",
			"aux187_DC15L",
			"aux187_DC15X",
			"aux187_Valken38X",
			"aux187_Firepuncher",
			"aux187_E7",
			"aux187_DC15S_shield",
			"aux187_DC17M",
			"aux187_DLT16",
			"aux187_DC17",
			"aux187_DC15P",
			"aux187_DP23",
			"aux187_Knife",
			"aux187_Baton"
        };
		magazines[] = {};
		ammo[] = {};
	};
};

class XtdGearModels
{
    class CfgWeapons
    {
        #include "uniforms\XtdGearModels.hpp"
        #include "helmets\XtdGearModels.hpp"
		#include "weapons\XtdGearModels.hpp"
    };
};

class XtdGearInfos
{
	class CfgWeapons
	{
		#include "weapons\XtdGearInfos.hpp"
	};
};

class CfgVehicles
{
    #include "uniforms\CfgVehicles.hpp"
};

class CfgWeapons
{
    class baseClass;
    #include "uniforms\CfgWeapons.hpp"
    #include "helmets\CfgWeapons.hpp"
	#include "weapons\CfgWeapons.hpp"
};

class CfgMagazines
{
	#include "weapons\CfgMagazines.hpp"
};

class CfgAmmo
{
	#include "weapons\CfgAmmo.hpp"
};
