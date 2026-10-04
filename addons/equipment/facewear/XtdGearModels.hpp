    class aux187_Facewear_Model
    {
        label = "[187th] Chest Rigs";
        author = "Tim";
        options[] = { "chestRigs", "commandoPacks", "trooperPacks", "antennas", "miscPacks" };
        
        class chestRigs
        {
            label = "Chest Rig Options";
            values[] = { "Chestrig", "Satchel", "Pouch", "Heavy" };
            alwaysSelectable = 1;
        };

        class commandoPacks
        {
            label = "Commando Options";
            values[] = { "EOD", "Leader", "Sniper", "Technician" };
            alwaysSelectable = 1;
        };

        class trooperPacks
        {
            label = "Trooper Options";
            values[] = { "Trooper", "Grenadier", "Medic", "Suspenders", "Pouch", "Breacher", "Belt" };
            alwaysSelectable = 1;
        };

        class antennas
        {
            label = "Antenna Options";
            values[] = { "SNCO", "Officer", "RTO", "Major", "Commander" };
            alwaysSelectable = 1;
        };

        class miscPacks
        {
            label = "Miscellaneous Options";
            values[] = { "Overlay" };
            alwaysSelectable = 1;
            
            class Overlay
            {
                label = "Underwater Overlay";
            };
        };
    };
