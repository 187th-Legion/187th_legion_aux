    /*
	---------------------------------------------------------------
	                      BASE MAGAZINE CLASSES
	---------------------------------------------------------------
	*/
    
        class 100Rnd_65x39_caseless_mag;
        class aux187_magazine_base : 100Rnd_65x39_caseless_mag
        {
            ammo = "aux187_ammo_base";
            hiddenSelections[] = {"camo"};
            hiddenSelectionsTextures[] = {"\a3\weapons_f\rifles\mx\data\xmx_lmg_co.paa"};
            
            model = "\MRC\JLTS\weapons\DC15A\DC15A_mag.p3d";
            picture = "\MRC\JLTS\weapons\DC15A\data\ui\DC15A_mag_ui_ca.paa";

            tracersEvery = 1;
        };

    /*
	---------------------------------------------------------------
	                      RIFLE MAGAZINE CLASSES
	---------------------------------------------------------------
	*/

        class aux187_Mag_80Rnd_DC15S : aux187_magazine_base
        {
            displayName = "[187th] DC-15S 80rnd Magazine";
            author = "Tim";
            ammo = "aux187_ammo_15S";

            count = 80;
            descriptionShort="Rounds: 80";
            displayNameShort = "15S 80rnd";
            mass=7;

            initSpeed = 750;
        };

        class aux187_Mag_100Rnd_DC17M : aux187_magazine_base
        {
            displayName = "[187th] DC-17M 100rnd Magazine";
            author = "Tim";
            ammo = "aux187_ammo_15S";

            count = 100;
            descriptionShort="Rounds: 100";
            displayNameShort = "17M 100rnd";
            modelSpecial = "3AS\3AS_Weapons\DC17M\attachments\blaster_Barrel.p3d";
            mass=10;

            initspeed = 750;
        };

        class aux187_Mag_10Rnd_DC17M : aux187_magazine_base
        {
            displayName = "[187th] DC-17M 10rnd Sniper Magazine";
            author = "Tim";
            ammo = "aux187_ammo_sniper";

            count = 10;
            descriptionShort="Rounds: 10";
            displayNameShort = "17M 10rnd";
            modelSpecial = "3AS\3AS_Weapons\DC17M\attachments\sniper_Barrel.p3d";
            mass=15;

            initspeed = 1500;
        };

        class 3AS_AntiArmour_mag;
        class aux187_Mag_3Rnd_DC17M : 3AS_AntiArmour_mag
        {
            displayName = "[187th] DC-17M 3rnd Anti-Armour Magazine";
            author = "Tim";

            count = 3;
            descriptionShort="Rounds: 3";
            displayNameShort = "17M 3rnd";
            modelSpecial = "3AS\3AS_Weapons\DC17M\attachments\antiarmour_barrel.p3d";
            mass=15;
        };

        class aux187_Mag_45Rnd_DC15C : aux187_magazine_base
        {
            displayName = "[187th] DC-15C 45rnd Magazine";
            author = "Tim";
            ammo = "aux187_ammo_15C";

            count = 45;
            descriptionShort="Rounds: 45";
            displayNameShort = "15C 45rnd";
            mass=7;

            initspeed = 900;
        };

        class aux187_Mag_35Rnd_DC15A : aux187_magazine_base
        {
            displayName = "[187th] DC-15A 35rnd Magazine";
            author = "Tim";
            ammo = "aux187_ammo_15A";

            count = 35;
            descriptionShort="Rounds: 35";
            displayNameShort = "15A 35rnd";
            mass=7;

            initspeed = 1100;
            tracersEvery = 1;
        };

        class aux187_Mag_40Rnd_XLE7 : aux187_magazine_base
        {
            displayName = "[187th] XLE-7 40rnd Magazine";
            author = "Tim";
            ammo = "aux187_ammo_15C";

            count = 40;
            descriptionShort="Rounds: 40";
            displayNameShort = "XLE7 40rnd";
            mass=8;

            initspeed = 900;
        };

        class aux187_Mag_250Rnd_DLT16 : aux187_magazine_base
        {
            displayName = "[187th] DLT-16 250rnd High Power Magazine";
            author = "Tim";
            ammo = "aux187_ammo_15A";

            count = 250;
            descriptionShort="Rounds: 250";
            displayNameShort = "DLT16 250rnd";
            mass=35;

            initspeed = 1100;
        };

        class aux187_Mag_400Rnd_Z6 : aux187_magazine_base
        {
            displayName = "[187th] Z-6 400rnd Magazine";
            author = "Tim";
            ammo = "aux187_ammo_15A";

            count = 400;
            descriptionShort="Rounds: 400";
            displayNameShort = "Z6 400rnd";
            mass=55;

            initspeed = 1100;
        };

        class aux187_Mag_150Rnd_DC15L : aux187_magazine_base
        {
            displayName = "[187th] DC-15L 150rnd Magazine";
            author = "Tim";
            ammo = "aux187_ammo_15A";

            count = 150;
            descriptionShort="Rounds: 150";
            displayNameShort = "15L 150";
            mass=25;

            initspeed = 1100;
        };

    /*
	---------------------------------------------------------------
	                      SNIPER MAGAZINE CLASSES
	---------------------------------------------------------------
	*/

        class aux187_Mag_30Rnd_Valken38X : aux187_magazine_base
        {
            displayName = "[187th] Valken-38X 30rnd Magazine";
            author = "Tim";
            ammo = "aux187_ammo_sniper";

            count = 30;
            descriptionShort="Rounds: 30";
            displayNameShort = "38X 30rnd";
            mass=15;

            initspeed = 2500;
        };

        class aux187_Mag_10Rnd_Firepuncher : aux187_magazine_base
        {
            displayName = "[187th] 773-Firepuncher 10rnd High Power Magazine";
            author = "Tim";
            ammo = "aux187_ammo_sniper_HP";

            count = 10;
            descriptionShort="Rounds: 10";
            displayNameShort = "773 10rnd";
            mass=15;

            initspeed = 1500;
        };

        class aux187_Mag_5Rnd_DC15X : aux187_magazine_base
        {
            displayName = "[187th] DC-15X 5rnd High Power Magazine";
            author = "Tim";
            ammo = "aux187_ammo_sniper_HP";

            count = 5;
            descriptionShort="Rounds: 5";
            displayNameShort = "15X 5rnd";
            mass=15;

            initSpeed = 5000;
        };

        class aux187_Mag_1Rnd_CMag : aux187_magazine_base
        {
            displayName = "[187th] DC-15X 1rnd Charge Magazine";
            author = "Tim";
            ammo = "aux187_ammo_sniper_CMAG";

            count = 1;
            descriptionShort="Rounds: 1";
            displayNameShort = "CMAG 1rnd";
            mass=65;

            initSpeed = 5000;
        };

        class aux187_Mag_80Rnd_Pistol : aux187_magazine_base
        {
            displayName = "[187th] DC-17 80rnd Magazine";
            author = "Tim";
            ammo = "aux187_ammo_15S";

            count = 80;
            descriptionShort="Rounds: 80";
            displayNameShort = "17 80rnd";
            mass=7;

            initSpeed = 500;
        };

    /*
	---------------------------------------------------------------
	                      SPECIAL MAGAZINE CLASSES
	---------------------------------------------------------------
	*/

    class 1Rnd_HE_Grenade_Shell;
    class aux187_Mag_3Rnd_AP_Grenade : 1Rnd_HE_Grenade_Shell
	{
		displayName = "[187th] 3Rnd AP";
		//model="OPTRE_weapons\gl\mag_hedp.p3d"; Could use a JLTS model or OPTRE model if we want. Right now vanilla
		ammo="aux187_Ammo_HEDP";
		displayNameShort="AP";
		count = 3;
		mass=12;
		descriptionShort="Explosive Charge. Rounds: 3";
	};
	
	class aux187_Mag_3Rnd_HE_Grenade : 1Rnd_HE_Grenade_Shell
	{
		displayName = "[187th] 3Rnd HE";
		//model="OPTRE_weapons\gl\mag_hedp.p3d"; Could use a JLTS model or OPTRE model if we want. Right now vanilla
		ammo="aux187_Ammo_HE";
		displayNameShort="HE";
		count = 3;
		mass=12;
		descriptionShort="Explosive Charge. Rounds: 3";
	};

    class aux187_Mag_1Rnd_AP_Grenade : 1Rnd_HE_Grenade_Shell
	{
		displayName = "[187th] 1Rnd AP";
		//model="OPTRE_weapons\gl\mag_hedp.p3d"; Could use a JLTS model or OPTRE model if we want. Right now vanilla
		ammo="aux187_Ammo_HEDP";
		displayNameShort="AP";
		count = 1;
		mass=4;
		descriptionShort="Explosive Charge. Rounds: 1";
	};
	
	class aux187_Mag_1Rnd_HE_Grenade : 1Rnd_HE_Grenade_Shell
	{
		displayName = "[187th] 1Rnd HE";
		//model="OPTRE_weapons\gl\mag_hedp.p3d"; Could use a JLTS model or OPTRE model if we want. Right now vanilla
		ammo="aux187_Ammo_HE";
		displayNameShort="HE";
		count = 1;
		mass=4;
		descriptionShort="Explosive Charge. Rounds: 1";
	};

    class CA_LauncherMagazine;
    class aux187_disposable_rocket : CA_LauncherMagazine
    {
        author = "Tim";
        displayName = "[187th] RPS-6 Disposable Rocket";
        scope = 2;

        mass = 40;
    };

