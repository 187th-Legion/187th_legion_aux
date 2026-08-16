
    /*class aux187_opfor_geonosian_base : SFA_Geonosian_Drone_OPFOR
	{
		author = "Tim";
		displayName = "Base";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;

		icon = "iconMan";
	};*/

//UNIT CLASSES

    class SFA_Geonosian_Drone_OPFOR;
    class aux187_opfor_geonosian : SFA_Geonosian_Drone_OPFOR
	{
		author = "Tim";
		displayName = "Geonosian";
		faction = "aux187_Faction_opforOrganics";
		editorSubcategory = "aux187_edSubCat_Geonosians";

		canDeactivateMines = 0;
		engineer = 0;
		attendant = 1;
		icon = "iconMan";
		
		backpack = "";
        //uniformClass = "ls_droidUniform_b1";
		weapons[] = { "aux187_opfor_e5", "Throw", "Put" };
		respawnWeapons[] = { "aux187_opfor_e5", "Throw", "Put" };
		Items[] = { "FirstAidKit" };
		RespawnItems[] = { "FirstAidKit" };
		magazines[] = { "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red" };
		respawnMagazines[] = { "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red" };
		linkedItems[] = { "ls_vest_invisible_armorLevel1", "JLTS_NVG_droid_chip_1", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio" };
		respawnLinkedItems[] = { "ls_vest_invisible_armorLevel1", "JLTS_NVG_droid_chip_1", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio" };
	};

    class SFA_Geonosian_Drone_OPFOR;
    class aux187_opfor_geonosian : SFA_Geonosian_Drone_OPFOR
	{
		author = "Tim";
		displayName = "Geonosian";
		faction = "aux187_Faction_opforOrganics";
		editorSubcategory = "aux187_edSubCat_Geonosians";

		canDeactivateMines = 0;
		engineer = 0;
		attendant = 1;
		icon = "iconMan";
		
		backpack = "";
        //uniformClass = "ls_droidUniform_b1";
		weapons[] = { "aux187_opfor_e5", "Throw", "Put" };
		respawnWeapons[] = { "aux187_opfor_e5", "Throw", "Put" };
		Items[] = { "FirstAidKit" };
		RespawnItems[] = { "FirstAidKit" };
		magazines[] = { "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red" };
		respawnMagazines[] = { "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red", "IDA_Blaster_Cell_Power3_40Rnd_Red" };
		linkedItems[] = { "SFA_Geo_Drone_Vest", "JLTS_NVG_droid_chip_1", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio" };
		respawnLinkedItems[] = { "SFA_Geo_Drone_Vest", "JLTS_NVG_droid_chip_1", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio" };
	};
