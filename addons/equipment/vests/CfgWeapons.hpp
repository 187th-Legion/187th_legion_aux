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
            vestType = "Recon";
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

		hiddenSelections[] = {"camo1","camo2"};
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
			hiddenSelections[] = {"camo1","camo2"};
		};
	};

	/*class ls_gar_clone_vest;
	class aux187_Vest_1 : ls_gar_clone_vest
	{
		author = "Tim";
		scope = 2;
		displayName = "[187th] Clone Vest 1";

        model = "\MRC\JLTS\characters\CloneArmor\CloneVestKama.p3d";
		
		class XtdGearInfo
		{
			model = "aux187_Vests_Model";
            vestType = "Vest1";
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
	};*/

//LEADERSHIP VESTS

	class JLTS_CloneVestReconNCO;
	class aux187_Vest_Leadership_CP : JLTS_CloneVestReconNCO
	{
		author = "Tim";
		scope = 2;
		displayName = "[187th] Clone Corporal Vest";
		
		class XtdGearInfo
		{
			model = "aux187_LeadershipVests_Model";
            vestType = "CP";
		};

        maximumLoad = 180;
		weaponPoolAvailable = 1;

		model = "\MRC\JLTS\characters\CloneArmor\CloneVestReconNCO.p3d";
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {"MRC\JLTS\characters\CloneArmor\data\Clone_vest_heavy_co.paa"};

        class ItemInfo : VestItem
		{
			vestType="Rebreather";
			containerClass = "Supply100";
			mass=80;

			hiddenSelections[] = {"camo1"};
			uniformModel = "\MRC\JLTS\characters\CloneArmor\CloneVestReconNCO.p3d";
		};
	};

	class JLTS_CloneVestReconOfficer;
	class aux187_Vest_Leadership_CS : JLTS_CloneVestReconOfficer
	{
		author = "Tim";
		scope = 2;
		displayName = "[187th] Clone Sergeant Vest";
		
		class XtdGearInfo
		{
			model = "aux187_LeadershipVests_Model";
            vestType = "CS";
		};

        maximumLoad = 180;
		weaponPoolAvailable = 1;

		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {QPATHTOF(vests\data\187thVest_Kama_CS.paa),QPATHTOF(vests\data\187thVest_Pauldron_CS.paa)};

        class ItemInfo : VestItem
		{
			vestType="Rebreather";
			containerClass = "Supply100";
			mass=80;
			hiddenSelections[] = {"camo1","camo2"};
			uniformModel = "\MRC\JLTS\characters\CloneArmor\CloneVestReconOfficer.p3d";
		};
	};

	class aux187_Vest_Leadership_CGS : JLTS_CloneVestReconOfficer
	{
		author = "Tim";
		scope = 2;
		displayName = "[187th] Clone Gunnery Sergeant Vest";
		
		class XtdGearInfo
		{
			model = "aux187_LeadershipVests_Model";
            vestType = "CGS";
		};

        maximumLoad = 180;
		weaponPoolAvailable = 1;

		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {QPATHTOF(vests\data\187thVest_Kama_CGS.paa),QPATHTOF(vests\data\187thVest_Pauldron_CGS.paa)};

        class ItemInfo : VestItem
		{
			vestType="Rebreather";
			containerClass = "Supply100";
			mass=80;
			hiddenSelections[] = {"camo1","camo2"};
			uniformModel = "\MRC\JLTS\characters\CloneArmor\CloneVestReconOfficer.p3d";
		};
	};

	class JLTS_CloneVestOfficer;
	class aux187_Vest_Leadership_CL : JLTS_CloneVestOfficer
	{
		author = "Tim";
		scope = 2;
		displayName = "[187th] Clone Lieutenant Vest";
		
		class XtdGearInfo
		{
			model = "aux187_LeadershipVests_Model";
            vestType = "CL";
		};

        maximumLoad = 180;
		weaponPoolAvailable = 1;

		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {QPATHTOF(vests\data\187thVest_Pauldron_CL.paa)};

        class ItemInfo : VestItem
		{
			vestType="Rebreather";
			containerClass = "Supply100";
			mass=80;
			hiddenSelections[] = {"camo1"};
			uniformModel = "\MRC\JLTS\characters\CloneArmor\CloneVestOfficer.p3d";
		};
	};

	class aux187_Vest_Leadership_CC : JLTS_CloneVestOfficer
	{
		author = "Tim";
		scope = 2;
		displayName = "[187th] Clone Commander Vest";
		
		class XtdGearInfo
		{
			model = "aux187_LeadershipVests_Model";
            vestType = "CC";
		};

        maximumLoad = 180;
		weaponPoolAvailable = 1;

		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {QPATHTOF(vests\data\187thVest_Pauldron_CC.paa)};

        class ItemInfo : VestItem
		{
			vestType="Rebreather";
			containerClass = "Supply100";
			mass=80;
			hiddenSelections[] = {"camo1"};
			uniformModel = "\MRC\JLTS\characters\CloneArmor\CloneVestOfficer.p3d";
		};
	};
