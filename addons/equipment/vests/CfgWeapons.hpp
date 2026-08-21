    class JLTS_CloneVestHolster;
    class aux187_Vest_Holster : JLTS_CloneVestHolster
	{
		author = "Tim";
		scope = 2;
		displayName = "[187th] Clone Trooper Holster";
		
		class XtdGearInfo
		{
			model = "aux187_Vests_Model";
            vestType = "Holster";
		};

        maximumLoad = "180";
        mass = 25;
	};

    class ls_sob_commando_eod_vest;
    class aux187_Vest_Grenade : ls_sob_commando_eod_vest
	{
		author = "Tim";
		scope = 2;
		displayName = "[187th] Clone Grenade Pouch";
		
		class XtdGearInfo
		{
			model = "aux187_Vests_Model";
            vestType = "Grenade";
		};

        maximumLoad = "180";
        mass = 25;
	};

    class ls_gar_cfr_vest;
    class aux187_Vest_CFR : ls_gar_cfr_vest
	{
		author = "Tim";
		scope = 2;
		displayName = "[187th] Clone CFR Pouch";
		
		class XtdGearInfo
		{
			model = "aux187_Vests_Model";
            vestType = "CFR";
		};

        maximumLoad = "180";
        mass = 25;
	};

    class aux187_Vest_Engineer : ls_gar_cfr_vest
	{
		author = "Tim";
		scope = 2;
		displayName = "[187th] Clone EOD Pouch";

        hiddenSelectionsTextures[] = { "\ls\core\addons\characters_clone_legacy\vests\engineer\data\heavy_accessories_engineer_co.paa" };
		
		class XtdGearInfo
		{
			model = "aux187_Vests_Model";
            vestType = "EOD";
		};

        maximumLoad = "180";
        mass = 25;
	};

	class JLTS_CloneVestKama;
	class aux187_Vest_Kama_Officer : JLTS_CloneVestKama
	{
		author = "Tim";
		scope = 2;
		displayName = "[187th] Clone Officer Kama";

        //hiddenSelectionsTextures[] = { "\ls\core\addons\characters_clone_legacy\vests\engineer\data\heavy_accessories_engineer_co.paa" };
		
		class XtdGearInfo
		{
			model = "aux187_Vests_Model";
            vestType = "OKama";
		};

        maximumLoad = "180";
        mass = 25;
	};
