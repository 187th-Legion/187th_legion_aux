    class ACE_7Rnd_408_305gr_Mag;
    class aux187_ptr7_base_magazine : ACE_7Rnd_408_305gr_Mag
    {
        displayName = "";
        author = "Tim";

        scope = 1;
        scopeArsenal = 1;
        scopeCurator = 1;

        ammo = "aux187_ptr7_base_ammo";
        count = 1;

        descriptionShort = "Base Ammo";
    };

    class aux187_ptr7_SLAP_magazine : aux187_ptr7_base_magazine //Saboted Light Armor Penetrator
    {
        displayName = "20mm 1Rnd SLAP Round";

        scope = 2;
        scopeArsenal = 2;
        scopeCurator = 2;

        ammo = "aux187_ptr7_SLAP_ammo";
        count = 1;

        descriptionShort = "PTR-7 Saboted Light Armor Penetrator";
    };

    class aux187_ptr7_AMHEI_magazine : aux187_ptr7_base_magazine //Anti Material High Explosive Incendiary
    {
        displayName = "20mm 1Rnd AMHEI Round";

        scope = 2;
        scopeArsenal = 2;
        scopeCurator = 2;

        ammo = "aux187_ptr7_AMHEI_ammo";
        count = 1;
        descriptionShort = "PTR-7 Anti-Materiel High Explosive Incendiary";
    };

    class aux187_ptr7_PTHP_magazine : aux187_ptr7_base_magazine //Polymer Tipped Hollow Point
    {
        displayName = "20mm 1Rnd PTHP Round";

        scope = 2;
        scopeArsenal = 2;
        scopeCurator = 2;

        ammo = "aux187_ptr7_PTHP_ammo";
        count = 1;
        descriptionShort = "PTR-7 Polymer-Tipped Hollow Point";
    };
