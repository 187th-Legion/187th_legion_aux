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
			"WM_Clones",
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
			"aux187_P3_Base",
			"aux187_P3_Sand",
			"aux187_P3_Snow",
			"aux187_P3_Wood",
			"aux187_P3_Veteran",
			"aux187_P3_Sand",
			"aux187_P3_Snow",
			"aux187_P3_Wood",
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
			"aux187_P3_Base_Uniform",
			"aux187_P3_Sand_Uniform",
			"aux187_P3_Snow_Uniform",
			"aux187_P3_Wood_Uniform",
			"aux187_P3_Veteran_Uniform",
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
            "aux187_Airborne_Base_Helmet"
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
};
