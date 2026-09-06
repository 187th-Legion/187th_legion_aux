	class JLTS_Clone_P2_DC15S;
	class 3AS_Rep_Commando_F;
	
	class aux187_Base : JLTS_Clone_P2_DC15S
	{
		scope = 1;
		uniformClass = "aux187_Uniform_Base";
	};
	
	/*
	---------------------------------------------------------------
	                  PHASE 2 VEHICLE CLASSES
	---------------------------------------------------------------
	*/
	class aux187_P2_Base : JLTS_Clone_P2_DC15S // Phase 2 Base
	{
		scope = 1;
		uniformClass = "aux187_P2_Base_Uniform";
	

		hiddenSelectionsTextures[] = { QPATHTOF(uniforms\data\187th_P2_Base_Torso.paa), QPATHTOF(uniforms\data\187th_P2_Base_Legs.paa) };

		class Wounds {
            tex[] = {};
            mat[] = {
                "MRC\JLTS\Characters\CloneArmor\data\Clone_armor1.rvmat",
                "MRC\JLTS\Characters\CloneArmor\data\Clone_armor1_injury.rvmat",
                "MRC\JLTS\Characters\CloneArmor\data\Clone_armor1_injury.rvmat",
                "MRC\JLTS\Characters\CloneArmor\data\Clone_armor2.rvmat",
                "MRC\JLTS\Characters\CloneArmor\data\Clone_armor2_injury.rvmat",
                "MRC\JLTS\Characters\CloneArmor\data\Clone_armor2_injury.rvmat",
                "A3\Characters_F\Common\Data\basicbody.rvmat",
                "A3\Characters_F\Common\Data\basicbody_injury.rvmat",
                "A3\Characters_F\Common\Data\basicbody_injury.rvmat",
                "a3\characters_f\heads\data\hl_white.rvmat",
                "a3\characters_f\heads\data\hl_white_injury.rvmat",
                "a3\characters_f\heads\data\hl_white_injury.rvmat",
                "A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat",
                "A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat",
                "A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat",
                "A3\Characters_F\Heads\Data\hl_white_02_bald_muscular.rvmat",
                "A3\Characters_F\Heads\Data\hl_white_02_bald_muscular_injury.rvmat",
                "A3\Characters_F\Heads\Data\hl_white_02_bald_muscular_injury.rvmat",
                "A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat",
                "A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat",
                "A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat",
                "A3\Characters_F\Heads\Data\hl_white_hairy_muscular.rvmat",
                "A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat",
                "A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat",
                "A3\Characters_F\Heads\Data\hl_white_old.rvmat",
                "A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat",
                "A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat",
                "A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat",
                "A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat",
                "A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat",
                "A3\Characters_F_Exp\Heads\Data\hl_tanoan_bald_muscular.rvmat",
                "A3\Characters_F_Exp\Heads\Data\hl_tanoan_bald_muscular_injury.rvmat",
                "A3\Characters_F_Exp\Heads\Data\hl_tanoan_bald_muscular_injury.rvmat",
                "A3\Characters_F_Exp\Heads\Data\hl_asian_02_bald_muscular.rvmat",
                "A3\Characters_F_Exp\Heads\Data\hl_asian_02_bald_muscular_injury.rvmat",
                "A3\Characters_F_Exp\Heads\Data\hl_asian_02_bald_muscular_injury.rvmat"
            };
        };
	};

	class aux187_P2_Recruit : aux187_P2_Base // Phase 2 Recruit
	{
		scope = 1;
		uniformClass = "aux187_P2_Recruit_Uniform";
		

		hiddenSelectionsTextures[] = { QPATHTOF(uniforms\data\187th_P2_Recruit_Torso.paa), "\MRC\JLTS\characters\CloneArmor\data\Clone_armor2_co.paa" };
	};
	
	class aux187_P2_BaseEOD : aux187_P2_Base // Phase 2 Base EOD
	{
		scope = 1;
		uniformClass = "aux187_P2_BaseEOD_Uniform";
		

		hiddenSelectionsTextures[] = { QPATHTOF(uniforms\data\187th_P2_BaseEOD_Torso.paa), QPATHTOF(uniforms\data\187th_P2_Base_Legs.paa) };
	};
	
	class aux187_P2_BaseMedic : aux187_P2_Base // Phase 2 Base Medic
	{
		scope = 1;
		uniformClass = "aux187_P2_BaseMedic_Uniform";
		

		hiddenSelectionsTextures[] = { QPATHTOF(uniforms\data\187th_P2_BaseMedic_Torso.paa), QPATHTOF(uniforms\data\187th_P2_Base_Legs.paa) };
	};
	
	class aux187_P2_Veteran : aux187_P2_Base
	{
		scope = 1;
		uniformClass = "aux187_P2_Veteran_Uniform"; // Phase 2 Veteran
		

		hiddenSelectionsTextures[] = { QPATHTOF(uniforms\data\187th_P2_Veteran_Torso.paa), QPATHTOF(uniforms\data\187th_P2_Veteran_Legs.paa) };
	};
	
	class aux187_P2_VeteranEOD : aux187_P2_Base // Phase 2 Veteran EOD
	{
		scope = 1;
		uniformClass = "aux187_P2_VeteranEOD_Uniform";
		

		hiddenSelectionsTextures[] = { QPATHTOF(uniforms\data\187th_P2_VeteranEOD_Torso.paa), QPATHTOF(uniforms\data\187th_P2_Veteran_Legs.paa) };
	};
	
	class aux187_P2_VeteranMedic : aux187_P2_Base // Phase 2 Veteran Medic
	{
		scope = 1;
		uniformClass = "aux187_P2_VeteranMedic_Uniform";
		

		hiddenSelectionsTextures[] = { QPATHTOF(uniforms\data\187th_P2_VeteranMedic_Torso.paa), QPATHTOF(uniforms\data\187th_P2_Veteran_Legs.paa) };
	};
	
	class aux187_P2_CP : aux187_P2_Base // Phase 2 CP
	{
		scope = 1;
		uniformClass = "aux187_P2_CP_Uniform";
		

		hiddenSelectionsTextures[] = { QPATHTOF(uniforms\data\187th_P2_CP_Torso.paa), QPATHTOF(uniforms\data\187th_P2_CP_Legs.paa) };
	};
	
	class aux187_P2_CS : aux187_P2_Base // Phase 2 CS
	{
		scope = 1;
		uniformClass = "aux187_P2_CS_Uniform";
		

		hiddenSelectionsTextures[] = { QPATHTOF(uniforms\data\187th_P2_CS_Torso.paa), QPATHTOF(uniforms\data\187th_P2_CS_Legs.paa) };
	};
	
	class aux187_P2_CGS : aux187_P2_Base // Phase 2 CGS
	{
		scope = 1;
		uniformClass = "aux187_P2_CGS_Uniform";
		

		hiddenSelectionsTextures[] = { QPATHTOF(uniforms\data\187th_P2_CGS_Torso.paa), QPATHTOF(uniforms\data\187th_P2_CGS_Legs.paa) };
	};
	
	class aux187_P2_CL : aux187_P2_Base // Phase 2 CL
	{
		scope = 1;
		uniformClass = "aux187_P2_CL_Uniform";

		//model = "\MRC\JLTS\characters\CloneArmor\CloneArmorMC.p3d";
		
		hiddenSelections[] = 
		{
            "camo1",
			"camo2",
			//"camo3"
        };
		hiddenSelectionsTextures[] = { QPATHTOF(uniforms\data\187th_P2_CL_Torso.paa), QPATHTOF(uniforms\data\187th_P2_Base_Legs.paa), QPATHTOF(uniforms\data\Rank_Slider\Clone_Rank_CL.paa) };
	};
	
	class aux187_P2_CC : aux187_P2_Base // Phase 2 CC
	{
		scope = 1;
		uniformClass = "aux187_P2_CC_Uniform";
		
		//model = "\MRC\JLTS\characters\CloneArmor\CloneArmorMC.p3d";

		hiddenSelections[] = 
		{
            "camo1",
			"camo2",
			//"camo3"
        };
		hiddenSelectionsTextures[] = { QPATHTOF(uniforms\data\187th_P2_CC_Torso.paa), QPATHTOF(uniforms\data\187th_P2_Base_Legs.paa), QPATHTOF(uniforms\data\Rank_Slider\Clone_Rank_CC.paa) };
	};
	
	class aux187_P2_CO : aux187_P2_Base // Phase 2 CO
	{
		scope = 1;
		uniformClass = "aux187_P2_CO_Uniform";

		//model = "\MRC\JLTS\characters\CloneArmor\CloneArmorMC.p3d";
		
		hiddenSelections[] = 
		{
            "camo1",
			"camo2",
			//"camo3"
        };
		hiddenSelectionsTextures[] = { QPATHTOF(uniforms\data\187th_P2_CO_Torso.paa), QPATHTOF(uniforms\data\187th_P2_Base_Legs.paa), QPATHTOF(uniforms\data\Rank_Slider\Clone_Rank_CO.paa) };
	};
	
	class aux187_P2_CM : aux187_P2_Base // Phase 2 CM
	{
		scope = 1;
		uniformClass = "aux187_P2_CM_Uniform";

		//model = "\MRC\JLTS\characters\CloneArmor\CloneArmorMC.p3d";
		
		hiddenSelections[] = 
		{
            "camo1",
			"camo2",
			//"camo3"
        };
		hiddenSelectionsTextures[] = { QPATHTOF(uniforms\data\187th_P2_CM_Torso.paa), QPATHTOF(uniforms\data\187th_P2_Base_Legs.paa), QPATHTOF(uniforms\data\Rank_Slider\Clone_Rank_CM.paa) };
	};
	
	class aux187_P2_Sand : aux187_P2_Base // Phase 2 Sand
	{
		scope = 1;
		uniformClass = "aux187_P2_Sand_Uniform";
		

		hiddenSelectionsTextures[] = { QPATHTOF(uniforms\data\187th_P2_Sand_Torso.paa), QPATHTOF(uniforms\data\187th_P2_Sand_Legs.paa) };
	};
	
	class aux187_P2_Snow : aux187_P2_Base // Phase 2 Snow
	{
		scope = 1;
		uniformClass = "aux187_P2_Snow_Uniform";
		

		hiddenSelectionsTextures[] = { QPATHTOF(uniforms\data\187th_P2_Snow_Torso.paa), QPATHTOF(uniforms\data\187th_P2_Snow_Legs.paa) };
	};
	
	class aux187_P2_Wood : aux187_P2_Base // Phase 2 Wood
	{
		scope = 1;
		uniformClass = "aux187_P2_Wood_Uniform";
		

		hiddenSelectionsTextures[] = { QPATHTOF(uniforms\data\187th_P2_Wood_Torso.paa), QPATHTOF(uniforms\data\187th_P2_Wood_Legs.paa) };
	};
	
	/*
	---------------------------------------------------------------
	                  AIRBORNE VEHICLE CLASSES
	---------------------------------------------------------------
	*/
	
	class aux187_Airborne_Base : aux187_P2_Base // Phase 2 Base
	{
		scope = 1;
		uniformClass = "aux187_Airborne_Base_Uniform";
		

		hiddenSelectionsTextures[] = { QPATHTOF(uniforms\data\187th_Airborne_Base_Torso.paa), QPATHTOF(uniforms\data\187th_Airborne_Base_Legs.paa) };
	};
	
	class aux187_Airborne_BaseEOD : aux187_P2_Base // Phase 2 Base EOD
	{
		scope = 1;
		uniformClass = "aux187_Airborne_BaseEOD_Uniform";
		

		hiddenSelectionsTextures[] = { QPATHTOF(uniforms\data\187th_Airborne_BaseEOD_Torso.paa), QPATHTOF(uniforms\data\187th_Airborne_Base_Legs.paa) };
	};
	
	class aux187_Airborne_BaseMedic : aux187_P2_Base // Phase 2 Base Medic
	{
		scope = 1;
		uniformClass = "aux187_Airborne_BaseMedic_Uniform";
		

		hiddenSelectionsTextures[] = { QPATHTOF(uniforms\data\187th_Airborne_BaseMedic_Torso.paa), QPATHTOF(uniforms\data\187th_Airborne_Base_Legs.paa) };
	};
	
	class aux187_Airborne_Veteran : aux187_P2_Base
	{
		scope = 1;
		uniformClass = "aux187_Airborne_Veteran_Uniform"; // Phase 2 Veteran
		

		hiddenSelectionsTextures[] = { QPATHTOF(uniforms\data\187th_Airborne_Veteran_Torso.paa), QPATHTOF(uniforms\data\187th_Airborne_Base_Legs.paa) };
	};
	
	class aux187_Airborne_VeteranEOD : aux187_P2_Base // Phase 2 Veteran EOD
	{
		scope = 1;
		uniformClass = "aux187_Airborne_VeteranEOD_Uniform";
		

		hiddenSelectionsTextures[] = { QPATHTOF(uniforms\data\187th_Airborne_VeteranEOD_Torso.paa), QPATHTOF(uniforms\data\187th_Airborne_Base_Legs.paa) };
	};
	
	class aux187_Airborne_VeteranMedic : aux187_P2_Base // Phase 2 Veteran Medic
	{
		scope = 1;
		uniformClass = "aux187_Airborne_VeteranMedic_Uniform";
		

		hiddenSelectionsTextures[] = { QPATHTOF(uniforms\data\187th_Airborne_VeteranMedic_Torso.paa), QPATHTOF(uniforms\data\187th_Airborne_Base_Legs.paa) };
	};

	/*
	---------------------------------------------------------------
	                  COMMANDO VEHICLE CLASSES
	---------------------------------------------------------------
	*/
	
	class aux187_RC_Base : 3AS_Rep_Commando_F // Commando Base
	{
		scope = 1;
		uniformClass = "aux187_RC_Base_Uniform";
		
		
		hiddenSelectionsTextures[] = { QPATHTOF(uniforms\data\187th_RC_Base.paa), "\3AS\3AS_Characters\Commando\data\Katarn_Undersuit_CO.paa" };
	};
	
	class aux187_RC_Sand : 3AS_Rep_Commando_F // Commando Sand
	{
		scope = 1;
		uniformClass = "aux187_RC_Sand_Uniform";
		
		
		hiddenSelectionsTextures[] = { QPATHTOF(uniforms\data\187th_RC_Sand.paa), "\3AS\3AS_Characters\Commando\data\Katarn_Undersuit_CO.paa" };
	};
	
	class aux187_RC_Snow : 3AS_Rep_Commando_F // Commando Snow
	{
		scope = 1;
		uniformClass = "aux187_RC_Snow_Uniform";
		
		
		hiddenSelectionsTextures[] = { QPATHTOF(uniforms\data\187th_RC_Snow.paa), "\3AS\3AS_Characters\Commando\data\Katarn_Undersuit_CO.paa" };
	};
	
	class aux187_RC_Wood : 3AS_Rep_Commando_F // Commando Wood
	{
		scope = 1;
		uniformClass = "aux187_RC_Wood_Uniform";
		
		
		hiddenSelectionsTextures[] = { QPATHTOF(uniforms\data\187th_RC_Wood.paa), "\3AS\3AS_Characters\Commando\data\Katarn_Undersuit_CO.paa" };
	};
