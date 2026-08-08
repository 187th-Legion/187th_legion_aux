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
        };

        class aux187_Mag_80Rnd_DC15S : aux187_magazine_base
        {
            displayName = "[187th] DC-15S 80rnd Low Power Magazine";
            author = "Tim";
            ammo = "aux187_ammo_rifle_LP";

            count = 40;
        };

        class aux187_Mag_45Rnd_DC15C : aux187_magazine_base
        {
            displayName = "[187th] DC-15C 45rnd High Power Magazine";
            author = "Tim";
            ammo = "aux187_ammo_rifle_HP";

            count = 45;
        };

        class aux187_Mag_45Rnd_DC15A : aux187_magazine_base
        {
            displayName = "[187th] DC-15A 45rnd High Power Magazine";
            author = "Tim";
            ammo = "aux187_ammo_rifle_HP";

            count = 45;
        };

        class aux187_Mag_40Rnd_XLE7 : aux187_magazine_base
        {
            displayName = "[187th] XLE-7 40rnd High Power Magazine";
            author = "Tim";
            ammo = "aux187_ammo_rifle_HP";

            count = 40;
        };

        class aux187_Mag_250Rnd_DLT16 : aux187_magazine_base
        {
            displayName = "[187th] DLT-16 250rnd High Power Magazine";
            author = "Tim";
            ammo = "aux187_ammo_rifle_HP";

            count = 250;
        };

        class aux187_Mag_300Rnd_Z6 : aux187_magazine_base
        {
            displayName = "[187th] Z-6 300rnd High Power Magazine";
            author = "Tim";
            ammo = "aux187_ammo_rifle_HP";

            count = 300;
        };

        class aux187_Mag_75Rnd_DC15L : aux187_magazine_base
        {
            displayName = "[187th] DC-15L 75rnd High Power Magazine";
            author = "Tim";
            ammo = "aux187_ammo_rifle_HP";

            count = 75;
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
        };

        class aux187_Mag_10Rnd_Firepuncher : aux187_magazine_base
        {
            displayName = "[187th] 773-Firepuncher 10rnd High Power Magazine";
            author = "Tim";
            ammo = "aux187_ammo_sniper_HP";

            count = 10;
        };

        class aux187_Mag_5Rnd_DC15X : aux187_magazine_base
        {
            displayName = "[187th] DC-15X 5rnd High Power Magazine";
            author = "Tim";
            ammo = "aux187_ammo_sniper_HP";

            count = 5;
        };

        class aux187_Mag_1Rnd_CMag : aux187_magazine_base
        {
            displayName = "[187th] DC-15X 1rnd Charge Magazine";
            author = "Tim";
            ammo = "aux187_ammo_sniper_CMAG";

            count = 1;
        };

    /*
	---------------------------------------------------------------
	                      SHOTGUN MAGAZINE CLASSES
	---------------------------------------------------------------
	*/


