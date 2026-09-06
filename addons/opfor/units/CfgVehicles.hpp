	class MainTurret;
	class Turrets;



//Base Classes
	class WBK_LS_B1;
    class aux187_opfor_b1_base : WBK_LS_B1
	{
		author = "Tim";
		displayName = "Base";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;

		icon = "iconMan";
	};

	class WBK_LS_BX;
    class aux187_opfor_bx_base : WBK_LS_BX
	{
		author = "Tim";
		displayName = "Base";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;

		icon = "iconMan";
	};

	class WBK_LS_B2;
    class aux187_opfor_b2_base : WBK_LS_B2
	{
		author = "Tim";
		displayName = "Base";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;

		icon = "iconMan";
	};

//B1 DROIDS

    class aux187_opfor_b1 : aux187_opfor_b1_base
	{
		author = "Tim";
		displayName = "B1 Battle Droid";
		faction = "aux187_Faction_Droids";
		editorSubcategory = "aux187_edSubCat_BattleDroids";

		canDeactivateMines = 0;
		engineer = 0;
		attendant = 1;
		icon = "iconMan";
		
		backpack = "ls_droidBackpack_b1";
        uniformClass = "ls_droidUniform_b1";
		weapons[] = { "aux187_opfor_e5", "Throw", "Put" };
		respawnWeapons[] = { "aux187_opfor_e5", "Throw", "Put" };
		Items[] = { "FirstAidKit" };
		RespawnItems[] = { "FirstAidKit" };
		magazines[] = { "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red" };
		respawnMagazines[] = { "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red" };
		linkedItems[] = { "ls_droidHelmet_b1", "JLTS_NVG_droid_chip_1", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio" };
		respawnLinkedItems[] = { "ls_droidHelmet_b1", "JLTS_NVG_droid_chip_1", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio" };
	};

	class aux187_opfor_b1_cqb : aux187_opfor_b1_base
	{
		author = "Tim";
		displayName = "B1 Battle Droid (CQB)";
		faction = "aux187_Faction_Droids";
		editorSubcategory = "aux187_edSubCat_BattleDroids";

		canDeactivateMines = 0;
		engineer = 0;
		attendant = 1;
		icon = "iconMan";
		
		backpack = "ls_droidBackpack_b1_grenadier";
        uniformClass = "ls_droidUniform_b1_grenadier";
		weapons[] = { "aux187_opfor_sbb3", "Throw", "Put" };
		respawnWeapons[] = { "aux187_opfor_sbb3", "Throw", "Put" };
		Items[] = { "FirstAidKit" };
		RespawnItems[] = { "FirstAidKit" };
		magazines[] = { "IDA_Blaster_Cell_Scatter_6Rnd_Red", "IDA_Blaster_Cell_Scatter_6Rnd_Red", "IDA_Blaster_Cell_Scatter_6Rnd_Red", "IDA_Blaster_Cell_Scatter_6Rnd_Red", "IDA_Blaster_Cell_Scatter_6Rnd_Red", "IDA_Blaster_Cell_Scatter_6Rnd_Red" };
		respawnMagazines[] = { "IDA_Blaster_Cell_Scatter_6Rnd_Red", "IDA_Blaster_Cell_Scatter_6Rnd_Red", "IDA_Blaster_Cell_Scatter_6Rnd_Red", "IDA_Blaster_Cell_Scatter_6Rnd_Red", "IDA_Blaster_Cell_Scatter_6Rnd_Red", "IDA_Blaster_Cell_Scatter_6Rnd_Red" };
		linkedItems[] = { "ls_droidHelmet_b1_grenadier", "JLTS_NVG_droid_chip_1", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio" };
		respawnLinkedItems[] = { "ls_droidHelmet_b1_grenadier", "JLTS_NVG_droid_chip_1", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio" };
	};

    class aux187_opfor_b1_autorifleman : aux187_opfor_b1_base
	{
		author = "Tim";
		displayName = "B1 Battle Droid (AR)";
		faction = "aux187_Faction_Droids";
		editorSubcategory = "aux187_edSubCat_BattleDroids";

		canDeactivateMines = 0;
		engineer = 0;
		attendant = 1;
		icon = "iconManMG";
		
		backpack = "ls_droidBackpack_b1_heavy";
        uniformClass = "ls_droidUniform_b1_heavy";
		weapons[] = { "aux187_opfor_e5c", "Throw", "Put" };
		respawnWeapons[] = { "aux187_opfor_e5c", "Throw", "Put" };
		Items[] = { "FirstAidKit" };
		RespawnItems[] = { "FirstAidKit" };
		magazines[] = { "IDA_Blaster_Cell_Power3_60Rnd_Red", "IDA_Blaster_Cell_Power3_60Rnd_Red", "IDA_Blaster_Cell_Power3_60Rnd_Red", "IDA_Blaster_Cell_Power3_60Rnd_Red", "IDA_Blaster_Cell_Power3_60Rnd_Red", "IDA_Blaster_Cell_Power3_60Rnd_Red" };
		respawnMagazines[] = { "IDA_Blaster_Cell_Power3_60Rnd_Red", "IDA_Blaster_Cell_Power3_60Rnd_Red", "IDA_Blaster_Cell_Power3_60Rnd_Red", "IDA_Blaster_Cell_Power3_60Rnd_Red", "IDA_Blaster_Cell_Power3_60Rnd_Red", "IDA_Blaster_Cell_Power3_60Rnd_Red" };
		linkedItems[] = { "ls_droidHelmet_b1", "JLTS_NVG_droid_chip_1", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio" };
		respawnLinkedItems[] = { "ls_droidHelmet_b1", "JLTS_NVG_droid_chip_1", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio" };
	};

    class aux187_opfor_b1_at : aux187_opfor_b1_base
	{
		author = "Tim";
		displayName = "B1 Battle Droid (AT)";
		faction = "aux187_Faction_Droids";
		editorSubcategory = "aux187_edSubCat_BattleDroids";

		canDeactivateMines = 0;
		engineer = 0;
		attendant = 1;
		icon = "iconManAT";
		
		backpack = "ls_droidBackpack_b1";
        uniformClass = "ls_droidUniform_b1";
		weapons[] = { "aux187_opfor_e5", "aux187_rps6", "Throw", "Put" };
		respawnWeapons[] = { "aux187_opfor_e5", "aux187_rps6", "Throw", "Put" };
		Items[] = { "FirstAidKit" };
		RespawnItems[] = { "FirstAidKit" };
		magazines[] = { "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red", "JLTS_RPS6_mag", "JLTS_RPS6_mag" };
		respawnMagazines[] = { "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red", "JLTS_RPS6_mag", "JLTS_RPS6_mag" };
		linkedItems[] = { "ls_droidHelmet_b1", "JLTS_NVG_droid_chip_1", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio" };
		respawnLinkedItems[] = { "ls_droidHelmet_b1", "JLTS_NVG_droid_chip_1", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio" };
	};

	class aux187_opfor_b1_aa : aux187_opfor_b1_base
	{
		author = "Tim";
		displayName = "B1 Battle Droid (AA)";
		faction = "aux187_Faction_Droids";
		editorSubcategory = "aux187_edSubCat_BattleDroids";

		canDeactivateMines = 0;
		engineer = 0;
		attendant = 1;
		icon = "iconManAT";
		
		backpack = "ls_droidBackpack_b1";
        uniformClass = "ls_droidUniform_b1";
		weapons[] = { "aux187_opfor_e5", "ls_weapon_e60r_aa", "Throw", "Put" };
		respawnWeapons[] = { "aux187_opfor_e5", "ls_weapon_e60r_aa", "Throw", "Put" };
		Items[] = { "FirstAidKit" };
		RespawnItems[] = { "FirstAidKit" };
		magazines[] = { "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red", "ls_magazine_e60r_aa" };
		respawnMagazines[] = { "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red", "ls_magazine_e60r_aa" };
		linkedItems[] = { "ls_droidHelmet_b1", "JLTS_NVG_droid_chip_1", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio" };
		respawnLinkedItems[] = { "ls_droidHelmet_b1", "JLTS_NVG_droid_chip_1", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio" };
	};

    class aux187_opfor_b1_crew : aux187_opfor_b1_base
	{
		author = "Tim";
		displayName = "B1 Battle Droid (Crew)";
		faction = "aux187_Faction_Droids";
		editorSubcategory = "aux187_edSubCat_BattleDroids";

		canDeactivateMines = 0;
		engineer = 1;
		attendant = 1;
		icon = "iconManEngineer";
		
		backpack = "ls_droidBackpack_b1_crew";
        uniformClass = "ls_droidUniform_b1_crew";
		weapons[] = { "aux187_opfor_e5", "Throw", "Put" };
		respawnWeapons[] = { "aux187_opfor_e5", "Throw", "Put" };
		Items[] = { "FirstAidKit" };
		RespawnItems[] = { "FirstAidKit" };
		magazines[] = { "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red" };
		respawnMagazines[] = { "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red" };
		linkedItems[] = { "ls_droidHelmet_b1_crew", "JLTS_NVG_droid_chip_1", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio" };
		respawnLinkedItems[] = { "ls_droidHelmet_b1_crew", "JLTS_NVG_droid_chip_1", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio" };
	};

	class aux187_opfor_b1_engineer : aux187_opfor_b1_base
	{
		author = "Tim";
		displayName = "B1 Battle Droid (Engineer)";
		faction = "aux187_Faction_Droids";
		editorSubcategory = "aux187_edSubCat_BattleDroids";

		canDeactivateMines = 1;
		engineer = 1;
		attendant = 1;
		icon = "iconManEngineer";
		
		backpack = "ls_droidBackpack_b1_engineer";
        uniformClass = "ls_droidUniform_b1_engineer";
		weapons[] = { "aux187_opfor_sbb3", "Throw", "Put" };
		respawnWeapons[] = { "aux187_opfor_sbb3", "Throw", "Put" };
		Items[] = { "FirstAidKit" };
		RespawnItems[] = { "FirstAidKit" };
		magazines[] = { "IDA_Blaster_Cell_Scatter_6Rnd_Red", "IDA_Blaster_Cell_Scatter_6Rnd_Red", "IDA_Blaster_Cell_Scatter_6Rnd_Red", "IDA_Blaster_Cell_Scatter_6Rnd_Red", "IDA_Blaster_Cell_Scatter_6Rnd_Red", "IDA_Blaster_Cell_Scatter_6Rnd_Red" };
		respawnMagazines[] = { "IDA_Blaster_Cell_Scatter_6Rnd_Red", "IDA_Blaster_Cell_Scatter_6Rnd_Red", "IDA_Blaster_Cell_Scatter_6Rnd_Red", "IDA_Blaster_Cell_Scatter_6Rnd_Red", "IDA_Blaster_Cell_Scatter_6Rnd_Red", "IDA_Blaster_Cell_Scatter_6Rnd_Red" };
		linkedItems[] = { "ls_droidHelmet_b1", "ls_droidNVG_b1Headlamp", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio" };
		respawnLinkedItems[] = { "ls_droidHelmet_b1", "ls_droidNVG_b1Headlamp", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio" };
	};

	class aux187_opfor_b1_scout : aux187_opfor_b1_base
	{
		author = "Tim";
		displayName = "B1 Battle Droid (Scout)";
		faction = "aux187_Faction_Droids";
		editorSubcategory = "aux187_edSubCat_BattleDroids";

		canDeactivateMines = 0;
		engineer = 0;
		attendant = 1;
		icon = "iconMan";
		
		backpack = "ls_droidBackpack_b1_scout";
        uniformClass = "ls_droidUniform_b1_scout";
		weapons[] = { "aux187_opfor_e5s", "Throw", "Put" };
		respawnWeapons[] = { "aux187_opfor_e5s", "Throw", "Put" };
		Items[] = { "FirstAidKit" };
		RespawnItems[] = { "FirstAidKit" };
		magazines[] = { "IDA_Blaster_Cell_Power5_5Rnd_Red", "IDA_Blaster_Cell_Power5_5Rnd_Red", "IDA_Blaster_Cell_Power5_5Rnd_Red", "IDA_Blaster_Cell_Power5_5Rnd_Red", "IDA_Blaster_Cell_Power5_5Rnd_Red", "IDA_Blaster_Cell_Power5_5Rnd_Red" };
		respawnMagazines[] = { "IDA_Blaster_Cell_Power5_5Rnd_Red", "IDA_Blaster_Cell_Power5_5Rnd_Red", "IDA_Blaster_Cell_Power5_5Rnd_Red", "IDA_Blaster_Cell_Power5_5Rnd_Red", "IDA_Blaster_Cell_Power5_5Rnd_Red", "IDA_Blaster_Cell_Power5_5Rnd_Red" };
		linkedItems[] = { "ls_droidHelmet_b1_scout", "JLTS_NVG_droid_chip_1", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio" };
		respawnLinkedItems[] = { "ls_droidHelmet_b1_scout", "JLTS_NVG_droid_chip_1", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio" };
	};

	class aux187_opfor_b1_commander : aux187_opfor_b1_base
	{
		author = "Tim";
		displayName = "B1 Battle Droid (Commander)";
		faction = "aux187_Faction_Droids";
		editorSubcategory = "aux187_edSubCat_BattleDroids";

		canDeactivateMines = 0;
		engineer = 0;
		attendant = 1;
		icon = "iconManLeader";
		
		backpack = "ls_droidBackpack_b1_commander";
        uniformClass = "ls_droidUniform_b1_commander";
		weapons[] = { "aux187_opfor_e5", "Throw", "Put" };
		respawnWeapons[] = { "aux187_opfor_e5", "Throw", "Put" };
		Items[] = { "FirstAidKit" };
		RespawnItems[] = { "FirstAidKit" };
		magazines[] = { "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red" };
		respawnMagazines[] = { "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red" };
		linkedItems[] = { "ls_droidHelmet_b1_commander", "JLTS_NVG_droid_chip_1", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio" };
		respawnLinkedItems[] = { "ls_droidHelmet_b1_commander", "JLTS_NVG_droid_chip_1", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio" };
	};

	class aux187_opfor_b1_pilot : aux187_opfor_b1_base
	{
		author = "Tim";
		displayName = "B1 Battle Droid (Pilot)";
		faction = "aux187_Faction_Droids";
		editorSubcategory = "aux187_edSubCat_BattleDroids";

		canDeactivateMines = 0;
		engineer = 0;
		attendant = 1;
		icon = "iconMan";
		
		backpack = "ls_droidBackpack_b1_pilot";
        uniformClass = "ls_droidUniform_b1_pilot";
		weapons[] = { "aux187_opfor_e5", "Throw", "Put" };
		respawnWeapons[] = { "aux187_opfor_e5", "Throw", "Put" };
		Items[] = { "FirstAidKit" };
		RespawnItems[] = { "FirstAidKit" };
		magazines[] = { "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red" };
		respawnMagazines[] = { "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red" };
		linkedItems[] = { "ls_droidHelmet_b1", "JLTS_NVG_droid_chip_1", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio" };
		respawnLinkedItems[] = { "ls_droidHelmet_b1", "JLTS_NVG_droid_chip_1", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio" };
	};

		class aux187_opfor_b1_geonosis : aux187_opfor_b1_base
	{
		author = "Tim";
		displayName = "B1 Battle Droid";
		faction = "aux187_Faction_Droids";
		editorSubcategory = "aux187_edSubCat_BattleDroids_Geonosis";

		canDeactivateMines = 0;
		engineer = 0;
		attendant = 1;
		icon = "iconMan";
		
		backpack = "ls_droidBackpack_b1_geonosis";
        uniformClass = "ls_droidUniform_b1_geonosis";
		weapons[] = { "aux187_opfor_e5", "Throw", "Put" };
		respawnWeapons[] = { "aux187_opfor_e5", "Throw", "Put" };
		Items[] = { "FirstAidKit" };
		RespawnItems[] = { "FirstAidKit" };
		magazines[] = { "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red" };
		respawnMagazines[] = { "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red" };
		linkedItems[] = { "ls_droidHelmet_b1_geonosis", "JLTS_NVG_droid_chip_1", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio" };
		respawnLinkedItems[] = { "ls_droidHelmet_b1_geonosis", "JLTS_NVG_droid_chip_1", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio" };
	};

	class aux187_opfor_b1_cqb_geonosis : aux187_opfor_b1_base
	{
		author = "Tim";
		displayName = "B1 Battle Droid (CQB)";
		faction = "aux187_Faction_Droids";
		editorSubcategory = "aux187_edSubCat_BattleDroids_geonosis";

		canDeactivateMines = 0;
		engineer = 0;
		attendant = 1;
		icon = "iconMan";
		
		backpack = "ls_droidBackpack_b1_grenadier_geonosis";
        uniformClass = "ls_droidUniform_b1_grenadier_geonosis";
		weapons[] = { "aux187_opfor_sbb3", "Throw", "Put" };
		respawnWeapons[] = { "aux187_opfor_sbb3", "Throw", "Put" };
		Items[] = { "FirstAidKit" };
		RespawnItems[] = { "FirstAidKit" };
		magazines[] = { "IDA_Blaster_Cell_Scatter_6Rnd_Red", "IDA_Blaster_Cell_Scatter_6Rnd_Red", "IDA_Blaster_Cell_Scatter_6Rnd_Red", "IDA_Blaster_Cell_Scatter_6Rnd_Red", "IDA_Blaster_Cell_Scatter_6Rnd_Red", "IDA_Blaster_Cell_Scatter_6Rnd_Red" };
		respawnMagazines[] = { "IDA_Blaster_Cell_Scatter_6Rnd_Red", "IDA_Blaster_Cell_Scatter_6Rnd_Red", "IDA_Blaster_Cell_Scatter_6Rnd_Red", "IDA_Blaster_Cell_Scatter_6Rnd_Red", "IDA_Blaster_Cell_Scatter_6Rnd_Red", "IDA_Blaster_Cell_Scatter_6Rnd_Red" };
		linkedItems[] = { "ls_droidHelmet_b1_grenadier_geonosis", "JLTS_NVG_droid_chip_1", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio" };
		respawnLinkedItems[] = { "ls_droidHelmet_b1_grenadier_geonosis", "JLTS_NVG_droid_chip_1", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio" };
	};

    class aux187_opfor_b1_autorifleman_geonosis : aux187_opfor_b1_base
	{
		author = "Tim";
		displayName = "B1 Battle Droid (AR)";
		faction = "aux187_Faction_Droids";
		editorSubcategory = "aux187_edSubCat_BattleDroids_Geonosis";

		canDeactivateMines = 0;
		engineer = 0;
		attendant = 1;
		icon = "iconManMG";
		
		backpack = "ls_droidBackpack_b1_geonosis";
        uniformClass = "ls_droidUniform_b1_geonosis";
		weapons[] = { "aux187_opfor_e5c", "Throw", "Put" };
		respawnWeapons[] = { "aux187_opfor_e5c", "Throw", "Put" };
		Items[] = { "FirstAidKit" };
		RespawnItems[] = { "FirstAidKit" };
		magazines[] = { "IDA_Blaster_Cell_Power3_60Rnd_Red", "IDA_Blaster_Cell_Power3_60Rnd_Red", "IDA_Blaster_Cell_Power3_60Rnd_Red", "IDA_Blaster_Cell_Power3_60Rnd_Red", "IDA_Blaster_Cell_Power3_60Rnd_Red", "IDA_Blaster_Cell_Power3_60Rnd_Red" };
		respawnMagazines[] = { "IDA_Blaster_Cell_Power3_60Rnd_Red", "IDA_Blaster_Cell_Power3_60Rnd_Red", "IDA_Blaster_Cell_Power3_60Rnd_Red", "IDA_Blaster_Cell_Power3_60Rnd_Red", "IDA_Blaster_Cell_Power3_60Rnd_Red", "IDA_Blaster_Cell_Power3_60Rnd_Red" };
		linkedItems[] = { "ls_droidHelmet_b1_geonosis", "JLTS_NVG_droid_chip_1", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio" };
		respawnLinkedItems[] = { "ls_droidHelmet_b1_geonosis", "JLTS_NVG_droid_chip_1", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio" };
	};

    class aux187_opfor_b1_at_geonosis : aux187_opfor_b1_base
	{
		author = "Tim";
		displayName = "B1 Battle Droid (AT)";
		faction = "aux187_Faction_Droids";
		editorSubcategory = "aux187_edSubCat_BattleDroids_Geonosis";

		canDeactivateMines = 0;
		engineer = 0;
		attendant = 1;
		icon = "iconManAT";
		
		backpack = "ls_droidBackpack_b1_geonosis";
        uniformClass = "ls_droidUniform_b1_geonosis";
		weapons[] = { "aux187_opfor_e5", "aux187_rps6", "Throw", "Put" };
		respawnWeapons[] = { "aux187_opfor_e5", "aux187_rps6", "Throw", "Put" };
		Items[] = { "FirstAidKit" };
		RespawnItems[] = { "FirstAidKit" };
		magazines[] = { "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red", "JLTS_RPS6_mag", "JLTS_RPS6_mag", "JLTS_RPS6_mag" };
		respawnMagazines[] = { "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red", "JLTS_RPS6_mag", "JLTS_RPS6_mag", "JLTS_RPS6_mag" };
		linkedItems[] = { "ls_droidHelmet_b1_geonosis", "JLTS_NVG_droid_chip_1", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio" };
		respawnLinkedItems[] = { "ls_droidHelmet_b1_geonosis", "JLTS_NVG_droid_chip_1", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio" };
	};

	class aux187_opfor_b1_engineer_geonosis : aux187_opfor_b1_base
	{
		author = "Tim";
		displayName = "B1 Battle Droid (Engineer)";
		faction = "aux187_Faction_Droids";
		editorSubcategory = "aux187_edSubCat_BattleDroids_Geonosis";

		canDeactivateMines = 1;
		engineer = 1;
		attendant = 1;
		icon = "iconManEngineer";
		
		backpack = "ls_droidBackpack_b1_engineer_geonosis";
        uniformClass = "ls_droidUniform_b1_engineer_geonosis";
		weapons[] = { "aux187_opfor_sbb3", "Throw", "Put" };
		respawnWeapons[] = { "aux187_opfor_sbb3", "Throw", "Put" };
		Items[] = { "FirstAidKit" };
		RespawnItems[] = { "FirstAidKit" };
		magazines[] = { "IDA_Blaster_Cell_Scatter_6Rnd_Red", "IDA_Blaster_Cell_Scatter_6Rnd_Red", "IDA_Blaster_Cell_Scatter_6Rnd_Red", "IDA_Blaster_Cell_Scatter_6Rnd_Red", "IDA_Blaster_Cell_Scatter_6Rnd_Red", "IDA_Blaster_Cell_Scatter_6Rnd_Red" };
		respawnMagazines[] = { "IDA_Blaster_Cell_Scatter_6Rnd_Red", "IDA_Blaster_Cell_Scatter_6Rnd_Red", "IDA_Blaster_Cell_Scatter_6Rnd_Red", "IDA_Blaster_Cell_Scatter_6Rnd_Red", "IDA_Blaster_Cell_Scatter_6Rnd_Red", "IDA_Blaster_Cell_Scatter_6Rnd_Red" };
		linkedItems[] = { "ls_droidHelmet_b1_geonosis", "ls_droidNVG_b1Headlamp_geonosis", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio" };
		respawnLinkedItems[] = { "ls_droidHelmet_b1_geonosis", "ls_droidNVG_b1Headlamp_geonosis", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio" };
	};

	class aux187_opfor_b1_scout_geonosis : aux187_opfor_b1_base
	{
		author = "Tim";
		displayName = "B1 Battle Droid (Scout)";
		faction = "aux187_Faction_Droids";
		editorSubcategory = "aux187_edSubCat_BattleDroids_Geonosis";

		canDeactivateMines = 0;
		engineer = 0;
		attendant = 1;
		icon = "iconMan";
		
		backpack = "ls_droidBackpack_b1_scout_geonosis";
        uniformClass = "ls_droidUniform_b1_scout_geonosis";
		weapons[] = { "aux187_opfor_e5s", "Throw", "Put" };
		respawnWeapons[] = { "aux187_opfor_e5s", "Throw", "Put" };
		Items[] = { "FirstAidKit" };
		RespawnItems[] = { "FirstAidKit" };
		magazines[] = { "IDA_Blaster_Cell_Power5_5Rnd_Red", "IDA_Blaster_Cell_Power5_5Rnd_Red", "IDA_Blaster_Cell_Power5_5Rnd_Red", "IDA_Blaster_Cell_Power5_5Rnd_Red", "IDA_Blaster_Cell_Power5_5Rnd_Red", "IDA_Blaster_Cell_Power5_5Rnd_Red" };
		respawnMagazines[] = { "IDA_Blaster_Cell_Power5_5Rnd_Red", "IDA_Blaster_Cell_Power5_5Rnd_Red", "IDA_Blaster_Cell_Power5_5Rnd_Red", "IDA_Blaster_Cell_Power5_5Rnd_Red", "IDA_Blaster_Cell_Power5_5Rnd_Red", "IDA_Blaster_Cell_Power5_5Rnd_Red" };
		linkedItems[] = { "ls_droidHelmet_b1_scout_geonosis", "JLTS_NVG_droid_chip_1", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio" };
		respawnLinkedItems[] = { "ls_droidHelmet_b1_scout_geonosis", "JLTS_NVG_droid_chip_1", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio" };
	};

	class aux187_opfor_b1_commander_geonosis : aux187_opfor_b1_base
	{
		author = "Tim";
		displayName = "B1 Battle Droid (Commander)";
		faction = "aux187_Faction_Droids";
		editorSubcategory = "aux187_edSubCat_BattleDroids_Geonosis";

		canDeactivateMines = 0;
		engineer = 0;
		attendant = 1;
		icon = "iconManLeader";
		
		backpack = "ls_droidBackpack_b1_commander_geonosis";
        uniformClass = "ls_droidUniform_b1_commander_geonosis";
		weapons[] = { "aux187_opfor_e5", "Throw", "Put" };
		respawnWeapons[] = { "aux187_opfor_e5", "Throw", "Put" };
		Items[] = { "FirstAidKit" };
		RespawnItems[] = { "FirstAidKit" };
		magazines[] = { "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red" };
		respawnMagazines[] = { "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red" };
		linkedItems[] = { "ls_droidHelmet_b1_commander_geonosis", "JLTS_NVG_droid_chip_1", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio" };
		respawnLinkedItems[] = { "ls_droidHelmet_b1_commander_geonosis", "JLTS_NVG_droid_chip_1", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio" };
	};

	class aux187_opfor_b1_crew_geonosis : aux187_opfor_b1_base
	{
		author = "Tim";
		displayName = "B1 Battle Droid (Crew)";
		faction = "aux187_Faction_Droids";
		editorSubcategory = "aux187_edSubCat_BattleDroids_Geonosis";

		canDeactivateMines = 0;
		engineer = 1;
		attendant = 1;
		icon = "iconManEngineer";
		
		backpack = "ls_droidBackpack_b1_crew_geonosis";
        uniformClass = "ls_droidUniform_b1_crew_geonosis";
		weapons[] = { "aux187_opfor_e5", "Throw", "Put" };
		respawnWeapons[] = { "aux187_opfor_e5", "Throw", "Put" };
		Items[] = { "FirstAidKit" };
		RespawnItems[] = { "FirstAidKit" };
		magazines[] = { "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red" };
		respawnMagazines[] = { "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red" };
		linkedItems[] = { "ls_droidHelmet_b1_crew_geonosis", "JLTS_NVG_droid_chip_1", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio" };
		respawnLinkedItems[] = { "ls_droidHelmet_b1_crew_geonosis", "JLTS_NVG_droid_chip_1", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio" };
	};

	class aux187_opfor_b1_pilot_geonosis : aux187_opfor_b1_base
	{
		author = "Tim";
		displayName = "B1 Battle Droid (Pilot)";
		faction = "aux187_Faction_Droids";
		editorSubcategory = "aux187_edSubCat_BattleDroids_Geonosis";

		canDeactivateMines = 0;
		engineer = 0;
		attendant = 1;
		icon = "iconMan";
		
		backpack = "ls_droidBackpack_b1_pilot_geonosis";
        uniformClass = "ls_droidUniform_b1_pilot_geonosis";
		weapons[] = { "aux187_opfor_e5", "Throw", "Put" };
		respawnWeapons[] = { "aux187_opfor_e5", "Throw", "Put" };
		Items[] = { "FirstAidKit" };
		RespawnItems[] = { "FirstAidKit" };
		magazines[] = { "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red" };
		respawnMagazines[] = { "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red" };
		linkedItems[] = { "ls_droidHelmet_b1_geonosis", "JLTS_NVG_droid_chip_1", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio" };
		respawnLinkedItems[] = { "ls_droidHelmet_b1_geonosis", "JLTS_NVG_droid_chip_1", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio" };
	};

		class aux187_opfor_b1_training : aux187_opfor_b1_base
	{
		author = "Tim";
		displayName = "B1 Battle Droid";
		faction = "aux187_Faction_Droids";
		editorSubcategory = "aux187_edSubCat_BattleDroids_training";

		canDeactivateMines = 0;
		engineer = 0;
		attendant = 1;
		icon = "iconMan";
		picture = "";
		backpack = "ls_droidBackpack_b1_training";
        uniformClass = "ls_droidUniform_b1_training";
		weapons[] = { "aux187_opfor_e5", "Throw", "Put" };
		respawnWeapons[] = { "aux187_opfor_e5", "Throw", "Put" };
		Items[] = { "FirstAidKit" };
		RespawnItems[] = { "FirstAidKit" };
		magazines[] = { "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red" };
		respawnMagazines[] = { "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red" };
		linkedItems[] = { "ls_droidHelmet_b1_training", "JLTS_NVG_droid_chip_1", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio" };
		respawnLinkedItems[] = { "ls_droidHelmet_b1_training", "JLTS_NVG_droid_chip_1", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio" };
	};

    class aux187_opfor_b1_autorifleman_training : aux187_opfor_b1_base
	{
		author = "Tim";
		displayName = "B1 Battle Droid (AR)";
		faction = "aux187_Faction_Droids";
		editorSubcategory = "aux187_edSubCat_BattleDroids_training";

		canDeactivateMines = 0;
		engineer = 0;
		attendant = 1;
		icon = "iconManMG";
		picture = "";
		backpack = "ls_droidBackpack_b1_training";
        uniformClass = "ls_droidUniform_b1_training";
		weapons[] = { "aux187_opfor_e5c", "Throw", "Put" };
		respawnWeapons[] = { "aux187_opfor_e5c", "Throw", "Put" };
		Items[] = { "FirstAidKit" };
		RespawnItems[] = { "FirstAidKit" };
		magazines[] = { "IDA_Blaster_Cell_Power3_60Rnd_Red", "IDA_Blaster_Cell_Power3_60Rnd_Red", "IDA_Blaster_Cell_Power3_60Rnd_Red", "IDA_Blaster_Cell_Power3_60Rnd_Red", "IDA_Blaster_Cell_Power3_60Rnd_Red", "IDA_Blaster_Cell_Power3_60Rnd_Red" };
		respawnMagazines[] = { "IDA_Blaster_Cell_Power3_60Rnd_Red", "IDA_Blaster_Cell_Power3_60Rnd_Red", "IDA_Blaster_Cell_Power3_60Rnd_Red", "IDA_Blaster_Cell_Power3_60Rnd_Red", "IDA_Blaster_Cell_Power3_60Rnd_Red", "IDA_Blaster_Cell_Power3_60Rnd_Red" };
		linkedItems[] = { "ls_droidHelmet_b1_training", "JLTS_NVG_droid_chip_1", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio" };
		respawnLinkedItems[] = { "ls_droidHelmet_b1_training", "JLTS_NVG_droid_chip_1", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio" };
	};

    class aux187_opfor_b1_at_training : aux187_opfor_b1_base
	{
		author = "Tim";
		displayName = "B1 Battle Droid (AT)";
		faction = "aux187_Faction_Droids";
		editorSubcategory = "aux187_edSubCat_BattleDroids_training";

		canDeactivateMines = 0;
		engineer = 0;
		attendant = 1;
		icon = "iconManAT";
		picture = "";
		backpack = "ls_droidBackpack_b1_training";
        uniformClass = "ls_droidUniform_b1_training";
		weapons[] = { "aux187_opfor_e5", "aux187_rps6", "Throw", "Put" };
		respawnWeapons[] = { "aux187_opfor_e5", "aux187_rps6", "Throw", "Put" };
		Items[] = { "FirstAidKit" };
		RespawnItems[] = { "FirstAidKit" };
		magazines[] = { "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red", "JLTS_RPS6_mag", "JLTS_RPS6_mag" };
		respawnMagazines[] = { "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red", "JLTS_RPS6_mag", "JLTS_RPS6_mag" };
		linkedItems[] = { "ls_droidHelmet_b1_training", "JLTS_NVG_droid_chip_1", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio" };
		respawnLinkedItems[] = { "ls_droidHelmet_b1_training", "JLTS_NVG_droid_chip_1", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio" };
	};

	class aux187_opfor_b1_scout_training : aux187_opfor_b1_base
	{
		author = "Tim";
		displayName = "B1 Battle Droid (Scout)";
		faction = "aux187_Faction_Droids";
		editorSubcategory = "aux187_edSubCat_BattleDroids_training";

		canDeactivateMines = 0;
		engineer = 0;
		attendant = 1;
		icon = "iconMan";
		picture = "";
		backpack = "ls_droidBackpack_b1_training";
        uniformClass = "ls_droidUniform_b1_training";
		weapons[] = { "aux187_opfor_e5s", "Throw", "Put" };
		respawnWeapons[] = { "aux187_opfor_e5s", "Throw", "Put" };
		Items[] = { "FirstAidKit" };
		RespawnItems[] = { "FirstAidKit" };
		magazines[] = { "IDA_Blaster_Cell_Power5_5Rnd_Red", "IDA_Blaster_Cell_Power5_5Rnd_Red", "IDA_Blaster_Cell_Power5_5Rnd_Red", "IDA_Blaster_Cell_Power5_5Rnd_Red", "IDA_Blaster_Cell_Power5_5Rnd_Red", "IDA_Blaster_Cell_Power5_5Rnd_Red" };
		respawnMagazines[] = { "IDA_Blaster_Cell_Power5_5Rnd_Red", "IDA_Blaster_Cell_Power5_5Rnd_Red", "IDA_Blaster_Cell_Power5_5Rnd_Red", "IDA_Blaster_Cell_Power5_5Rnd_Red", "IDA_Blaster_Cell_Power5_5Rnd_Red", "IDA_Blaster_Cell_Power5_5Rnd_Red" };
		linkedItems[] = { "ls_droidHelmet_b1_training", "JLTS_NVG_droid_chip_1", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio" };
		respawnLinkedItems[] = { "ls_droidHelmet_b1_training", "JLTS_NVG_droid_chip_1", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio" };
	};

	class aux187_opfor_b1_advanced : aux187_opfor_b1_base
	{
		author = "Tim";
		displayName = "B1 Battle Droid";
		faction = "aux187_Faction_Droids";
		editorSubcategory = "aux187_edSubCat_BattleDroids_advanced";

		canDeactivateMines = 0;
		engineer = 0;
		attendant = 1;
		icon = "iconMan";
		picture = "";
		backpack = "ls_droidBackpack_b1_advanced";
        uniformClass = "ls_droidUniform_b1_advanced";
		weapons[] = { "aux187_opfor_e5", "Throw", "Put" };
		respawnWeapons[] = { "aux187_opfor_e5", "Throw", "Put" };
		Items[] = { "FirstAidKit" };
		RespawnItems[] = { "FirstAidKit" };
		magazines[] = { "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red" };
		respawnMagazines[] = { "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red" };
		linkedItems[] = { "ls_droidHelmet_b1_advanced", "JLTS_NVG_droid_chip_1", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio" };
		respawnLinkedItems[] = { "ls_droidHelmet_b1_advanced", "JLTS_NVG_droid_chip_1", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio" };
	};

    class aux187_opfor_b1_autorifleman_advanced : aux187_opfor_b1_base
	{
		author = "Tim";
		displayName = "B1 Battle Droid (AR)";
		faction = "aux187_Faction_Droids";
		editorSubcategory = "aux187_edSubCat_BattleDroids_advanced";

		canDeactivateMines = 0;
		engineer = 0;
		attendant = 1;
		icon = "iconManMG";
		picture = "";
		backpack = "ls_droidBackpack_b1_advanced";
        uniformClass = "ls_droidUniform_b1_advanced";
		weapons[] = { "aux187_opfor_e5c", "Throw", "Put" };
		respawnWeapons[] = { "aux187_opfor_e5c", "Throw", "Put" };
		Items[] = { "FirstAidKit" };
		RespawnItems[] = { "FirstAidKit" };
		magazines[] = { "IDA_Blaster_Cell_Power3_60Rnd_Red", "IDA_Blaster_Cell_Power3_60Rnd_Red", "IDA_Blaster_Cell_Power3_60Rnd_Red", "IDA_Blaster_Cell_Power3_60Rnd_Red", "IDA_Blaster_Cell_Power3_60Rnd_Red", "IDA_Blaster_Cell_Power3_60Rnd_Red" };
		respawnMagazines[] = { "IDA_Blaster_Cell_Power3_60Rnd_Red", "IDA_Blaster_Cell_Power3_60Rnd_Red", "IDA_Blaster_Cell_Power3_60Rnd_Red", "IDA_Blaster_Cell_Power3_60Rnd_Red", "IDA_Blaster_Cell_Power3_60Rnd_Red", "IDA_Blaster_Cell_Power3_60Rnd_Red" };
		linkedItems[] = { "ls_droidHelmet_b1_advanced", "JLTS_NVG_droid_chip_1", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio" };
		respawnLinkedItems[] = { "ls_droidHelmet_b1_advanced", "JLTS_NVG_droid_chip_1", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio" };
	};

    class aux187_opfor_b1_at_advanced : aux187_opfor_b1_base
	{
		author = "Tim";
		displayName = "B1 Battle Droid (AT)";
		faction = "aux187_Faction_Droids";
		editorSubcategory = "aux187_edSubCat_BattleDroids_advanced";

		canDeactivateMines = 0;
		engineer = 0;
		attendant = 1;
		icon = "iconManAT";
		picture = "";
		backpack = "ls_droidBackpack_b1_advanced";
        uniformClass = "ls_droidUniform_b1_advanced";
		weapons[] = { "aux187_opfor_e5", "aux187_rps6", "Throw", "Put" };
		respawnWeapons[] = { "aux187_opfor_e5", "aux187_rps6", "Throw", "Put" };
		Items[] = { "FirstAidKit" };
		RespawnItems[] = { "FirstAidKit" };
		magazines[] = { "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red", "JLTS_RPS6_mag", "JLTS_RPS6_mag" };
		respawnMagazines[] = { "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red", "JLTS_RPS6_mag", "JLTS_RPS6_mag" };
		linkedItems[] = { "ls_droidHelmet_b1_advanced", "JLTS_NVG_droid_chip_1", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio" };
		respawnLinkedItems[] = { "ls_droidHelmet_b1_advanced", "JLTS_NVG_droid_chip_1", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio" };
	};

	class aux187_opfor_b1_scout_advanced : aux187_opfor_b1_base
	{
		author = "Tim";
		displayName = "B1 Battle Droid (Scout)";
		faction = "aux187_Faction_Droids";
		editorSubcategory = "aux187_edSubCat_BattleDroids_advanced";

		canDeactivateMines = 0;
		engineer = 0;
		attendant = 1;
		icon = "iconMan";
		picture = "";
		backpack = "ls_droidBackpack_b1_advanced";
        uniformClass = "ls_droidUniform_b1_advanced";
		weapons[] = { "aux187_opfor_e5s", "Throw", "Put" };
		respawnWeapons[] = { "aux187_opfor_e5s", "Throw", "Put" };
		Items[] = { "FirstAidKit" };
		RespawnItems[] = { "FirstAidKit" };
		magazines[] = { "IDA_Blaster_Cell_Power5_5Rnd_Red", "IDA_Blaster_Cell_Power5_5Rnd_Red", "IDA_Blaster_Cell_Power5_5Rnd_Red", "IDA_Blaster_Cell_Power5_5Rnd_Red", "IDA_Blaster_Cell_Power5_5Rnd_Red", "IDA_Blaster_Cell_Power5_5Rnd_Red" };
		respawnMagazines[] = { "IDA_Blaster_Cell_Power5_5Rnd_Red", "IDA_Blaster_Cell_Power5_5Rnd_Red", "IDA_Blaster_Cell_Power5_5Rnd_Red", "IDA_Blaster_Cell_Power5_5Rnd_Red", "IDA_Blaster_Cell_Power5_5Rnd_Red", "IDA_Blaster_Cell_Power5_5Rnd_Red" };
		linkedItems[] = { "ls_droidHelmet_b1_advanced", "JLTS_NVG_droid_chip_1", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio" };
		respawnLinkedItems[] = { "ls_droidHelmet_b1_advanced", "JLTS_NVG_droid_chip_1", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio" };
	};

	class aux187_opfor_b1_marine : aux187_opfor_b1_base
	{
		author = "Tim";
		displayName = "B1 Battle Droid";
		faction = "aux187_Faction_Droids";
		editorSubcategory = "aux187_edSubCat_BattleDroids_marine";

		canDeactivateMines = 0;
		engineer = 0;
		attendant = 1;
		icon = "iconMan";
		picture = "";
		backpack = "ls_droidBackpack_b1_marine";
        uniformClass = "ls_droidUniform_b1_marine";
		weapons[] = { "aux187_opfor_e5", "Throw", "Put" };
		respawnWeapons[] = { "aux187_opfor_e5", "Throw", "Put" };
		Items[] = { "FirstAidKit" };
		RespawnItems[] = { "FirstAidKit" };
		magazines[] = { "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red" };
		respawnMagazines[] = { "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red" };
		linkedItems[] = { "ls_droidHelmet_b1", "JLTS_NVG_droid_chip_1", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio" };
		respawnLinkedItems[] = { "ls_droidHelmet_b1", "JLTS_NVG_droid_chip_1", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio" };
	};

    class aux187_opfor_b1_autorifleman_marine : aux187_opfor_b1_base
	{
		author = "Tim";
		displayName = "B1 Battle Droid (AR)";
		faction = "aux187_Faction_Droids";
		editorSubcategory = "aux187_edSubCat_BattleDroids_marine";

		canDeactivateMines = 0;
		engineer = 0;
		attendant = 1;
		icon = "iconManMG";
		picture = "";
		backpack = "ls_droidBackpack_b1_marine";
        uniformClass = "ls_droidUniform_b1_marine";
		weapons[] = { "aux187_opfor_e5c", "Throw", "Put" };
		respawnWeapons[] = { "aux187_opfor_e5c", "Throw", "Put" };
		Items[] = { "FirstAidKit" };
		RespawnItems[] = { "FirstAidKit" };
		magazines[] = { "IDA_Blaster_Cell_Power3_60Rnd_Red", "IDA_Blaster_Cell_Power3_60Rnd_Red", "IDA_Blaster_Cell_Power3_60Rnd_Red", "IDA_Blaster_Cell_Power3_60Rnd_Red", "IDA_Blaster_Cell_Power3_60Rnd_Red", "IDA_Blaster_Cell_Power3_60Rnd_Red" };
		respawnMagazines[] = { "IDA_Blaster_Cell_Power3_60Rnd_Red", "IDA_Blaster_Cell_Power3_60Rnd_Red", "IDA_Blaster_Cell_Power3_60Rnd_Red", "IDA_Blaster_Cell_Power3_60Rnd_Red", "IDA_Blaster_Cell_Power3_60Rnd_Red", "IDA_Blaster_Cell_Power3_60Rnd_Red" };
		linkedItems[] = { "ls_droidHelmet_b1", "JLTS_NVG_droid_chip_1", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio" };
		respawnLinkedItems[] = { "ls_droidHelmet_b1", "JLTS_NVG_droid_chip_1", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio" };
	};

    class aux187_opfor_b1_at_marine : aux187_opfor_b1_base
	{
		author = "Tim";
		displayName = "B1 Battle Droid (AT)";
		faction = "aux187_Faction_Droids";
		editorSubcategory = "aux187_edSubCat_BattleDroids_marine";

		canDeactivateMines = 0;
		engineer = 0;
		attendant = 1;
		icon = "iconManAT";
		picture = "";
		backpack = "ls_droidBackpack_b1_marine";
        uniformClass = "ls_droidUniform_b1_marine";
		weapons[] = { "aux187_opfor_e5", "aux187_rps6", "Throw", "Put" };
		respawnWeapons[] = { "aux187_opfor_e5", "aux187_rps6", "Throw", "Put" };
		Items[] = { "FirstAidKit" };
		RespawnItems[] = { "FirstAidKit" };
		magazines[] = { "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red", "JLTS_RPS6_mag", "JLTS_RPS6_mag" };
		respawnMagazines[] = { "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red", "JLTS_RPS6_mag", "JLTS_RPS6_mag" };
		linkedItems[] = { "ls_droidHelmet_b1", "JLTS_NVG_droid_chip_1", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio" };
		respawnLinkedItems[] = { "ls_droidHelmet_b1", "JLTS_NVG_droid_chip_1", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio" };
	};

	class aux187_opfor_b1_scout_marine : aux187_opfor_b1_base
	{
		author = "Tim";
		displayName = "B1 Battle Droid (Scout)";
		faction = "aux187_Faction_Droids";
		editorSubcategory = "aux187_edSubCat_BattleDroids_marine";

		canDeactivateMines = 0;
		engineer = 0;
		attendant = 1;
		icon = "iconMan";
		picture = "";
		backpack = "ls_droidBackpack_b1_marine";
        uniformClass = "ls_droidUniform_b1_marine";
		weapons[] = { "aux187_opfor_e5s", "Throw", "Put" };
		respawnWeapons[] = { "aux187_opfor_e5s", "Throw", "Put" };
		Items[] = { "FirstAidKit" };
		RespawnItems[] = { "FirstAidKit" };
		magazines[] = { "IDA_Blaster_Cell_Power5_5Rnd_Red", "IDA_Blaster_Cell_Power5_5Rnd_Red", "IDA_Blaster_Cell_Power5_5Rnd_Red", "IDA_Blaster_Cell_Power5_5Rnd_Red", "IDA_Blaster_Cell_Power5_5Rnd_Red", "IDA_Blaster_Cell_Power5_5Rnd_Red" };
		respawnMagazines[] = { "IDA_Blaster_Cell_Power5_5Rnd_Red", "IDA_Blaster_Cell_Power5_5Rnd_Red", "IDA_Blaster_Cell_Power5_5Rnd_Red", "IDA_Blaster_Cell_Power5_5Rnd_Red", "IDA_Blaster_Cell_Power5_5Rnd_Red", "IDA_Blaster_Cell_Power5_5Rnd_Red" };
		linkedItems[] = { "ls_droidHelmet_b1", "JLTS_NVG_droid_chip_1", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio" };
		respawnLinkedItems[] = { "ls_droidHelmet_b1", "JLTS_NVG_droid_chip_1", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio" };
	};

	class aux187_opfor_b1_security : aux187_opfor_b1_base
	{
		author = "Tim";
		displayName = "B1 Battle Droid";
		faction = "aux187_Faction_Droids";
		editorSubcategory = "aux187_edSubCat_BattleDroids_security";

		canDeactivateMines = 0;
		engineer = 0;
		attendant = 1;
		icon = "iconMan";
		picture = "";
		backpack = "ls_droidBackpack_b1_security";
        uniformClass = "ls_droidUniform_b1_security";
		weapons[] = { "aux187_opfor_e5", "Throw", "Put" };
		respawnWeapons[] = { "aux187_opfor_e5", "Throw", "Put" };
		Items[] = { "FirstAidKit" };
		RespawnItems[] = { "FirstAidKit" };
		magazines[] = { "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red" };
		respawnMagazines[] = { "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red" };
		linkedItems[] = { "ls_droidHelmet_b1", "JLTS_NVG_droid_chip_1", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio" };
		respawnLinkedItems[] = { "ls_droidHelmet_b1", "JLTS_NVG_droid_chip_1", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio" };
	};

    class aux187_opfor_b1_autorifleman_security : aux187_opfor_b1_base
	{
		author = "Tim";
		displayName = "B1 Battle Droid (AR)";
		faction = "aux187_Faction_Droids";
		editorSubcategory = "aux187_edSubCat_BattleDroids_security";

		canDeactivateMines = 0;
		engineer = 0;
		attendant = 1;
		icon = "iconManMG";
		picture = "";
		backpack = "ls_droidBackpack_b1_security";
        uniformClass = "ls_droidUniform_b1_security";
		weapons[] = { "aux187_opfor_e5c", "Throw", "Put" };
		respawnWeapons[] = { "aux187_opfor_e5c", "Throw", "Put" };
		Items[] = { "FirstAidKit" };
		RespawnItems[] = { "FirstAidKit" };
		magazines[] = { "IDA_Blaster_Cell_Power3_60Rnd_Red", "IDA_Blaster_Cell_Power3_60Rnd_Red", "IDA_Blaster_Cell_Power3_60Rnd_Red", "IDA_Blaster_Cell_Power3_60Rnd_Red", "IDA_Blaster_Cell_Power3_60Rnd_Red", "IDA_Blaster_Cell_Power3_60Rnd_Red" };
		respawnMagazines[] = { "IDA_Blaster_Cell_Power3_60Rnd_Red", "IDA_Blaster_Cell_Power3_60Rnd_Red", "IDA_Blaster_Cell_Power3_60Rnd_Red", "IDA_Blaster_Cell_Power3_60Rnd_Red", "IDA_Blaster_Cell_Power3_60Rnd_Red", "IDA_Blaster_Cell_Power3_60Rnd_Red" };
		linkedItems[] = { "ls_droidHelmet_b1", "JLTS_NVG_droid_chip_1", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio" };
		respawnLinkedItems[] = { "ls_droidHelmet_b1", "JLTS_NVG_droid_chip_1", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio" };
	};

    class aux187_opfor_b1_at_security : aux187_opfor_b1_base
	{
		author = "Tim";
		displayName = "B1 Battle Droid (AT)";
		faction = "aux187_Faction_Droids";
		editorSubcategory = "aux187_edSubCat_BattleDroids_security";

		canDeactivateMines = 0;
		engineer = 0;
		attendant = 1;
		icon = "iconManAT";
		picture = "";
		backpack = "ls_droidBackpack_b1_security";
        uniformClass = "ls_droidUniform_b1_security";
		weapons[] = { "aux187_opfor_e5", "aux187_rps6", "Throw", "Put" };
		respawnWeapons[] = { "aux187_opfor_e5", "aux187_rps6", "Throw", "Put" };
		Items[] = { "FirstAidKit" };
		RespawnItems[] = { "FirstAidKit" };
		magazines[] = { "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red", "JLTS_RPS6_mag", "JLTS_RPS6_mag" };
		respawnMagazines[] = { "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red", "JLTS_RPS6_mag", "JLTS_RPS6_mag" };
		linkedItems[] = { "ls_droidHelmet_b1", "JLTS_NVG_droid_chip_1", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio" };
		respawnLinkedItems[] = { "ls_droidHelmet_b1", "JLTS_NVG_droid_chip_1", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio" };
	};

	class aux187_opfor_b1_scout_security : aux187_opfor_b1_base
	{
		author = "Tim";
		displayName = "B1 Battle Droid (Scout)";
		faction = "aux187_Faction_Droids";
		editorSubcategory = "aux187_edSubCat_BattleDroids_security";

		canDeactivateMines = 0;
		engineer = 0;
		attendant = 1;
		icon = "iconMan";
		picture = "";
		backpack = "ls_droidBackpack_b1_security";
        uniformClass = "ls_droidUniform_b1_security";
		weapons[] = { "aux187_opfor_e5s", "Throw", "Put" };
		respawnWeapons[] = { "aux187_opfor_e5s", "Throw", "Put" };
		Items[] = { "FirstAidKit" };
		RespawnItems[] = { "FirstAidKit" };
		magazines[] = { "IDA_Blaster_Cell_Power5_5Rnd_Red", "IDA_Blaster_Cell_Power5_5Rnd_Red", "IDA_Blaster_Cell_Power5_5Rnd_Red", "IDA_Blaster_Cell_Power5_5Rnd_Red", "IDA_Blaster_Cell_Power5_5Rnd_Red", "IDA_Blaster_Cell_Power5_5Rnd_Red" };
		respawnMagazines[] = { "IDA_Blaster_Cell_Power5_5Rnd_Red", "IDA_Blaster_Cell_Power5_5Rnd_Red", "IDA_Blaster_Cell_Power5_5Rnd_Red", "IDA_Blaster_Cell_Power5_5Rnd_Red", "IDA_Blaster_Cell_Power5_5Rnd_Red", "IDA_Blaster_Cell_Power5_5Rnd_Red" };
		linkedItems[] = { "ls_droidHelmet_b1", "JLTS_NVG_droid_chip_1", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio" };
		respawnLinkedItems[] = { "ls_droidHelmet_b1", "JLTS_NVG_droid_chip_1", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio" };
	};

//BX DROIDS

	class aux187_opfor_bx : aux187_opfor_bx_base
	{
		author = "Tim";
		displayName = "BX Commando Droid";
		faction = "aux187_Faction_Droids";
		editorSubcategory = "aux187_edSubCat_SpecOps";

		canDeactivateMines = 0;
		engineer = 0;
		attendant = 1;
		icon = "iconMan";
		
		backpack = "";
        uniformClass = "ls_droidUniform_bx";
		weapons[] = { "aux187_opfor_e5", "Throw", "Put" };
		respawnWeapons[] = { "aux187_opfor_e5", "Throw", "Put" };
		Items[] = { "FirstAidKit" };
		RespawnItems[] = { "FirstAidKit" };
		magazines[] = { "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red" };
		respawnMagazines[] = { "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red" };
		linkedItems[] = { "JLTS_NVG_droid_chip_2", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio" };
		respawnLinkedItems[] = { "JLTS_NVG_droid_chip_2", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio" };
	};

	class aux187_opfor_bx_captain : aux187_opfor_bx_base
	{
		author = "Tim";
		displayName = "BX Commando Droid (Captain)";
		faction = "aux187_Faction_Droids";
		editorSubcategory = "aux187_edSubCat_SpecOps";

		canDeactivateMines = 0;
		engineer = 0;
		attendant = 1;
		icon = "iconManLeader";
		
		backpack = "";
        uniformClass = "ls_droidUniform_bx_captain";
		weapons[] = { "aux187_opfor_e5", "Throw", "Put" };
		respawnWeapons[] = { "aux187_opfor_e5", "Throw", "Put" };
		Items[] = { "FirstAidKit" };
		RespawnItems[] = { "FirstAidKit" };
		magazines[] = { "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red" };
		respawnMagazines[] = { "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red" };
		linkedItems[] = { "JLTS_NVG_droid_chip_2", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio" };
		respawnLinkedItems[] = { "JLTS_NVG_droid_chip_2", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio" };
	};

	class aux187_opfor_bx_training : aux187_opfor_bx_base
	{
		author = "Tim";
		displayName = "BX Commando Droid (Training)";
		faction = "aux187_Faction_Droids";
		editorSubcategory = "aux187_edSubCat_SpecOps";

		canDeactivateMines = 0;
		engineer = 0;
		attendant = 1;
		icon = "iconMan";
		
		backpack = "";
        uniformClass = "ls_droidUniform_bx_training";
		weapons[] = { "aux187_opfor_e5", "Throw", "Put" };
		respawnWeapons[] = { "aux187_opfor_e5", "Throw", "Put" };
		Items[] = { "FirstAidKit" };
		RespawnItems[] = { "FirstAidKit" };
		magazines[] = { "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red" };
		respawnMagazines[] = { "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red" };
		linkedItems[] = { "JLTS_NVG_droid_chip_2", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio" };
		respawnLinkedItems[] = { "JLTS_NVG_droid_chip_2", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio" };
	};

	class aux187_opfor_bx_diplomat : aux187_opfor_bx_base
	{
		author = "Tim";
		displayName = "BX Commando Droid (Diplomat)";
		faction = "aux187_Faction_Droids";
		editorSubcategory = "aux187_edSubCat_SpecOps";

		canDeactivateMines = 0;
		engineer = 0;
		attendant = 1;
		icon = "iconMan";
		
		backpack = "";
        uniformClass = "ls_droidUniform_bx_diplomat";
		weapons[] = { "aux187_opfor_e5", "Throw", "Put" };
		respawnWeapons[] = { "aux187_opfor_e5", "Throw", "Put" };
		Items[] = { "FirstAidKit" };
		RespawnItems[] = { "FirstAidKit" };
		magazines[] = { "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red" };
		respawnMagazines[] = { "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red" };
		linkedItems[] = { "JLTS_NVG_droid_chip_2", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio" };
		respawnLinkedItems[] = { "JLTS_NVG_droid_chip_2", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio" };
	};

	class aux187_opfor_bx_citadel : aux187_opfor_bx_base
	{
		author = "Tim";
		displayName = "BX Commando Droid (Citadel)";
		faction = "aux187_Faction_Droids";
		editorSubcategory = "aux187_edSubCat_SpecOps";

		canDeactivateMines = 0;
		engineer = 0;
		attendant = 1;
		icon = "iconMan";
		
		backpack = "";
        uniformClass = "ls_droidUniform_bx_security";
		weapons[] = { "aux187_opfor_e5", "Throw", "Put" };
		respawnWeapons[] = { "aux187_opfor_e5", "Throw", "Put" };
		Items[] = { "FirstAidKit" };
		RespawnItems[] = { "FirstAidKit" };
		magazines[] = { "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red" };
		respawnMagazines[] = { "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red" };
		linkedItems[] = { "JLTS_NVG_droid_chip_2", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio" };
		respawnLinkedItems[] = { "JLTS_NVG_droid_chip_2", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio" };
	};

	class aux187_opfor_bx_shield : aux187_opfor_bx_base
	{
		author = "Tim";
		displayName = "BX Commando Droid (Shield)";
		faction = "aux187_Faction_Droids";
		editorSubcategory = "aux187_edSubCat_SpecOps";

		canDeactivateMines = 0;
		engineer = 0;
		attendant = 1;
		icon = "iconMan";
		
		backpack = "";
        uniformClass = "ls_droidUniform_bx";
		weapons[] = { "aux187_opfor_e5_shield", "Throw", "Put" };
		respawnWeapons[] = { "aux187_opfor_e5_shield", "Throw", "Put" };
		Items[] = { "FirstAidKit" };
		RespawnItems[] = { "FirstAidKit" };
		magazines[] = { "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red" };
		respawnMagazines[] = { "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red" };
		linkedItems[] = { "JLTS_NVG_droid_chip_2", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio" };
		respawnLinkedItems[] = { "JLTS_NVG_droid_chip_2", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio" };
	};

	class aux187_opfor_bx_citadel_shield : aux187_opfor_bx_base
	{
		author = "Tim";
		displayName = "BX Commando Droid (Citadel, Shield)";
		faction = "aux187_Faction_Droids";
		editorSubcategory = "aux187_edSubCat_SpecOps";

		canDeactivateMines = 0;
		engineer = 0;
		attendant = 1;
		icon = "iconMan";
		
		backpack = "";
        uniformClass = "ls_droidUniform_bx_security";
		weapons[] = { "aux187_opfor_e5_shield", "Throw", "Put" };
		respawnWeapons[] = { "aux187_opfor_e5_shield", "Throw", "Put" };
		Items[] = { "FirstAidKit" };
		RespawnItems[] = { "FirstAidKit" };
		magazines[] = { "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red" };
		respawnMagazines[] = { "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red" };
		linkedItems[] = { "JLTS_NVG_droid_chip_2", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio" };
		respawnLinkedItems[] = { "JLTS_NVG_droid_chip_2", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio" };
	};

	class aux187_opfor_bx_diplomat_shield : aux187_opfor_bx_base
	{
		author = "Tim";
		displayName = "BX Commando Droid (Diplomat, Shield)";
		faction = "aux187_Faction_Droids";
		editorSubcategory = "aux187_edSubCat_SpecOps";

		canDeactivateMines = 0;
		engineer = 0;
		attendant = 1;
		icon = "iconMan";
		
		backpack = "";
        uniformClass = "ls_droidUniform_bx_diplomat";
		weapons[] = { "aux187_opfor_e5_shield", "Throw", "Put" };
		respawnWeapons[] = { "aux187_opfor_e5_shield", "Throw", "Put" };
		Items[] = { "FirstAidKit" };
		RespawnItems[] = { "FirstAidKit" };
		magazines[] = { "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red" };
		respawnMagazines[] = { "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red" };
		linkedItems[] = { "JLTS_NVG_droid_chip_2", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio" };
		respawnLinkedItems[] = { "JLTS_NVG_droid_chip_2", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio" };
	};

//SUPPORT BATTLEDROIDS

	class aux187_opfor_b2 : aux187_opfor_b2_base
	{
		author = "Tim";
		displayName = "B2 Super Battle Droid";
		faction = "aux187_Faction_Droids";
		editorSubcategory = "aux187_edSubCat_SupportDroids";

		canDeactivateMines = 0;
		engineer = 0;
		attendant = 1;
		icon = "iconMan";
		
		backpack = "";
        uniformClass = "ls_droidUniform_b2";
		Items[] = { "FirstAidKit" };
		RespawnItems[] = { "FirstAidKit" };
		magazines[] = { "IDA_Blaster_Cell_Power2_100Rnd_Red", "IDA_Blaster_Cell_Power2_100Rnd_Red", "IDA_Blaster_Cell_Power2_100Rnd_Red", "IDA_wrist_rocket", "IDA_wrist_rocket", "IDA_wrist_rocket" };
		respawnMagazines[] = { "IDA_Blaster_Cell_Power2_100Rnd_Red", "IDA_Blaster_Cell_Power2_100Rnd_Red", "IDA_Blaster_Cell_Power2_100Rnd_Red", "IDA_wrist_rocket", "IDA_wrist_rocket", "IDA_wrist_rocket" };
		linkedItems[] = { "JLTS_NVG_droid_chip_2", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio" };
		respawnLinkedItems[] = { "JLTS_NVG_droid_chip_2", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio" };
	};

	class 3AS_CIS_TS_F;
	class aux187_opfor_TS_Blue : 3AS_CIS_TS_F
	{
		author = "Tim";
		displayName = "T-Series Droid (Blue)";
		faction = "aux187_Faction_Droids";
		editorSubcategory = "aux187_edSubCat_SupportDroids";

		canDeactivateMines = 0;
		engineer = 0;
		attendant = 1;
		icon = "iconMan";
		
		Items[] = { "FirstAidKit" };
		RespawnItems[] = { "FirstAidKit" };
		magazines[] = { "IDA_Blaster_Cell_Power2_100Rnd_Red", "IDA_Blaster_Cell_Power2_100Rnd_Red", "IDA_Blaster_Cell_Power2_100Rnd_Red", "IDA_wrist_rocket", "IDA_wrist_rocket", "IDA_wrist_rocket" };
		respawnMagazines[] = { "IDA_Blaster_Cell_Power2_100Rnd_Red", "IDA_Blaster_Cell_Power2_100Rnd_Red", "IDA_Blaster_Cell_Power2_100Rnd_Red", "IDA_wrist_rocket", "IDA_wrist_rocket", "IDA_wrist_rocket" };
		linkedItems[] = { "JLTS_NVG_droid_chip_2", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio" };
		respawnLinkedItems[] = { "JLTS_NVG_droid_chip_2", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio" };
	};

	class 3AS_CIS_TS_Green;
	class aux187_opfor_TS_Green : 3AS_CIS_TS_Green
	{
		author = "Tim";
		displayName = "T-Series Droid (Green)";
		faction = "aux187_Faction_Droids";
		editorSubcategory = "aux187_edSubCat_SupportDroids";

		canDeactivateMines = 0;
		engineer = 0;
		attendant = 1;
		icon = "iconMan";
		
		Items[] = { "FirstAidKit" };
		RespawnItems[] = { "FirstAidKit" };
		magazines[] = { "IDA_Blaster_Cell_Power2_100Rnd_Red", "IDA_Blaster_Cell_Power2_100Rnd_Red", "IDA_Blaster_Cell_Power2_100Rnd_Red", "IDA_wrist_rocket", "IDA_wrist_rocket", "IDA_wrist_rocket" };
		respawnMagazines[] = { "IDA_Blaster_Cell_Power2_100Rnd_Red", "IDA_Blaster_Cell_Power2_100Rnd_Red", "IDA_Blaster_Cell_Power2_100Rnd_Red", "IDA_wrist_rocket", "IDA_wrist_rocket", "IDA_wrist_rocket" };
		linkedItems[] = { "JLTS_NVG_droid_chip_2", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio" };
		respawnLinkedItems[] = { "JLTS_NVG_droid_chip_2", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio" };
	};

	class 3AS_CIS_TS_Red;
	class aux187_opfor_TS_Red : 3AS_CIS_TS_Red
	{
		author = "Tim";
		displayName = "T-Series Droid (Red)";
		faction = "aux187_Faction_Droids";
		editorSubcategory = "aux187_edSubCat_SupportDroids";

		canDeactivateMines = 0;
		engineer = 0;
		attendant = 1;
		icon = "iconMan";
		
		Items[] = { "FirstAidKit" };
		RespawnItems[] = { "FirstAidKit" };
		magazines[] = { "IDA_Blaster_Cell_Power2_100Rnd_Red", "IDA_Blaster_Cell_Power2_100Rnd_Red", "IDA_Blaster_Cell_Power2_100Rnd_Red", "IDA_wrist_rocket", "IDA_wrist_rocket", "IDA_wrist_rocket" };
		respawnMagazines[] = { "IDA_Blaster_Cell_Power2_100Rnd_Red", "IDA_Blaster_Cell_Power2_100Rnd_Red", "IDA_Blaster_Cell_Power2_100Rnd_Red", "IDA_wrist_rocket", "IDA_wrist_rocket", "IDA_wrist_rocket" };
		linkedItems[] = { "JLTS_NVG_droid_chip_2", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio" };
		respawnLinkedItems[] = { "JLTS_NVG_droid_chip_2", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio" };
	};

//DROIDEKAS

	class ls_droid_droideka;
	class aux187_opfor_droideka : ls_droid_droideka
	{
		author = "Tim";
		faction = "aux187_Faction_Droids";
		editorSubcategory = "aux187_edSubCat_Droideka";

		displayName = "Droideka";

		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;

		weapons[] = { "aux187_opfor_droidekaBlaster" };
		respawnWeapons[] = { "aux187_opfor_droidekaBlaster" };
		magazines[] = { "aux187_opfor_droideka_magazine", "aux187_opfor_droideka_magazine", "aux187_opfor_droideka_magazine", "aux187_opfor_droideka_magazine", "aux187_opfor_droideka_magazine", "aux187_opfor_droideka_magazine" };
		respawnMagazines[] = { "aux187_opfor_droideka_magazine", "aux187_opfor_droideka_magazine", "aux187_opfor_droideka_magazine", "aux187_opfor_droideka_magazine", "aux187_opfor_droideka_magazine", "aux187_opfor_droideka_magazine" };
	};

	class ls_droid_droideka_noShield;
	class aux187_opfor_droideka_noShield : ls_droid_droideka_noShield
	{
		author = "Tim";
		faction = "aux187_Faction_Droids";
		editorSubcategory = "aux187_edSubCat_Droideka";

		displayName = "Droideka (No Shield)";

		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;

		weapons[] = { "aux187_opfor_droidekaBlaster" };
		respawnWeapons[] = { "aux187_opfor_droidekaBlaster" };
		magazines[] = { "aux187_opfor_droideka_magazine", "aux187_opfor_droideka_magazine", "aux187_opfor_droideka_magazine", "aux187_opfor_droideka_magazine", "aux187_opfor_droideka_magazine", "aux187_opfor_droideka_magazine" };
		respawnMagazines[] = { "aux187_opfor_droideka_magazine", "aux187_opfor_droideka_magazine", "aux187_opfor_droideka_magazine", "aux187_opfor_droideka_magazine", "aux187_opfor_droideka_magazine", "aux187_opfor_droideka_magazine" };
	};

	class ls_droid_droideka_training;
	class aux187_opfor_droideka_training : ls_droid_droideka_training
	{
		author = "Tim";
		faction = "aux187_Faction_Droids";
		editorSubcategory = "aux187_edSubCat_Droideka";

		displayName = "Droideka (Training)";

		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;

		weapons[] = { "aux187_opfor_droidekaBlaster" };
		respawnWeapons[] = { "aux187_opfor_droidekaBlaster" };
		magazines[] = { "aux187_opfor_droideka_magazine", "aux187_opfor_droideka_magazine", "aux187_opfor_droideka_magazine", "aux187_opfor_droideka_magazine", "aux187_opfor_droideka_magazine", "aux187_opfor_droideka_magazine" };
		respawnMagazines[] = { "aux187_opfor_droideka_magazine", "aux187_opfor_droideka_magazine", "aux187_opfor_droideka_magazine", "aux187_opfor_droideka_magazine", "aux187_opfor_droideka_magazine", "aux187_opfor_droideka_magazine" };
	};

	class ls_droid_droideka_noShield_training;
	class aux187_opfor_droideka_noShield_training : ls_droid_droideka_noShield_training
	{
		author = "Tim";
		faction = "aux187_Faction_Droids";
		editorSubcategory = "aux187_edSubCat_Droideka";

		displayName = "Droideka (Training, No Shield)";

		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;

		weapons[] = { "aux187_opfor_droidekaBlaster" };
		respawnWeapons[] = { "aux187_opfor_droidekaBlaster" };
		magazines[] = { "aux187_opfor_droideka_magazine", "aux187_opfor_droideka_magazine", "aux187_opfor_droideka_magazine", "aux187_opfor_droideka_magazine", "aux187_opfor_droideka_magazine", "aux187_opfor_droideka_magazine" };
		respawnMagazines[] = { "aux187_opfor_droideka_magazine", "aux187_opfor_droideka_magazine", "aux187_opfor_droideka_magazine", "aux187_opfor_droideka_magazine", "aux187_opfor_droideka_magazine", "aux187_opfor_droideka_magazine" };
	};

//EMPLACEMENTS

	class 3AS_J10s_F;
	class aux187_opfor_j10s : 3AS_J10s_F
	{
		author = "Tim";
		displayName = "J10s Blaster Turret";

		faction = "aux187_Faction_Droids";
		editorSubcategory = "aux187_edSubCat_Emplacements";
		crew = "aux187_opfor_b1";

		scope = 2;

		class Turrets : Turrets
		{
			class MainTurret : MainTurret
			{
				weapons[] = { "aux187_opfor_j10s_weapon" };
				magazines[] = { "aux187_opfor_mag_500Rnd_j10s", "aux187_opfor_mag_500Rnd_j10s", "aux187_opfor_mag_500Rnd_j10s", "aux187_opfor_mag_500Rnd_j10s" };
			};
		};
	};

	class 3AS_CIS_FCP;
	class aux187_opfor_fcp : 3AS_CIS_FCP
	{
		author = "Tim";
		displayName = "CIS Forward Command Post";

		faction = "aux187_Faction_Droids";
		editorSubcategory = "aux187_edSubCat_Emplacements";
		crew = "aux187_opfor_b1_commander";

		scope = 2;
	};

	class 3AS_CIS_Mortar;
	class aux187_opfor_mortar : 3AS_CIS_Mortar
	{
		author = "Tim";
		displayName = "CIS Mortar";

		faction = "aux187_Faction_Droids";
		editorSubcategory = "aux187_edSubCat_Emplacements";
		crew = "aux187_opfor_b1_crew";

		scope = 2;
	};

	class 3AS_CIS_Naval_Gun;
	class aux187_opfor_navalGun : 3AS_CIS_Naval_Gun
	{
		author = "Tim";
		displayName = "CIS Naval Gun";

		faction = "aux187_Faction_Droids";
		editorSubcategory = "aux187_edSubCat_Emplacements";
		crew = "aux187_opfor_b1_crew";

		scope = 2;
	};

	class 3AS_CIS_Naval_Gun_180;
	class aux187_opfor_navalGun_inverted : 3AS_CIS_Naval_Gun_180
	{
		author = "Tim";
		displayName = "CIS Naval Gun (Inverted)";

		faction = "aux187_Faction_Droids";
		editorSubcategory = "aux187_edSubCat_Emplacements";
		crew = "aux187_opfor_b1_crew";

		scope = 2;
	};

	class 3AS_FlakCannon;
	class aux187_opfor_flakCannon : 3AS_FlakCannon
	{
		author = "Tim";
		displayName = "Flak Cannon";

		faction = "aux187_Faction_Droids";
		editorSubcategory = "aux187_edSubCat_Emplacements";
		crew = "aux187_opfor_b1_crew";

		scope = 2;
	};

	class 3AS_J1_Proton_Cannon;
	class aux187_opfor_J1_protonCannon : 3AS_J1_Proton_Cannon
	{
		author = "Tim";
		displayName = "J1 Proton Cannon";

		faction = "aux187_Faction_Droids";
		editorSubcategory = "aux187_edSubCat_Emplacements";
		crew = "aux187_opfor_b1_crew";

		scope = 2;
	};
	
	class 3AS_J1_Proton_Legged;
	class aux187_opfor_J1_protonCannon_legged : 3AS_J1_Proton_Legged
	{
		author = "Tim";
		displayName = "J1 Proton Cannon (Legged)";

		faction = "aux187_Faction_Droids";
		editorSubcategory = "aux187_edSubCat_Emplacements";
		crew = "aux187_opfor_b1_crew";

		scope = 2;
	};

	class 3AS_ParticleCannon;
	class aux187_opfor_particleCannon : 3AS_ParticleCannon
	{
		author = "Tim";
		displayName = "Particle Cannon";

		faction = "aux187_Faction_Droids";
		editorSubcategory = "aux187_edSubCat_Emplacements";
		crew = "aux187_opfor_b1_crew";

		scope = 2;
	};

	class 3AS_FieldCannon;
	class aux187_opfor_protonCannon : 3AS_FieldCannon
	{
		author = "Tim";
		displayName = "Proton Cannon";

		faction = "aux187_Faction_Droids";
		editorSubcategory = "aux187_edSubCat_Emplacements";
		crew = "aux187_opfor_b1_crew";

		scope = 2;
	};

	class 3AS_OG9Turret;
	class aux187_opfor_og9 : 3AS_OG9Turret
	{
		author = "Tim";
		displayName = "OG-9 Quad Legged Turret Thingy";

		faction = "aux187_Faction_Droids";
		editorSubcategory = "aux187_edSubCat_Emplacements";
		crew = "aux187_opfor_b1_crew";

		scope = 2;
	};

//LIGHT TANKS

	class 3AS_AAT;
	class aux187_opfor_AAT : 3AS_AAT
	{
		author = "Tim";
		displayName = "AAT";

		faction = "aux187_Faction_Droids";
		editorSubcategory = "aux187_edSubCat_opfor_HeavyVics";
		crew = "aux187_opfor_b1_crew";

		scope = 2;
	};

	class 3AS_AAT_Red;
	class aux187_opfor_AAT_Heavy : 3AS_AAT_Red
	{
		author = "Tim";
		displayName = "Heavy AAT";

		faction = "aux187_Faction_Droids";
		editorSubcategory = "aux187_edSubCat_opfor_HeavyVics";
		crew = "aux187_opfor_b1_crew";

		scope = 2;
	};

	class 3AS_AAT_Arid;
	class aux187_opfor_AAT_Arid : 3AS_AAT_Arid
	{
		author = "Tim";
		displayName = "AAT (Arid)";

		faction = "aux187_Faction_Droids";
		editorSubcategory = "aux187_edSubCat_opfor_HeavyVics";
		crew = "aux187_opfor_b1_crew";

		scope = 2;
	};

	class 3AS_AAT_Desert;
	class aux187_opfor_AAT_Sand : 3AS_AAT_Desert
	{
		author = "Tim";
		displayName = "AAT (Sand)";

		faction = "aux187_Faction_Droids";
		editorSubcategory = "aux187_edSubCat_opfor_HeavyVics";
		crew = "aux187_opfor_b1_crew";

		scope = 2;
	};

	class 3AS_AAT_Winter;
	class aux187_opfor_AAT_Snow : 3AS_AAT_Winter
	{
		author = "Tim";
		displayName = "AAT (Snow)";

		faction = "aux187_Faction_Droids";
		editorSubcategory = "aux187_edSubCat_opfor_HeavyVics";
		crew = "aux187_opfor_b1_crew";

		scope = 2;
	};

	class 3AS_Heavy_AAT_Defoliator_F;
	class aux187_opfor_AAT_Defoliator : 3AS_Heavy_AAT_Defoliator_F
	{
		author = "Tim";
		displayName = "Defoliator Heavy Tank";

		faction = "aux187_Faction_Droids";
		editorSubcategory = "aux187_edSubCat_opfor_HeavyVics";
		crew = "aux187_opfor_b1_crew";

		scope = 2;
	};

	class 3AS_Heavy_AAT_Flamer_F;
	class aux187_opfor_AAT_Flamer : 3AS_Heavy_AAT_Flamer_F
	{
		author = "Tim";
		displayName = "Flamer Heavy Tank";

		faction = "aux187_Faction_Droids";
		editorSubcategory = "aux187_edSubCat_opfor_HeavyVics";
		crew = "aux187_opfor_b1_crew";

		scope = 2;
	};

	class 3AS_Heavy_AAT_Shield_F;
	class aux187_opfor_AAT_Shield : 3AS_Heavy_AAT_Shield_F
	{
		author = "Tim";
		displayName = "Shield Heavy Tank";

		faction = "aux187_Faction_Droids";
		editorSubcategory = "aux187_edSubCat_opfor_HeavyVics";
		crew = "aux187_opfor_b1_crew";

		scope = 2;
	};

	class 3AS_MTT;
	class aux187_opfor_MTT : 3AS_MTT
	{
		author = "Tim";
		displayName = "MTT";

		faction = "aux187_Faction_Droids";
		editorSubcategory = "aux187_edSubCat_opfor_HeavyVics";
		crew = "aux187_opfor_b1_crew";

		scope = 2;
	};

	class 3AS_Advanced_DSD;
	class aux187_opfor_DSD : 3AS_Advanced_DSD
	{
		author = "Tim";
		displayName = "Advanced DSD";

		faction = "aux187_Faction_Droids";
		editorSubcategory = "aux187_edSubCat_opfor_MediumVics";
		crew = "aux187_opfor_b1_crew";

		scope = 2;
	};

	class 3AS_Hailfire_AT;
	class aux187_opfor_Hailfire_AT : 3AS_Hailfire_AT
	{
		author = "Tim";
		displayName = "IG-223 Hailfire Tank (Barrage)";

		faction = "aux187_Faction_Droids";
		editorSubcategory = "aux187_edSubCat_opfor_MediumVics";
		crew = "aux187_opfor_b1_crew";

		scope = 2;
	};

	class 3AS_Hailfire_SAM;
	class aux187_opfor_Hailfire_AA : 3AS_Hailfire_SAM
	{
		author = "Tim";
		displayName = "IG-225 Hailfire Tank (Anti-Air)";

		faction = "aux187_Faction_Droids";
		editorSubcategory = "aux187_edSubCat_opfor_MediumVics";
		crew = "aux187_opfor_b1_crew";

		scope = 2;
	};

	class 3AS_Hailfire_Rocket;
	class aux187_opfor_Hailfire_ART: 3AS_Hailfire_Rocket
	{
		author = "Tim";
		displayName = "IG-225 Hailfire Tank (Artillery)";

		faction = "aux187_Faction_Droids";
		editorSubcategory = "aux187_edSubCat_opfor_MediumVics";
		crew = "aux187_opfor_b1_crew";

		scope = 2;
	};

	class 3AS_N99;
	class aux187_opfor_N99: 3AS_N99
	{
		author = "Tim";
		displayName = "NR-N99 Persuader Tank";

		faction = "aux187_Faction_Droids";
		editorSubcategory = "aux187_edSubCat_opfor_MediumVics";
		crew = "aux187_opfor_b1_crew";

		scope = 2;
	};

	class 3AS_Octuptarra_Combat_F;
	class aux187_opfor_Octuptarra_Combat: 3AS_Octuptarra_Combat_F
	{
		author = "Tim";
		displayName = "Octuptarra (Combat)";

		faction = "aux187_Faction_Droids";
		editorSubcategory = "aux187_edSubCat_opfor_MediumVics";
		crew = "aux187_opfor_b1_crew";

		scope = 2;
	};

	class 3AS_Octuptarra_Torpedo_F;
	class aux187_opfor_Octuptarra_Torpedo: 3AS_Octuptarra_Torpedo_F
	{
		author = "Tim";
		displayName = "Octuptarra (Torpedo)";

		faction = "aux187_Faction_Droids";
		editorSubcategory = "aux187_edSubCat_opfor_MediumVics";
		crew = "aux187_opfor_b1_crew";

		scope = 2;
	};

	class 3AS_Combat_Speeder_F;
	class aux187_opfor_Combat_Speeder : 3AS_Combat_Speeder_F
	{
		author = "Tim";
		displayName = "Combat Speeder";

		faction = "aux187_Faction_Droids";
		editorSubcategory = "aux187_edSubCat_opfor_LightVics";
		crew = "aux187_opfor_b1";

		scope = 2;
	};

	class 3AS_Fliknot_F;
	class aux187_opfor_Fliknot : 3AS_Fliknot_F
	{
		author = "Tim";
		displayName = "Fliknot Speeder Bike";

		faction = "aux187_Faction_Droids";
		editorSubcategory = "aux187_edSubCat_opfor_LightVics";
		crew = "aux187_opfor_b1";

		scope = 2;
	};

	class 3AS_PAC_F;
	class aux187_opfor_pac : 3AS_PAC_F
	{
		author = "Tim";
		displayName = "Platoon Assault Craft";

		faction = "aux187_Faction_Droids";
		editorSubcategory = "aux187_edSubCat_opfor_LightVics";
		crew = "aux187_opfor_b1";

		scope = 2;
	};

	class 3AS_SAC_F;
	class aux187_opfor_sac : 3AS_SAC_F
	{
		author = "Tim";
		displayName = "Squad Assault Craft";

		faction = "aux187_Faction_Droids";
		editorSubcategory = "aux187_edSubCat_opfor_LightVics";
		crew = "aux187_opfor_b1";

		scope = 2;
	};

	class 3AS_SAC_Repair_F;
	class aux187_opfor_src : 3AS_SAC_Repair_F
	{
		author = "Tim";
		displayName = "Squad Repair Craft";

		faction = "aux187_Faction_Droids";
		editorSubcategory = "aux187_edSubCat_opfor_LightVics";
		crew = "aux187_opfor_b1";

		scope = 2;
	};

	class 3AS_GAT;
	class aux187_opfor_gat : 3AS_GAT
	{
		author = "Tim";
		displayName = "GAT Heavy";

		faction = "aux187_Faction_Droids";
		editorSubcategory = "aux187_edSubCat_opfor_LightVics";
		crew = "aux187_opfor_b1";

		scope = 2;
	};

	class 3AS_GAT_Light;
	class aux187_opfor_gat_light : 3AS_GAT_Light
	{
		author = "Tim";
		displayName = "GAT Light";

		faction = "aux187_Faction_Droids";
		editorSubcategory = "aux187_edSubCat_opfor_LightVics";
		crew = "aux187_opfor_b1";

		scope = 2;
	};

	class ls_vehicle_agtRaptor;
	class aux187_opfor_agt : ls_vehicle_agtRaptor
	{
		author = "Tim";
		displayName = "AGT Raptor";

		faction = "aux187_Faction_Droids";
		editorSubcategory = "aux187_edSubCat_opfor_Drones";
		crew = "O_UAV_AI";

		scope = 2;

		class Turrets : Turrets
		{
			class MainTurret : MainTurret
			{
				weapons[] = { "aux187_opfor_j10s_weapon" };
				magazines[] = { "aux187_opfor_mag_500Rnd_j10s", "aux187_opfor_mag_500Rnd_j10s" };
			};
		};
	};

	class 3as_CIS_ScavDroid;
	class aux187_opfor_scavDrone : 3as_CIS_ScavDroid
	{
		author = "Tim";
		displayName = "Scavenger Droid";

		faction = "aux187_Faction_Droids";
		editorSubcategory = "aux187_edSubCat_opfor_Drones";
		crew = "O_UAV_AI";

		scope = 2;
	};

	class 3AS_HAGM_CIS;
	class aux187_opfor_hagm_artillery : 3AS_HAGM_CIS
	{
		author = "Tim";
		displayName = "HAG-M Artillery Tank";

		faction = "aux187_Faction_Droids";
		editorSubcategory = "aux187_edSubCat_opfor_Artillery";
		crew = "aux187_opfor_b1_crew";

		scope = 2;
	};

//AIR VEHICLES

	class 3AS_CIS_Vulture_F;
	class aux187_opfor_vulture : 3AS_CIS_Vulture_F
	{
		author = "Tim";
		displayName = "Vulture Droid";

		faction = "aux187_Faction_Droids";
		editorSubcategory = "aux187_edSubCat_opfor_Aircraft";
		crew = "aux187_opfor_b1_pilot";

		scope = 2;
	};

	class 3AS_CIS_Vulture_AA_F;
	class aux187_opfor_vulture_advanced : 3AS_CIS_Vulture_AA_F
	{
		author = "Tim";
		displayName = "Vulture Droid (Advanced)";

		faction = "aux187_Faction_Droids";
		editorSubcategory = "aux187_edSubCat_opfor_Aircraft";
		crew = "aux187_opfor_b1_pilot";

		magazines[] = {"3AS_300Rnd_Vulture_Shells","3AS_300Rnd_Vulture_Shells","3AS_300Rnd_Vulture_Shells","240Rnd_CMFlare_Chaff_Magazine"};

		scope = 2;
	};

	class 3AS_HMP_Gunship;
	class aux187_opfor_hmp_gunship : 3AS_HMP_Gunship
	{
		author = "Tim";
		displayName = "HMP (Gunship)";

		faction = "aux187_Faction_Droids";
		editorSubcategory = "aux187_edSubCat_opfor_Aircraft";
		crew = "aux187_opfor_b1_pilot";

		scope = 2;
	};

	class 3AS_HMP_Transport;
	class aux187_opfor_hmp_transport : 3AS_HMP_Transport
	{
		author = "Tim";
		displayName = "HMP (Transport)";

		faction = "aux187_Faction_Droids";
		editorSubcategory = "aux187_edSubCat_opfor_Aircraft";
		crew = "aux187_opfor_b1_pilot";

		scope = 2;
	};

	class 3AS_Tri_Fighter_DynamicLoadout;
	class aux187_opfor_tri_fighter : 3AS_Tri_Fighter_DynamicLoadout
	{
		author = "Tim";
		displayName = "Tri-Fighter Droid";

		faction = "aux187_Faction_Droids";
		editorSubcategory = "aux187_edSubCat_opfor_Aircraft";
		crew = "aux187_opfor_b1_pilot";

		scope = 2;
	};
