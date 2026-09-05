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

        class aux187_Mag_40Rnd_DC15S : aux187_magazine_base
        {
            displayName = "[187th] DC-15S 40rnd High Power Magazine";
            author = "Tim";
            ammo = "aux187_ammo_rifle_HP";

            count = 40;
            descriptionShort="Rounds: 40";
            displayNameShort = "15S 40rnd";
            mass=8;
        };

        class aux187_Mag_80Rnd_DC15S : aux187_magazine_base
        {
            displayName = "[187th] DC-15S 80rnd Low Power Magazine";
            author = "Tim";
            ammo = "aux187_ammo_rifle_LP";

            count = 80;
            descriptionShort="Rounds: 80";
            displayNameShort = "15S 80rnd";
            mass=10;
        };

        class aux187_Mag_100Rnd_DC17M : aux187_magazine_base
        {
            displayName = "[187th] DC-17M 100rnd Low Power Magazine";
            author = "Tim";
            ammo = "aux187_ammo_rifle_HP";

            count = 100;
            descriptionShort="Rounds: 100";
            displayNameShort = "17M 100rnd";
            modelSpecial = "3AS\3AS_Weapons\DC17M\attachments\blaster_Barrel.p3d";
            mass=10;
        };

        class aux187_Mag_10Rnd_DC17M : aux187_magazine_base
        {
            displayName = "[187th] DC-17M 10rnd High Power Magazine";
            author = "Tim";
            ammo = "aux187_ammo_sniper_HP";

            count = 10;
            descriptionShort="Rounds: 10";
            displayNameShort = "17M 10rnd";
            modelSpecial = "3AS\3AS_Weapons\DC17M\attachments\sniper_Barrel.p3d";
            mass=15;
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
            displayName = "[187th] DC-15C 45rnd High Power Magazine";
            author = "Tim";
            ammo = "aux187_ammo_rifle_HP";

            count = 45;
            descriptionShort="Rounds: 45";
            displayNameShort = "15C 45rnd";
            mass=8;
        };

        class aux187_Mag_45Rnd_DC15A : aux187_magazine_base
        {
            displayName = "[187th] DC-15A 45rnd High Power Magazine";
            author = "Tim";
            ammo = "aux187_ammo_rifle_HP";

            count = 45;
            descriptionShort="Rounds: 45";
            displayNameShort = "15A 45rnd";
            mass=8;
        };

        class aux187_Mag_40Rnd_XLE7 : aux187_magazine_base
        {
            displayName = "[187th] XLE-7 40rnd High Power Magazine";
            author = "Tim";
            ammo = "aux187_ammo_rifle_HP";

            count = 40;
            descriptionShort="Rounds: 40";
            displayNameShort = "XLE7 40rnd";
            mass=8;
        };

        class aux187_Mag_250Rnd_DLT16 : aux187_magazine_base
        {
            displayName = "[187th] DLT-16 250rnd High Power Magazine";
            author = "Tim";
            ammo = "aux187_ammo_rifle_HP";

            count = 250;
            descriptionShort="Rounds: 250";
            displayNameShort = "DLT16 250rnd";
            mass=60;
        };

        class aux187_Mag_300Rnd_Z6 : aux187_magazine_base
        {
            displayName = "[187th] Z-6 300rnd High Power Magazine";
            author = "Tim";
            ammo = "aux187_ammo_rifle_HP";

            count = 300;
            descriptionShort="Rounds: 300";
            displayNameShort = "Z6 300rnd";
            mass=65;
        };

        class aux187_Mag_75Rnd_DC15L : aux187_magazine_base
        {
            displayName = "[187th] DC-15L 75rnd High Power Magazine";
            author = "Tim";
            ammo = "aux187_ammo_rifle_HP";

            count = 75;
            descriptionShort="Rounds: 75";
            displayNameShort = "15L 75rnd";
            mass=20;
        };

    /*
	---------------------------------------------------------------
	                      SNIPER MAGAZINE CLASSES
	---------------------------------------------------------------
	*/

        class aux187_Mag_20Rnd_Valken38X : aux187_magazine_base
        {
            displayName = "[187th] Valken-38X 20rnd Low Power Magazine";
            author = "Tim";
            ammo = "aux187_ammo_sniper_LP";

            count = 20;
            descriptionShort="Rounds: 20";
            displayNameShort = "38X 20rnd";
            mass=15;
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
        };

        class aux187_Mag_1Rnd_CMag : aux187_magazine_base
        {
            displayName = "[187th] DC-15X 1rnd Charge Magazine";
            author = "Tim";
            ammo = "aux187_ammo_sniper_CMAG";

            count = 1;
            descriptionShort="Rounds: 1";
            displayNameShort = "CMAG 1rnd";
            mass=25;
        };

        class aux187_Mag_80Rnd_Pistol : aux187_magazine_base
        {
            displayName = "[187th] DC-17 80rnd Low Power Magazine";
            author = "Tim";
            ammo = "aux187_ammo_rifle_LP";

            count = 80;
            descriptionShort="Rounds: 80";
            displayNameShort = "17 80rnd";
            mass=8;
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

