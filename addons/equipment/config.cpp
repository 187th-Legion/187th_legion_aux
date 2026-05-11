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

			//CUSTOM UNIFORMS
			"aux187_Custom_Blade",
			"aux187_Custom_Boss",
			"aux187_Custom_Buzz",
			"aux187_Custom_Crypto",
			"aux187_Custom_Dross",
			"aux187_Custom_Dubz",
			"aux187_Custom_Fader",
			"aux187_Custom_Hesh",
			"aux187_Custom_Horizon",
			"aux187_Custom_Hunt",
			"aux187_Custom_Iron",
			"aux187_Custom_Isaac",
			"aux187_Custom_Kalani",
			"aux187_Custom_Kraken",
			"aux187_Custom_Lord",
			"aux187_Custom_Mindless",
			"aux187_Custom_Mixer",
			"aux187_Custom_Nexu",
			"aux187_Custom_Ouroboros",
			"aux187_Custom_Ringer",
			"aux187_Custom_Seek",
			"aux187_Custom_Solembum",
			"aux187_Custom_Tac",
			"aux187_Custom_Tim",
			"aux187_Custom_Toad",
			"aux187_Custom_Un",
			"aux187_Custom_Vinokurov",
			"aux187_Custom_Revan",
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
            "aux187_Airborne_Base_Helmet",

			//CUSTOM UNIFORMS
			"aux187_Uniform_Custom_Blade",
			"aux187_Uniform_Custom_Boss",
			"aux187_Uniform_Custom_Buzz",
			"aux187_Uniform_Custom_Crypto",
			"aux187_Uniform_Custom_Dross",
			"aux187_Uniform_Custom_Dubz",
			"aux187_Uniform_Custom_Fader",
			"aux187_Uniform_Custom_Hesh",
			"aux187_Uniform_Custom_Horizon",
			"aux187_Uniform_Custom_Hunt",
			"aux187_Uniform_Custom_Iron",
			"aux187_Uniform_Custom_Isaac",
			"aux187_Uniform_Custom_Kalani",
			"aux187_Uniform_Custom_Kraken",
			"aux187_Uniform_Custom_Lord",
			"aux187_Uniform_Custom_Mindless",
			"aux187_Uniform_Custom_Mixer",
			"aux187_Uniform_Custom_Nexu",
			"aux187_Uniform_Custom_Ouroboros",
			"aux187_Uniform_Custom_Horizon",
			"aux187_Uniform_Custom_Ringer",
			"aux187_Uniform_Custom_Seek",
			"aux187_Uniform_Custom_Solembum",
			"aux187_Uniform_Custom_Tac",
			"aux187_Uniform_Custom_Tim",
			"aux187_Uniform_Custom_Toad",
			"aux187_Uniform_Custom_Un",
			"aux187_Uniform_Custom_Vinokurov",
			"aux187_Uniform_Custom_Revan",

			"aux187_Helmet_Custom_Ouroboros",
			"aux187_Helmet_Custom_Blade",
			"aux187_Helmet_Custom_Boss",
			"aux187_Helmet_Custom_Knight",
			"aux187_Helmet_Custom_Buzz",
			"aux187_Helmet_Custom_Carmine",
			"aux187_Helmet_Custom_Crypto",
			"aux187_Helmet_Custom_Dross",
			"aux187_Helmet_Custom_Fader",
			"aux187_Helmet_Custom_Fish",
			"aux187_Helmet_Custom_Fives",
			"aux187_Helmet_Custom_Fluffy",
			"aux187_Helmet_Custom_Hesh",
			"aux187_Helmet_Custom_Horizon",
			"aux187_Helmet_Custom_Hunt",
			"aux187_Helmet_Custom_Iron",
			"aux187_Helmet_Custom_Isaac",
			"aux187_Helmet_Custom_Kalani",
			"aux187_Helmet_Custom_Koss",
			"aux187_Helmet_Custom_Kraken",
			"aux187_Helmet_Custom_Lord",
			"aux187_Helmet_Custom_Mindless",
			"aux187_Helmet_Custom_Mixer",
			"aux187_Helmet_Custom_Nexu",
			"aux187_Helmet_Custom_Panda",
			"aux187_Helmet_Custom_Ringer",
			"aux187_Helmet_Custom_Seek",
			"aux187_Helmet_Custom_Solembum",
			"aux187_Helmet_Custom_Star",
			"aux187_Helmet_Custom_Tac",
			"aux187_Helmet_Custom_Ted",
			"aux187_Helmet_Custom_Tim",
			"aux187_Helmet_Custom_Un",
			"aux187_Helmet_Custom_Vinokurov",
			"aux187_Helmet_Custom_Icarus",
			"aux187_Helmet_Custom_Revan",
			"aux187_Helmet_Custom_Tyr",
			"aux187_Helmet_Custom_Dubz",
			"aux187_Helmet_Custom_Ixi",
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

		#include "helmets\customs\XtdGearModels_Custom.hpp"
		#include "uniforms\customs\XtdGearModels_Custom.hpp"
    };
};

class CfgVehicles
{
    #include "uniforms\CfgVehicles.hpp"

	#include "uniforms\customs\CfgVehicles_Custom.hpp"
};

class CfgWeapons
{
    #include "uniforms\CfgWeapons.hpp"
    #include "helmets\CfgWeapons.hpp"

	#include "helmets\customs\CfgWeapons_Custom.hpp"
	#include "uniforms\customs\CfgWeapons_Custom.hpp"
};
