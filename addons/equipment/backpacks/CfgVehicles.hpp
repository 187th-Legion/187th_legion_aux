        class JLTS_Clone_backpack;
        class JLTS_Clone_backpack_s;
        class JLTS_Clone_backpack_RTO;
        class JLTS_Clone_backpack_s_RTO;

        class aux187_backpack_trooper_base : JLTS_Clone_backpack
        {
            author = "Tim";
            scope = 2;
            scopeArsenal = 2;

            displayName = "[187th] Clone Trooper Backpack";

            hiddenSelectionsTextures[] = { QPATHTOF(backpacks\data\187th_Backpack_Trooper.paa) };

            class XtdGearInfo {
                model = "aux187_Backpack_Model";
                roleType = "Trooper";
                strapType = "Base";
                radioType = "Base";
                camoType = "Base";
            };

            maximumLoad = "250";
            mass = 50;
        };

        class aux187_backpack_trooper_base_strap : JLTS_Clone_backpack_s
        {
            author = "Tim";
            scope = 2;
            scopeArsenal = 2;

            displayName = "[187th] Clone Trooper Backpack (Strapped)";

            hiddenSelectionsTextures[] = { QPATHTOF(backpacks\data\187th_Backpack_Trooper.paa) };

            class XtdGearInfo {
                model = "aux187_Backpack_Model";
                roleType = "Trooper";
                strapType = "Strapped";
                radioType = "Base";
                camoType = "Base";
            };

            maximumLoad = "250";
            mass = 50;
        };

        class aux187_backpack_trooper_radio_base : JLTS_Clone_backpack_RTO
        {
            author = "Tim";
            scope = 2;
            scopeArsenal = 2;

            displayName = "[187th] Clone Trooper Backpack";

            hiddenSelectionsTextures[] = { QPATHTOF(backpacks\data\187th_Backpack_Trooper.paa) };

            class XtdGearInfo {
                model = "aux187_Backpack_Model";
                roleType = "Trooper";
                strapType = "Base";
                radioType = "Radio";
                camoType = "Base";
            };

            maximumLoad = "250";
            mass = 50;

            tf_dialog = "JLTS_clone_rto_radio_dialog";
            tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel;";
            tf_encryptionCode = "tf_west_radio_code";
            tf_hasLRradio = 1;
            tf_isolatedAmount = 0.65;
            tf_range = 20000;
            tf_subtype = "digital_lr";
        };

        class aux187_backpack_trooper_radio_base_strap : JLTS_Clone_backpack_s_RTO
        {
            author = "Tim";
            scope = 2;
            scopeArsenal = 2;

            displayName = "[187th] Clone Trooper Backpack (Strapped)";

            hiddenSelectionsTextures[] = { QPATHTOF(backpacks\data\187th_Backpack_Trooper.paa) };

            class XtdGearInfo {
                model = "aux187_Backpack_Model";
                roleType = "Trooper";
                strapType = "Strapped";
                radioType = "Radio";
                camoType = "Base";
            };

            maximumLoad = "250";
            mass = 50;

            tf_dialog = "JLTS_clone_rto_radio_dialog";
            tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel;";
            tf_encryptionCode = "tf_west_radio_code";
            tf_hasLRradio = 1;
            tf_isolatedAmount = 0.65;
            tf_range = 20000;
            tf_subtype = "digital_lr";
        };

        class aux187_backpack_medic_base : JLTS_Clone_backpack
        {
            author = "Tim";
            scope = 2;
            scopeArsenal = 2;

            displayName = "[187th] Clone Medic Backpack";

            hiddenSelectionsTextures[] = { QPATHTOF(backpacks\data\187th_Backpack_Medic.paa) };

            class XtdGearInfo {
                model = "aux187_Backpack_Model";
                roleType = "Medic";
                strapType = "Base";
                radioType = "Base";
                camoType = "Base";
            };

            maximumLoad = "250";
            mass = 50;
        };

        class aux187_backpack_medic_base_strap : JLTS_Clone_backpack_s
        {
            author = "Tim";
            scope = 2;
            scopeArsenal = 2;

            displayName = "[187th] Clone Medic Backpack (Strapped)";

            hiddenSelectionsTextures[] = { QPATHTOF(backpacks\data\187th_Backpack_Medic.paa) };

            class XtdGearInfo {
                model = "aux187_Backpack_Model";
                roleType = "Medic";
                strapType = "Strapped";
                radioType = "Base";
                camoType = "Base";
            };

            maximumLoad = "250";
            mass = 50;
        };

        class aux187_backpack_ammo_base : JLTS_Clone_backpack
        {
            author = "Tim";
            scope = 2;
            scopeArsenal = 2;

            displayName = "[187th] Clone Ammo Backpack";

            hiddenSelectionsTextures[] = { QPATHTOF(backpacks\data\187th_Backpack_Ammo.paa) };

            class XtdGearInfo {
                model = "aux187_Backpack_Model";
                roleType = "Ammo";
                strapType = "Base";
                radioType = "Base";
                camoType = "Base";
            };

            maximumLoad = "250";
            mass = 50;
        };

        class aux187_backpack_ammo_base_strap : JLTS_Clone_backpack_s
        {
            author = "Tim";
            scope = 2;
            scopeArsenal = 2;

            displayName = "[187th] Clone Ammo Backpack (Strapped)";

            hiddenSelectionsTextures[] = { QPATHTOF(backpacks\data\187th_Backpack_Ammo.paa) };

            class XtdGearInfo {
                model = "aux187_Backpack_Model";
                roleType = "Ammo";
                strapType = "Strapped";
                radioType = "Base";
                camoType = "Base";
            };

            maximumLoad = "250";
            mass = 50;
        };

        class aux187_backpack_engineer_base : JLTS_Clone_backpack
        {
            author = "Tim";
            scope = 2;
            scopeArsenal = 2;

            displayName = "[187th] Clone Engineer Backpack";

            hiddenSelectionsTextures[] = { QPATHTOF(backpacks\data\187th_Backpack_Engineer.paa) };

            class XtdGearInfo {
                model = "aux187_Backpack_Model";
                roleType = "Engineer";
                strapType = "Base";
                radioType = "Base";
                camoType = "Base";
            };

            maximumLoad = "450";
            mass = 50;
        };

        class aux187_backpack_engineer_base_strap : JLTS_Clone_backpack_s
        {
            author = "Tim";
            scope = 2;
            scopeArsenal = 2;

            displayName = "[187th] Clone Engineer Backpack (Strapped)";

            hiddenSelectionsTextures[] = { QPATHTOF(backpacks\data\187th_Backpack_Engineer.paa) };

            class XtdGearInfo {
                model = "aux187_Backpack_Model";
                roleType = "Engineer";
                strapType = "Strapped";
                radioType = "Base";
                camoType = "Base";
            };

            maximumLoad = "450";
            mass = 50;
        };

                class aux187_backpack_trooper_snow : JLTS_Clone_backpack
        {
            author = "Tim";
            scope = 2;
            scopeArsenal = 2;

            displayName = "[187th] Clone Trooper Backpack (Snow)";

            hiddenSelectionsTextures[] = { QPATHTOF(backpacks\data\187th_Backpack_Trooper_Snow.paa) };

            class XtdGearInfo {
                model = "aux187_Backpack_Model";
                roleType = "Trooper";
                strapType = "Base";
                radioType = "Base";
                camoType = "Snow";
            };

            maximumLoad = "250";
            mass = 50;
        };

        class aux187_backpack_trooper_snow_strap : JLTS_Clone_backpack_s
        {
            author = "Tim";
            scope = 2;
            scopeArsenal = 2;

            displayName = "[187th] Clone Trooper Backpack (Strapped, Snow)";

            hiddenSelectionsTextures[] = { QPATHTOF(backpacks\data\187th_Backpack_Trooper_Snow.paa) };

            class XtdGearInfo {
                model = "aux187_Backpack_Model";
                roleType = "Trooper";
                strapType = "Strapped";
                radioType = "Base";
                camoType = "Snow";
            };

            maximumLoad = "250";
            mass = 50;
        };

        class aux187_backpack_trooper_radio_snow : JLTS_Clone_backpack_RTO
        {
            author = "Tim";
            scope = 2;
            scopeArsenal = 2;

            displayName = "[187th] Clone Trooper Backpack (Snow)";

            hiddenSelectionsTextures[] = { QPATHTOF(backpacks\data\187th_Backpack_Trooper_Snow.paa) };

            class XtdGearInfo {
                model = "aux187_Backpack_Model";
                roleType = "Trooper";
                strapType = "Base";
                radioType = "Radio";
                camoType = "Snow";
            };

            maximumLoad = "250";
            mass = 50;

            tf_dialog = "JLTS_clone_rto_radio_dialog";
            tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel;";
            tf_encryptionCode = "tf_west_radio_code";
            tf_hasLRradio = 1;
            tf_isolatedAmount = 0.65;
            tf_range = 20000;
            tf_subtype = "digital_lr";
        };

        class aux187_backpack_trooper_radio_snow_strap : JLTS_Clone_backpack_s_RTO
        {
            author = "Tim";
            scope = 2;
            scopeArsenal = 2;

            displayName = "[187th] Clone Trooper Backpack (Strapped, Snow)";

            hiddenSelectionsTextures[] = { QPATHTOF(backpacks\data\187th_Backpack_Trooper_Snow.paa) };

            class XtdGearInfo {
                model = "aux187_Backpack_Model";
                roleType = "Trooper";
                strapType = "Strapped";
                radioType = "Radio";
                camoType = "Snow";
            };

            maximumLoad = "250";
            mass = 50;

            tf_dialog = "JLTS_clone_rto_radio_dialog";
            tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel;";
            tf_encryptionCode = "tf_west_radio_code";
            tf_hasLRradio = 1;
            tf_isolatedAmount = 0.65;
            tf_range = 20000;
            tf_subtype = "digital_lr";
        };

        class aux187_backpack_medic_snow : JLTS_Clone_backpack
        {
            author = "Tim";
            scope = 2;
            scopeArsenal = 2;

            displayName = "[187th] Clone Medic Backpack (Snow)";

            hiddenSelectionsTextures[] = { QPATHTOF(backpacks\data\187th_Backpack_Medic_Snow.paa) };

            class XtdGearInfo {
                model = "aux187_Backpack_Model";
                roleType = "Medic";
                strapType = "Base";
                radioType = "Base";
                camoType = "Snow";
            };

            maximumLoad = "250";
            mass = 50;
        };

        class aux187_backpack_medic_snow_strap : JLTS_Clone_backpack_s
        {
            author = "Tim";
            scope = 2;
            scopeArsenal = 2;

            displayName = "[187th] Clone Medic Backpack (Strapped, Snow)";

            hiddenSelectionsTextures[] = { QPATHTOF(backpacks\data\187th_Backpack_Medic_Snow.paa) };

            class XtdGearInfo {
                model = "aux187_Backpack_Model";
                roleType = "Medic";
                strapType = "Strapped";
                radioType = "Base";
                camoType = "Snow";
            };

            maximumLoad = "250";
            mass = 50;
        };

        class aux187_backpack_ammo_snow : JLTS_Clone_backpack
        {
            author = "Tim";
            scope = 2;
            scopeArsenal = 2;

            displayName = "[187th] Clone Ammo Backpack (Snow)";

            hiddenSelectionsTextures[] = { QPATHTOF(backpacks\data\187th_Backpack_Ammo_Snow.paa) };

            class XtdGearInfo {
                model = "aux187_Backpack_Model";
                roleType = "Ammo";
                strapType = "Base";
                radioType = "Base";
                camoType = "Snow";
            };

            maximumLoad = "250";
            mass = 50;
        };

        class aux187_backpack_ammo_snow_strap : JLTS_Clone_backpack_s
        {
            author = "Tim";
            scope = 2;
            scopeArsenal = 2;

            displayName = "[187th] Clone Ammo Backpack (Strapped, Snow)";

            hiddenSelectionsTextures[] = { QPATHTOF(backpacks\data\187th_Backpack_Ammo_Snow.paa) };

            class XtdGearInfo {
                model = "aux187_Backpack_Model";
                roleType = "Ammo";
                strapType = "Strapped";
                radioType = "Base";
                camoType = "Snow";
            };

            maximumLoad = "250";
            mass = 50;
        };

        class aux187_backpack_engineer_snow : JLTS_Clone_backpack
        {
            author = "Tim";
            scope = 2;
            scopeArsenal = 2;

            displayName = "[187th] Clone Engineer Backpack (Snow)";

            hiddenSelectionsTextures[] = { QPATHTOF(backpacks\data\187th_Backpack_Engineer_Snow.paa) };

            class XtdGearInfo {
                model = "aux187_Backpack_Model";
                roleType = "Engineer";
                strapType = "Base";
                radioType = "Base";
                camoType = "Snow";
            };

            maximumLoad = "450";
            mass = 50;
        };

        class aux187_backpack_engineer_snow_strap : JLTS_Clone_backpack_s
        {
            author = "Tim";
            scope = 2;
            scopeArsenal = 2;

            displayName = "[187th] Clone Engineer Backpack (Strapped, Snow)";

            hiddenSelectionsTextures[] = { QPATHTOF(backpacks\data\187th_Backpack_Engineer_Snow.paa) };

            class XtdGearInfo {
                model = "aux187_Backpack_Model";
                roleType = "Engineer";
                strapType = "Strapped";
                radioType = "Base";
                camoType = "Snow";
            };

            maximumLoad = "450";
            mass = 50;
        };
        
        class aux187_backpack_trooper_sand : JLTS_Clone_backpack
        {
            author = "Tim";
            scope = 2;
            scopeArsenal = 2;

            displayName = "[187th] Clone Trooper Backpack (Sand)";

            hiddenSelectionsTextures[] = { QPATHTOF(backpacks\data\187th_Backpack_Trooper_sand.paa) };

            class XtdGearInfo {
                model = "aux187_Backpack_Model";
                roleType = "Trooper";
                strapType = "Base";
                radioType = "Base";
                camoType = "Sand";
            };

            maximumLoad = "250";
            mass = 50;
        };

        class aux187_backpack_trooper_sand_strap : JLTS_Clone_backpack_s
        {
            author = "Tim";
            scope = 2;
            scopeArsenal = 2;

            displayName = "[187th] Clone Trooper Backpack (Strapped, Sand)";

            hiddenSelectionsTextures[] = { QPATHTOF(backpacks\data\187th_Backpack_Trooper_sand.paa) };

            class XtdGearInfo {
                model = "aux187_Backpack_Model";
                roleType = "Trooper";
                strapType = "Strapped";
                radioType = "Base";
                camoType = "Sand";
            };

            maximumLoad = "250";
            mass = 50;
        };

        class aux187_backpack_trooper_radio_sand : JLTS_Clone_backpack_RTO
        {
            author = "Tim";
            scope = 2;
            scopeArsenal = 2;

            displayName = "[187th] Clone Trooper Backpack (Sand)";

            hiddenSelectionsTextures[] = { QPATHTOF(backpacks\data\187th_Backpack_Trooper_sand.paa) };

            class XtdGearInfo {
                model = "aux187_Backpack_Model";
                roleType = "Trooper";
                strapType = "Base";
                radioType = "Radio";
                camoType = "Sand";
            };

            maximumLoad = "250";
            mass = 50;

            tf_dialog = "JLTS_clone_rto_radio_dialog";
            tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel;";
            tf_encryptionCode = "tf_west_radio_code";
            tf_hasLRradio = 1;
            tf_isolatedAmount = 0.65;
            tf_range = 20000;
            tf_subtype = "digital_lr";
        };


        class aux187_backpack_trooper_radio_sand_strap : JLTS_Clone_backpack_s_RTO
        {
            author = "Tim";
            scope = 2;
            scopeArsenal = 2;

            displayName = "[187th] Clone Trooper Backpack (Strapped, Sand)";

            hiddenSelectionsTextures[] = { QPATHTOF(backpacks\data\187th_Backpack_Trooper_sand.paa) };

            class XtdGearInfo {
                model = "aux187_Backpack_Model";
                roleType = "Trooper";
                strapType = "Strapped";
                radioType = "Radio";
                camoType = "Sand";
            };

            maximumLoad = "250";
            mass = 50;

            tf_dialog = "JLTS_clone_rto_radio_dialog";
            tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel;";
            tf_encryptionCode = "tf_west_radio_code";
            tf_hasLRradio = 1;
            tf_isolatedAmount = 0.65;
            tf_range = 20000;
            tf_subtype = "digital_lr";
        };

        class aux187_backpack_medic_sand : JLTS_Clone_backpack
        {
            author = "Tim";
            scope = 2;
            scopeArsenal = 2;

            displayName = "[187th] Clone Medic Backpack (Sand)";

            hiddenSelectionsTextures[] = { QPATHTOF(backpacks\data\187th_Backpack_Medic_sand.paa) };

            class XtdGearInfo {
                model = "aux187_Backpack_Model";
                roleType = "Medic";
                strapType = "Base";
                radioType = "Base";
                camoType = "Sand";
            };

            maximumLoad = "250";
            mass = 50;
        };

        class aux187_backpack_medic_sand_strap : JLTS_Clone_backpack_s
        {
            author = "Tim";
            scope = 2;
            scopeArsenal = 2;

            displayName = "[187th] Clone Medic Backpack (Strapped, Sand)";

            hiddenSelectionsTextures[] = { QPATHTOF(backpacks\data\187th_Backpack_Medic_sand.paa) };

            class XtdGearInfo {
                model = "aux187_Backpack_Model";
                roleType = "Medic";
                strapType = "Strapped";
                radioType = "Base";
                camoType = "Sand";
            };

            maximumLoad = "250";
            mass = 50;
        };

        class aux187_backpack_ammo_sand : JLTS_Clone_backpack
        {
            author = "Tim";
            scope = 2;
            scopeArsenal = 2;

            displayName = "[187th] Clone Ammo Backpack (Sand)";

            hiddenSelectionsTextures[] = { QPATHTOF(backpacks\data\187th_Backpack_Ammo_sand.paa) };

            class XtdGearInfo {
                model = "aux187_Backpack_Model";
                roleType = "Ammo";
                strapType = "Base";
                radioType = "Base";
                camoType = "Sand";
            };

            maximumLoad = "250";
            mass = 50;
        };

        class aux187_backpack_ammo_sand_strap : JLTS_Clone_backpack_s
        {
            author = "Tim";
            scope = 2;
            scopeArsenal = 2;

            displayName = "[187th] Clone Ammo Backpack (Strapped, Sand)";

            hiddenSelectionsTextures[] = { QPATHTOF(backpacks\data\187th_Backpack_Ammo_sand.paa) };

            class XtdGearInfo {
                model = "aux187_Backpack_Model";
                roleType = "Ammo";
                strapType = "Strapped";
                radioType = "Base";
                camoType = "Sand";
            };

            maximumLoad = "250";
            mass = 50;
        };

        class aux187_backpack_engineer_sand : JLTS_Clone_backpack
        {
            author = "Tim";
            scope = 2;
            scopeArsenal = 2;

            displayName = "[187th] Clone Engineer Backpack (Sand)";

            hiddenSelectionsTextures[] = { QPATHTOF(backpacks\data\187th_Backpack_Engineer_sand.paa) };

            class XtdGearInfo {
                model = "aux187_Backpack_Model";
                roleType = "Engineer";
                strapType = "Base";
                radioType = "Base";
                camoType = "Sand";
            };

            maximumLoad = "450";
            mass = 50;
        };

        class aux187_backpack_engineer_sand_strap : JLTS_Clone_backpack_s
        {
            author = "Tim";
            scope = 2;
            scopeArsenal = 2;

            displayName = "[187th] Clone Engineer Backpack (Strapped, Sand)";

            hiddenSelectionsTextures[] = { QPATHTOF(backpacks\data\187th_Backpack_Engineer_sand.paa) };

            class XtdGearInfo {
                model = "aux187_Backpack_Model";
                roleType = "Engineer";
                strapType = "Strapped";
                radioType = "Base";
                camoType = "Sand";
            };

            maximumLoad = "450";
            mass = 50;
        };
        
        class aux187_backpack_trooper_wood : JLTS_Clone_backpack
        {
            author = "Tim";
            scope = 2;
            scopeArsenal = 2;

            displayName = "[187th] Clone Trooper Backpack (Wood)";

            hiddenSelectionsTextures[] = { QPATHTOF(backpacks\data\187th_Backpack_Trooper_wood.paa) };

            class XtdGearInfo {
                model = "aux187_Backpack_Model";
                roleType = "Trooper";
                strapType = "Base";
                radioType = "Base";
                camoType = "Wood";
            };

            maximumLoad = "250";
            mass = 50;
        };

        class aux187_backpack_trooper_wood_strap : JLTS_Clone_backpack_s
        {
            author = "Tim";
            scope = 2;
            scopeArsenal = 2;

            displayName = "[187th] Clone Trooper Backpack (Strapped, Wood)";

            hiddenSelectionsTextures[] = { QPATHTOF(backpacks\data\187th_Backpack_Trooper_wood.paa) };

            class XtdGearInfo {
                model = "aux187_Backpack_Model";
                roleType = "Trooper";
                strapType = "Strapped";
                radioType = "Base";
                camoType = "Wood";
            };

            maximumLoad = "250";
            mass = 50;
        };

        class aux187_backpack_trooper_radio_wood : JLTS_Clone_backpack_RTO
        {
            author = "Tim";
            scope = 2;
            scopeArsenal = 2;

            displayName = "[187th] Clone Trooper Backpack (Wood)";

            hiddenSelectionsTextures[] = { QPATHTOF(backpacks\data\187th_Backpack_Trooper_wood.paa) };

            class XtdGearInfo {
                model = "aux187_Backpack_Model";
                roleType = "Trooper";
                strapType = "Base";
                radioType = "Radio";
                camoType = "Wood";
            };

            maximumLoad = "250";
            mass = 50;

            tf_dialog = "JLTS_clone_rto_radio_dialog";
            tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel;";
            tf_encryptionCode = "tf_west_radio_code";
            tf_hasLRradio = 1;
            tf_isolatedAmount = 0.65;
            tf_range = 20000;
            tf_subtype = "digital_lr";
        };

        class aux187_backpack_trooper_radio_wood_strap : JLTS_Clone_backpack_s_RTO
        {
            author = "Tim";
            scope = 2;
            scopeArsenal = 2;

            displayName = "[187th] Clone Trooper Backpack (Strapped, Wood)";

            hiddenSelectionsTextures[] = { QPATHTOF(backpacks\data\187th_Backpack_Trooper_wood.paa) };

            class XtdGearInfo {
                model = "aux187_Backpack_Model";
                roleType = "Trooper";
                strapType = "Strapped";
                radioType = "Radio";
                camoType = "Wood";
            };

            maximumLoad = "250";
            mass = 50;

            tf_dialog = "JLTS_clone_rto_radio_dialog";
            tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel;";
            tf_encryptionCode = "tf_west_radio_code";
            tf_hasLRradio = 1;
            tf_isolatedAmount = 0.65;
            tf_range = 20000;
            tf_subtype = "digital_lr";
        };

        class aux187_backpack_medic_wood : JLTS_Clone_backpack
        {
            author = "Tim";
            scope = 2;
            scopeArsenal = 2;

            displayName = "[187th] Clone Medic Backpack (Wood)";

            hiddenSelectionsTextures[] = { QPATHTOF(backpacks\data\187th_Backpack_Medic_wood.paa) };

            class XtdGearInfo {
                model = "aux187_Backpack_Model";
                roleType = "Medic";
                strapType = "Base";
                radioType = "Base";
                camoType = "Wood";
            };

            maximumLoad = "250";
            mass = 50;
        };

        class aux187_backpack_medic_wood_strap : JLTS_Clone_backpack_s
        {
            author = "Tim";
            scope = 2;
            scopeArsenal = 2;

            displayName = "[187th] Clone Medic Backpack (Strapped, Wood)";

            hiddenSelectionsTextures[] = { QPATHTOF(backpacks\data\187th_Backpack_Medic_wood.paa) };

            class XtdGearInfo {
                model = "aux187_Backpack_Model";
                roleType = "Medic";
                strapType = "Strapped";
                radioType = "Base";
                camoType = "Wood";
            };

            maximumLoad = "250";
            mass = 50;
        };

        class aux187_backpack_ammo_wood : JLTS_Clone_backpack
        {
            author = "Tim";
            scope = 2;
            scopeArsenal = 2;

            displayName = "[187th] Clone Ammo Backpack (Wood)";

            hiddenSelectionsTextures[] = { QPATHTOF(backpacks\data\187th_Backpack_Ammo_wood.paa) };

            class XtdGearInfo {
                model = "aux187_Backpack_Model";
                roleType = "Ammo";
                strapType = "Base";
                radioType = "Base";
                camoType = "Wood";
            };

            maximumLoad = "250";
            mass = 50;
        };

        class aux187_backpack_ammo_wood_strap : JLTS_Clone_backpack_s
        {
            author = "Tim";
            scope = 2;
            scopeArsenal = 2;

            displayName = "[187th] Clone Ammo Backpack (Strapped, Wood)";

            hiddenSelectionsTextures[] = { QPATHTOF(backpacks\data\187th_Backpack_Ammo_wood.paa) };

            class XtdGearInfo {
                model = "aux187_Backpack_Model";
                roleType = "Ammo";
                strapType = "Strapped";
                radioType = "Base";
                camoType = "Wood";
            };

            maximumLoad = "250";
            mass = 50;
        };

        class aux187_backpack_engineer_wood : JLTS_Clone_backpack
        {
            author = "Tim";
            scope = 2;
            scopeArsenal = 2;

            displayName = "[187th] Clone Engineer Backpack (Wood)";

            hiddenSelectionsTextures[] = { QPATHTOF(backpacks\data\187th_Backpack_Engineer_wood.paa) };

            class XtdGearInfo {
                model = "aux187_Backpack_Model";
                roleType = "Engineer";
                strapType = "Base";
                radioType = "Base";
                camoType = "Wood";
            };

            maximumLoad = "450";
            mass = 50;
        };

        class aux187_backpack_engineer_wood_strap : JLTS_Clone_backpack_s
        {
            author = "Tim";
            scope = 2;
            scopeArsenal = 2;

            displayName = "[187th] Clone Engineer Backpack (Strapped, Wood)";

            hiddenSelectionsTextures[] = { QPATHTOF(backpacks\data\187th_Backpack_Engineer_wood.paa) };

            class XtdGearInfo {
                model = "aux187_Backpack_Model";
                roleType = "Engineer";
                strapType = "Strapped";
                radioType = "Base";
                camoType = "Wood";
            };

            maximumLoad = "450";
            mass = 50;
        };

    /*
	---------------------------------------------------------------
	                    MISC BACKPACK CLASSES
	---------------------------------------------------------------
	*/

        class JLTS_Clone_RTO_Pack;
        class aux187_backpack_mini_radio_1 : JLTS_Clone_RTO_Pack
        {
            author = "Tim";
            scope = 2;
            scopeArsenal = 2;

            displayName = "[187th] Clone Mini LR Pack";

            class XtdGearInfo {
                model = "aux187_MiscBags_Model";
                Radios = "Mini1";
            };

            maximumLoad = "150";
            mass = 50;

            tf_dialog = "JLTS_clone_rto_radio_dialog";
            tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel;";
            tf_encryptionCode = "tf_west_radio_code";
            tf_hasLRradio = 1;
            tf_isolatedAmount = 0.65;
            tf_range = 10000;
            tf_subtype = "digital_lr";

        };

        class SEA_Backpack_RTO_Attachment;
        class aux187_backpack_mini_radio_2 : SEA_Backpack_RTO_Attachment
        {
            author = "Tim";
            scope = 2;
            scopeArsenal = 2;

            displayName = "[187th] Clone Mini RTO Attachment";

            class XtdGearInfo {
                model = "aux187_MiscBags_Model";
                Radios = "Mini2";
            };

            maximumLoad = "150";
            mass = 50;

            tf_dialog = "JLTS_clone_rto_radio_dialog";
            tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel;";
            tf_encryptionCode = "tf_west_radio_code";
            tf_hasLRradio = 1;
            tf_isolatedAmount = 0.65;
            tf_range = 10000;
            tf_subtype = "digital_lr";
        };

        class IDA_Imperial_Backpack_Radio_Straps;
        class aux187_backpack_patrol_radio : IDA_Imperial_Backpack_Radio_Straps
        {
            author = "Tim";
            scope = 2;
            scopeArsenal = 2;

            displayName = "[187th] Clone Patrol Radiopack";

            class XtdGearInfo {
                model = "aux187_MiscBags_Model";
                Radios = "PatrolPackR";
            };

            maximumLoad = "250";
            mass = 50;

            tf_dialog = "JLTS_clone_rto_radio_dialog";
            tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel;";
            tf_encryptionCode = "tf_west_radio_code";
            tf_hasLRradio = 1;
            tf_isolatedAmount = 0.65;
            tf_range = 10000;
            tf_subtype = "digital_lr";
        };

        class ls_orsfBackpack_trooper_radio;
        class aux187_backpack_heavy_radio_2 : ls_orsfBackpack_trooper_radio
        {
            author = "Tim";
            scope = 2;
            scopeArsenal = 2;

            displayName = "[187th] Clone Heavy RTO Pack";

            class XtdGearInfo {
                model = "aux187_MiscBags_Model";
                Radios = "RTO2";
            };

            maximumLoad = "200";
            mass = 50;

            tf_dialog = "JLTS_clone_rto_radio_dialog";
            tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel;";
            tf_encryptionCode = "tf_west_radio_code";
            tf_hasLRradio = 1;
            tf_isolatedAmount = 0.65;
            tf_range = 20000;
            tf_subtype = "digital_lr";
        };

        class IDA_Clone_ScoutPack;
        class aux187_backpack_scoutPack : IDA_Clone_ScoutPack
        {
            author = "Tim";
            scope = 2;
            scopeArsenal = 2;

            displayName = "[187th] Clone Scout Pack";

            class XtdGearInfo {
                model = "aux187_MiscBags_Model";
                Bags = "ScoutBag";
            };

            maximumLoad = "150";
            mass = 50;
        };

        class JLTS_Clone_Belt_Bag;
        class aux187_backpack_beltBags : JLTS_Clone_Belt_Bag
        {
            author = "Tim";
            scope = 2;
            scopeArsenal = 2;

            displayName = "[187th] Clone Belt Bags";

            class XtdGearInfo {
                model = "aux187_MiscBags_Model";
                Bags = "BeltBag";
            };

            maximumLoad = "150";
            mass = 50;
        };

        class IDA_Imperial_Backpack_Straps;
        class aux187_backpack_patrol : IDA_Imperial_Backpack_Straps
        {
            author = "Tim";
            scope = 2;
            scopeArsenal = 2;

            displayName = "[187th] Clone Patrol Pack";

            class XtdGearInfo {
                model = "aux187_MiscBags_Model";
                Bags = "PatrolPack";
            };

            maximumLoad = "250";
            mass = 50;
        };

        

    
