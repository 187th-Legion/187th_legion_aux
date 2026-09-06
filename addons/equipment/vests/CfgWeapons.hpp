    class VestItem;
	class JLTS_CloneVestHolster;
    class aux187_Vest_Holster : JLTS_CloneVestHolster
	{
		author = "Tim";
		scope = 2;
		displayName = "[187th] Clone Trooper Holster";

		model = "\MRC\JLTS\characters\CloneArmor2\CloneVestHolster.p3d";
		
		class XtdGearInfo
		{
			model = "aux187_Vests_Model";
            vestType = "Holster";
		};

        maximumLoad = 180;
		weaponPoolAvailable = 1;

		class ItemInfo : VestItem
		{
			vestType="Rebreather";
			containerClass = "Supply100";
			mass=80;
			uniformModel = "\MRC\JLTS\characters\CloneArmor2\CloneVestHolster.p3d";
		};
	};

    class ls_sob_commando_eod_vest;
    class aux187_Vest_Grenade : ls_sob_commando_eod_vest
	{
		author = "Tim";
		scope = 2;
		displayName = "[187th] Clone Grenade Pouch";

		model = "\ls\core\addons\characters_clone_legacy\vests\commando\ls_vest_clone_commando_eod.p3d";
		
		class XtdGearInfo
		{
			model = "aux187_Vests_Model";
            vestType = "Grenade";
		};

        maximumLoad = 180;
		weaponPoolAvailable = 1;
        
		class ItemInfo : VestItem
		{
			vestType="Rebreather";
			containerClass = "Supply100";
			mass=80;
			uniformModel = "\ls\core\addons\characters_clone_legacy\vests\commando\ls_vest_clone_commando_eod.p3d";
		};
	};

    class ls_gar_cfr_vest;
    class aux187_Vest_CFR : ls_gar_cfr_vest
	{
		author = "Tim";
		scope = 2;
		displayName = "[187th] Clone CFR Pouch";

		model = "\ls\core\addons\characters_clone_legacy\vests\medic\ls_gar_cfr_vest.p3d";
		
		class XtdGearInfo
		{
			model = "aux187_Vests_Model";
            vestType = "CFR";
		};

        maximumLoad = 180;
		weaponPoolAvailable = 1;
        
		class ItemInfo : VestItem
		{
			vestType="Rebreather";
			containerClass = "Supply100";
			mass=80;
			uniformModel = "\ls\core\addons\characters_clone_legacy\vests\medic\ls_gar_cfr_vest.p3d";
		};
	};

    class aux187_Vest_Engineer : ls_gar_cfr_vest
	{
		author = "Tim";
		scope = 2;
		displayName = "[187th] Clone EOD Pouch";

        hiddenSelectionsTextures[] = { "\ls\core\addons\characters_clone_legacy\vests\engineer\data\heavy_accessories_engineer_co.paa" };

		model = "\ls\core\addons\characters_clone_legacy\vests\medic\ls_gar_cfr_vest.p3d";
		
		class XtdGearInfo
		{
			model = "aux187_Vests_Model";
            vestType = "EOD";
		};

        maximumLoad = 180;
		weaponPoolAvailable = 1;
		
        class ItemInfo : VestItem
		{
			vestType="Rebreather";
			containerClass = "Supply100";
			mass=80;
			uniformModel = "\ls\core\addons\characters_clone_legacy\vests\medic\ls_gar_cfr_vest.p3d";
		};
	};

	class JLTS_CloneVestKama;
	class aux187_Vest_Kama_Officer : JLTS_CloneVestKama
	{
		author = "Tim";
		scope = 2;
		displayName = "[187th] Clone Officer Kama";

        model = "\MRC\JLTS\characters\CloneArmor\CloneVestKama.p3d";
		
		class XtdGearInfo
		{
			model = "aux187_Vests_Model";
            vestType = "OKama";
		};

        maximumLoad = 180;
		weaponPoolAvailable = 1;

        class ItemInfo : VestItem
		{
			vestType="Rebreather";
			containerClass = "Supply100";
			mass=80;
			uniformModel = "\MRC\JLTS\characters\CloneArmor\CloneVestKama.p3d";
		};
	};
