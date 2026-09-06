
	class NVGoggles;
    class JLTS_CloneNVG;
    class JLTS_CloneNVGRange;
	
	class aux187_NVG_Chip: NVGoggles
    {
        author="187th Legion";
        displayName="[187th] NVGs (P2)";
        modelOptics="";
        model=QPATHTOF(nvgs\data\187th_NVG_Visor.p3d);
		picture="\MRC\JLTS\characters\CloneArmor\data\ui\CloneHelmetP2_interior_ui_ca.paa";
        hiddenSelections[]=
        {
            "camo"
        };
        hiddenSelectionsTextures[]=
        {
            QPATHTOF(nvgs\data\NVG_Visor_co.paa)
        };
        hiddenSelectionsMaterials[] = 
        {
            QPATHTOF(nvgs\data\187th_NVG_Visor.rvmat)
        };
        visionMode[]=
        {
            "Normal",
            "NVG",
			"TI"
        };
        thermalMode[]={0,1};
        class ItemInfo
        {
            type=616;
            uniformModel=QPATHTOF(nvgs\data\187th_NVG_Visor.p3d);
            modelOff="";
            mass=20;
            hiddenSelections[]=
            {
                "camo"
            };
        };

        class XtdGearInfo
        {
            model = "aux187_NVG_Model";
            nvgType = "P2";
        };
    };
	
	class aux187_NVG_Chip_Pilot: NVGoggles
    {
        author="187th Legion";
        displayName="[187th] NVGs (Aviation)";
        modelOptics="";
        model=QPATHTOF(nvgs\data\Pilot_NVG_01.p3d);
		picture="\MRC\JLTS\characters\CloneArmor\data\ui\CloneHelmetP2_interior_ui_ca.paa";
        hiddenSelections[]=
        {
            "camo"
        };
        hiddenSelectionsTextures[]=
        {
            QPATHTOF(nvgs\data\Pilot_NVG_co.paa)
        };

        hiddenSelectionsMaterials[] = 
        {
            QPATHTOF(nvgs\data\187th_Pilot_NVG_Visor.rvmat)
        };
        visionMode[]=
        {
            "Normal",
			"NVG",
			"TI"
        };
        thermalMode[]={0,1};
        class ItemInfo
        {
            type=616;
            uniformModel=QPATHTOF(nvgs\data\Pilot_NVG_01.p3d);
            modelOff="";
            mass=20;
            hiddenSelections[]=
            {
                "camo"
            };
        };
        class XtdGearInfo
        {
            model = "aux187_NVG_Model";
            nvgType = "Pilot";
        };
    };

	
    class aux187_NVG_Chip_AB: NVGoggles
    {
        author="187th Legion";
        displayName="[187th] NVGs (Airborne)";
        modelOptics="";
        model=QPATHTOF(nvgs\data\Airbourne_NVG_01.p3d);
		picture="\MRC\JLTS\characters\CloneArmor\data\ui\CloneHelmetAB_interior_ui_ca.paa";
        hiddenSelections[]=
        {
            "camo"
        };
        hiddenSelectionsTextures[]=
        {
            QPATHTOF(nvgs\data\Airbourne_NVG_co.paa)
        };
        hiddenSelectionsMaterials[] = 
        {
            QPATHTOF(nvgs\data\187th_Airbourne_NVG_Visor.rvmat)
        };
        visionMode[]=
        {
            "Normal",
			"NVG",
			"TI"
        };
        thermalMode[]={0,1};
        class ItemInfo
        {
            type=616;
            uniformModel=QPATHTOF(nvgs\data\Airbourne_NVG_01.p3d);
            modelOff="";
            mass=20;
            hiddenSelections[]=
            {
                "camo"
            };
        };
        class XtdGearInfo
        {
            model = "aux187_NVG_Model";
            nvgType = "Airborne";
        };
    };

    class JLTS_CloneNVGCC;
    class aux187_Commander: JLTS_CloneNVGCC
    {
		displayName="[187th] Commander Visor";
		identityTypes[]={};
		picture="\MRC\JLTS\characters\CloneArmor\data\ui\Clone_nvg_cc_visor_ui_ca.paa";
		model = "\MRC\JLTS\characters\CloneArmor\CloneNVGCC.p3d";
		hiddenSelections[]={"camo1"};
		hiddenSelectionsTextures[]={"\MRC\JLTS\characters\CloneArmor\data\Clone_nvg_visor_co.paa"};
		Scope=2;
		ScopeCurator=2;
        visionMode[] = {"Normal","NVG","TI"};
		thermalMode[] = {0,1};
		ace_nightvision_border = "";

        class XtdGearInfo
        {
            model = "aux187_NVG_Model";
            nvgType = "CMDR";
        };
	};

    class aux187_Officer_RF: JLTS_CloneNVGRange
    {
		displayName="[187th] Officer Rangefinder";
		hiddenSelectionsTextures[]={"\MRC\JLTS\characters\CloneArmor2\data\Clone_PurgeTrooper_rangefinder_co.paa"};
		Scope=2;
		ScopeCurator=2;
        visionMode[] = {"Normal","NVG","TI"};
		thermalMode[] = {0,1};
		ace_nightvision_border = "";
        class XtdGearInfo
        {
            model = "aux187_NVG_Model";
            nvgType = "Officer";
        };
	};

	/*class aux187_NVG_Chip_Snow: JLTS_NVG_droid_chip_1
	{
		scope = 1;
		displayName="Snow helm nvg";
		visionMode[] = {"Normal","NVG"};
		thermalMode[] = {0,1};
		ace_nightvision_border = "";
        class XtdGearInfo
        {
            model = "aux187_NVG_Model";
            nvgType = "Snow";
        };
	};
	class aux187_NVG_Chip_Snow2: JLTS_NVG_droid_chip_1
	{
		scope = 1;
		displayName="Snow2 helm nvg";
		visionMode[] = {"Normal","NVG","TI"};
		thermalMode[] = {0,1};
		ace_nightvision_border = "";
        class XtdGearInfo
        {
            model = "aux187_NVG_Model";
            nvgType = "Snow2";
        };
	};*/

    class aux187_NVG_Chip_Officer : JLTS_CloneNVGRange
    {
        author="187th Legion";
        displayName="[187th] Officer Rangefinder";
        modelOptics="";
        hiddenSelections[]=
        {
            QPATHTOF(facewear\data\187th_NVG_Rangefinder_CO.paa)
        };
        visionMode[]=
        {
            "Normal",
            "NVG",
			"TI"
        };
        thermalMode[]={0,1};

        class XtdGearInfo
        {
            model = "aux187_NVG_Model";
            nvgType = "Officer";
        };
    };

    class aux187_NVG_Chip_Marksman : JLTS_CloneNVG
    {
        author="187th Legion";
        displayName="[187th] Marksman Visor";
        modelOptics="";
        hiddenSelections[]=
        {
            QPATHTOF(facewear\data\187th_NVG_Rangefinder_CO.paa)
        };
        visionMode[]=
        {
            "Normal",
            "NVG",
			"TI"
        };
        thermalMode[]={0,1};
        class ItemInfo
        {
            type=616;
            modelOff = "\MRC\JLTS\characters\CloneArmor\CloneNVG_on.p3d";
            uniformModel = "\MRC\JLTS\characters\CloneArmor\CloneNVG_on.p3d";
            mass=20;
            hiddenSelections[]=
            {
                "camo"
            };
        };

        class XtdGearInfo
        {
            model = "aux187_NVG_Model";
            nvgType = "Marksman";
        };
    };

    class aux187_NVG_Chip_SL : JLTS_CloneNVG
    {
        author="187th Legion";
        displayName="[187th] Squad Leader Visor";
        modelOptics="";
        visionMode[]=
        {
            "Normal",
            "NVG",
			"TI"
        };
        thermalMode[]={0,1};
        class ItemInfo
        {
            type=616;
            //modelOff = "\MRC\JLTS\characters\CloneArmor\CloneNVG_on.p3d";
            //uniformModel = "\MRC\JLTS\characters\CloneArmor\CloneNVG_on.p3d";
            mass=20;
            hiddenSelections[]=
            {
                "camo"
            };
        };

        class XtdGearInfo
        {
            model = "aux187_NVG_Model";
            nvgType = "SL";
        };
    };

    class OPTRE_NVGT_C;
    class aux187_NVG_Chip_ARF : OPTRE_NVGT_C
    {
        author="187th Legion";
        displayName="[187th] ARF Visor";
        modelOptics="";
        visionMode[]=
        {
            "Normal",
            "NVG",
			"TI"
        };
        thermalMode[]={0,1};
        class ItemInfo
        {
            type=616;
            //modelOff = "\MRC\JLTS\characters\CloneArmor\CloneNVG_on.p3d";
            //uniformModel = "\MRC\JLTS\characters\CloneArmor\CloneNVG_on.p3d";
            mass=20;
            hiddenSelections[]=
            {
                "camo"
            };
        };

        class XtdGearInfo
        {
            model = "aux187_NVG_Model";
            nvgType = "ARF";
        };
    };
