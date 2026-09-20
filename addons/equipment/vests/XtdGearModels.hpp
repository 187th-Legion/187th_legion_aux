    class aux187_Vests_Model
    {
        label = "[187th] Vests";
        author = "Tim";
        options[] = { "vestType" };
        
        class vestType
        {
            label = "Vest Options";
            values[] = { "Holster", "Grenade", "Recon", "EOD", "OKama", "Grenadier", "Vest1" };
            alwaysSelectable = 1;
        };

        class Grenade
        {
            label = "Grenade Holster";
        };

        class OKama
        {
            label = "Officer Kama";
        };
    };

    class aux187_LeadershipVests_Model
    {
        label = "[187th] Leadership Vests";
        author = "Tim";
        options[] = { "vestType" };
        
        class vestType
        {
            label = "Vest Options";
            values[] = { "CP", "CS", "CGS", "CL", "CC" };
            alwaysSelectable = 1;
        };
    };
