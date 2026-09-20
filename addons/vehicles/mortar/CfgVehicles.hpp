    class OPTRE_AU_44_Mortar_Standalone;
    class aux187_au44 : OPTRE_AU_44_Mortar_Standalone
    {
        displayName = "Au-44 Mortar";
        forceInGarage=1;
        author = "Tim";

        class assembleInfo
        {
            assembleTo = "";
            base = "";
            displayName = "";
            dissasembleTo[] = { "aux187_backpack_au44" };
            primary = 0;
        };

        class Turrets : Turrets
        {
            class MainTurret : MainTurret
            {
                weapons[] = { "aux187_weapon_au44" };

                magazines[] = {  };
            };
        };
    };
