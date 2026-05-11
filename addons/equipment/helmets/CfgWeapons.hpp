	class ls_cloneHelmet_arf;
	class JLTS_CloneHelmetP2;
	class JLTS_CloneHelmetBARC;
    class JLTS_CloneHelmetAirborne;
	class 3AS_H_Katarn_Helmet;
	class 3as_P2_Pilot_helmet;

	class aux187_Helmet_Base : JLTS_CloneHelmetP2
	{
		author = "Tim";
		scope = 2;
		displayName = "[187th] Base Helmets";
		
		class XtdGearInfo
		{
			model = "aux187_Helmet_Model";
		};
	};

	/*
	---------------------------------------------------------------
	                      P2 HELMET CLASSES
	---------------------------------------------------------------
	*/
	class aux187_P2_Base_Helmet : JLTS_CloneHelmetP2
	{
		displayName = "[187th] P2 Trooper Helmet (Base)";
		author = "Tim";
		
		
		hiddenSelectionsTextures[] = { QPATHTOF(helmets\data\187th_P2_Base_Helmet.paa), QPATHTOF(helmets\data\187th_P2_Base_Helmet.paa) };
		
		class XtdGearInfo {
			model = "aux187_Helmet_Model";
			helmetType = "P2";
			camoType = "Base";
		};
	};
	
	class aux187_P2_Veteran_Helmet : JLTS_CloneHelmetP2
	{
		displayName = "[187th] P2 Trooper Helmet (Veteran)";
		author = "Tim";
		
		
		hiddenSelectionsTextures[] = { QPATHTOF(helmets\data\187th_P2_Veteran_Helmet.paa), QPATHTOF(helmets\data\187th_P2_Veteran_Helmet.paa) };
		
		class XtdGearInfo {
			model = "aux187_Helmet_Model";
			helmetType = "P2";
			camoType = "Veteran";
		};
	};
	
	class aux187_P2_Sand_Helmet : JLTS_CloneHelmetP2
	{
		displayName = "[187th] P2 Trooper Helmet (Sand)";
		author = "Tim";
		
		
		hiddenSelectionsTextures[] = { QPATHTOF(helmets\data\187th_P2_Sand_Helmet.paa), QPATHTOF(helmets\data\187th_P2_Sand_Helmet.paa) };
		
		class XtdGearInfo {
			model = "aux187_Helmet_Model";
			helmetType = "P2";
			camoType = "Sand";
		};
	};
	
	class aux187_P2_Snow_Helmet : JLTS_CloneHelmetP2
	{
		displayName = "[187th] P2 Trooper Helmet (Snow)";
		author = "Tim";
		
		
		hiddenSelectionsTextures[] = { QPATHTOF(helmets\data\187th_P2_Snow_Helmet.paa), QPATHTOF(helmets\data\187th_P2_Snow_Helmet.paa) };
		
		class XtdGearInfo {
			model = "aux187_Helmet_Model";
			helmetType = "P2";
			camoType = "Snow";
		};
	};
	
	class aux187_P2_Wood_Helmet : JLTS_CloneHelmetP2
	{
		displayName = "[187th] P2 Trooper Helmet (Wood)";
		author = "Tim";
		
		
		hiddenSelectionsTextures[] = { QPATHTOF(helmets\data\187th_P2_Wood_Helmet.paa), QPATHTOF(helmets\data\187th_P2_Wood_Helmet.paa) };
		
		class XtdGearInfo {
			model = "aux187_Helmet_Model";
			helmetType = "P2";
			camoType = "Wood";
		};
	};
	/*
	---------------------------------------------------------------
	                   COMMANDO HELMET CLASSES
	---------------------------------------------------------------
	*/
	class aux187_RC_Base_Helmet : 3AS_H_Katarn_Helmet
	{
		displayName = "[187th] Katarn Helmet (Base)";
		author = "Tim";
		
		
		hiddenSelectionsTextures[] = { QPATHTOF(helmets\data\187th_RC_Base_Helmet.paa), QPATHTOF(helmets\data\187th_RC_Base_Helmet.paa) };
		
		class XtdGearInfo {
			model = "aux187_Helmet_Model";
			helmetType = "RC";
			camoType = "Base";
		};
	};
	
	class aux187_RC_Sand_Helmet : 3AS_H_Katarn_Helmet
	{
		displayName = "[187th] Katarn Helmet (Sand)";
		author = "Tim";
		
		
		hiddenSelectionsTextures[] = { QPATHTOF(helmets\data\187th_RC_Sand_Helmet.paa), QPATHTOF(helmets\data\187th_RC_Sand_Helmet.paa) };
		
		class XtdGearInfo {
			model = "aux187_Helmet_Model";
			helmetType = "RC";
			camoType = "Sand";
		};
	};
	
	class aux187_RC_Snow_Helmet : 3AS_H_Katarn_Helmet
	{
		displayName = "[187th] Katarn Helmet (Snow)";
		author = "Tim";
		
		
		hiddenSelectionsTextures[] = { QPATHTOF(helmets\data\187th_RC_Snow_Helmet.paa), QPATHTOF(helmets\data\187th_RC_Snow_Helmet.paa) };
		
		class XtdGearInfo {
			model = "aux187_Helmet_Model";
			helmetType = "RC";
			camoType = "Snow";
		};
	};
	
	class aux187_RC_Wood_Helmet : 3AS_H_Katarn_Helmet
	{
		displayName = "[187th] Katarn Helmet (Wood)";
		author = "Tim";
		
		
		hiddenSelectionsTextures[] = { QPATHTOF(helmets\data\187th_RC_Wood_Helmet.paa), QPATHTOF(helmets\data\187th_RC_Wood_Helmet.paa) };
		
		class XtdGearInfo {
			model = "aux187_Helmet_Model";
			helmetType = "RC";
			camoType = "Wood";
		};
	};
	/*
	---------------------------------------------------------------
	                      ARF HELMET CLASSES
	---------------------------------------------------------------
	*/
	class aux187_ARF_Base_Helmet : ls_cloneHelmet_arf
	{
		displayName = "[187th] ARF Trooper Helmet (Base)";
		author = "Tim";
		
		
		hiddenSelectionsTextures[] = { QPATHTOF(helmets\data\187th_ARF_Base_Helmet.paa), QPATHTOF(helmets\data\187th_ARF_Base_Helmet.paa) };
        hiddenSelectionsMaterials[] = { "", "" };
		
		class XtdGearInfo {
			model = "aux187_Helmet_Model";
			helmetType = "ARF";
			camoType = "Base";
		};
	};
	
	class aux187_ARF_Sand_Helmet : ls_cloneHelmet_arf
	{
		displayName = "[187th] ARF Trooper Helmet (Sand)";
		author = "Tim";
		
		
		hiddenSelectionsTextures[] = { QPATHTOF(helmets\data\187th_ARF_Sand_Helmet.paa), QPATHTOF(helmets\data\187th_ARF_Sand_Helmet.paa) };
        hiddenSelectionsMaterials[] = { "", "" };
		
		class XtdGearInfo {
			model = "aux187_Helmet_Model";
			helmetType = "ARF";
			camoType = "Sand";
		};
	};
	
	class aux187_ARF_Snow_Helmet : ls_cloneHelmet_arf
	{
		displayName = "[187th] ARF Trooper Helmet (Snow)";
		author = "Tim";
		
		
		hiddenSelectionsTextures[] = { QPATHTOF(helmets\data\187th_ARF_Snow_Helmet.paa), QPATHTOF(helmets\data\187th_ARF_Snow_Helmet.paa) };
        hiddenSelectionsMaterials[] = { "", "" };
		
		class XtdGearInfo {
			model = "aux187_Helmet_Model";
			helmetType = "ARF";
			camoType = "Snow";
		};
	};
	
	class aux187_ARF_Wood_Helmet : ls_cloneHelmet_arf
	{
		displayName = "[187th] ARF Trooper Helmet (Wood)";
		author = "Tim";
		
		
		hiddenSelectionsTextures[] = { QPATHTOF(helmets\data\187th_ARF_Wood_Helmet.paa), QPATHTOF(helmets\data\187th_ARF_Wood_Helmet.paa) };
        hiddenSelectionsMaterials[] = { "", "" };
		
		class XtdGearInfo {
			model = "aux187_Helmet_Model";
			helmetType = "ARF";
			camoType = "Wood";
		};
	};
	
	/*
	---------------------------------------------------------------
	                    MISC HELMET CLASSES
	---------------------------------------------------------------
	*/
	
	class aux187_Pilot_Base_Helmet : 3as_P2_Pilot_helmet
	{
		displayName = "[187th] Pilot Helmet (Base)";
		author = "Tim";
		
		
		hiddenSelectionsTextures[] = { QPATHTOF(helmets\data\187th_Pilot_Base_Helmet.paa), "", "3AS\3AS_Characters\Clones\Headgear\Textures\PilotP2\Phase_2_Pilot_Tubes_co.paa", QPATHTOF(helmets\data\187th_Pilot_Base_Helmet.paa), "" };
		
		class XtdGearInfo {
			model = "aux187_Helmet_Model";
			helmetType = "Pilot";
			camoType = "Base";
		};
	};
	
	class aux187_ARC_Base_Helmet : JLTS_CloneHelmetP2
	{
		displayName = "[187th] P2 Trooper Helmet (ARC)";
		author = "Tim";
		
		
		hiddenSelectionsTextures[] = { QPATHTOF(helmets\data\187th_ARC_Base_Helmet.paa), QPATHTOF(helmets\data\187th_ARC_Base_Helmet.paa) };
		
		class XtdGearInfo {
			model = "aux187_Helmet_Model";
			helmetType = "ARC";
			camoType = "Base";
		};
	};
	
	class aux187_BARC_Base_Helmet : JLTS_CloneHelmetBARC
	{
		displayName = "[187th] P2 Trooper Helmet (BARC)";
		author = "Tim";
		
		
		hiddenSelectionsTextures[] = { QPATHTOF(helmets\data\187th_BARC_Base_Helmet.paa), QPATHTOF(helmets\data\187th_BARC_Base_Helmet.paa) };
		
		class XtdGearInfo {
			model = "aux187_Helmet_Model";
			helmetType = "BARC";
			camoType = "Base";
		};
	};

    class aux187_Airborne_Base_Helmet : JLTS_CloneHelmetAirborne
	{
		displayName = "[187th] P2 Trooper Helmet (Airborne)";
		author = "Tim";
		
		
		hiddenSelectionsTextures[] = { QPATHTOF(helmets\data\187th_Airborne_Base_Helmet.paa), QPATHTOF(helmets\data\187th_Airborne_Base_Helmet.paa) };
		
		class XtdGearInfo {
			model = "aux187_Helmet_Model";
			helmetType = "Airborne";
			camoType = "Base";
		};
	};
