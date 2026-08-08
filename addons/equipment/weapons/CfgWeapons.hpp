    /*
	---------------------------------------------------------------
	                      RIFLEMAN WEAPONS
	---------------------------------------------------------------
	*/
        class 3AS_CowsSlot_DC15C;
        class 3AS_UnderBarrelSlot_DC15L;
        class PointerSlot;
        class Single;
        class FullAuto;
        class BaseSoundModeType;
        class Auto;


        class IDA_DC15S;
        class aux187_DC15S : IDA_DC15S
        {
            author = "Tim";
            scope = 2;
            scopeArsenal = 2;

            baseWeapon = "aux187_DC15S";
            displayName = "[187th] DC-15S Blaster Carbine";

            
            class XtdGearInfo {
                model = "aux187_PrimaryWeapon_Model";
                Rifleman = "DC15S";
            };

            canShootInWater = 1;
            drySound[] = {"\Indecisive_Armoury_Sounds\weapon_dry.ogg",5,1,10};
            recoil = "IDA_recoil_BlasterCarbine";
            recoilProne = "assaultRifleBase";
            reloadAction = "GestureReload_IDA_Reload_Blaster";

            magazines[] = 
            {
                "aux187_Mag_80Rnd_DC15S",
                "aux187_Mag_40Rnd_DC15S"
            };

            modes[] = { "Single","FullAuto" };

            class WeaponSlotsInfo
            {
                class PointerSlot : PointerSlot
                {
                    access = 1;
                    compatibleItems[] = {"acc_flashlight","ACE_SPIR","OPTRE_M12_Laser","acc_pointer_IR","ACE_acc_pointer_green","ACE_DBAL_A3_Red","ACE_DBAL_A3_Green"};
                    displayName = "Pointer Slot";
                    iconPicture = "\A3\Weapons_F\Data\UI\attachment_side.paa";
                    iconPinpoint = "Center";
                    iconPosition[] = {0,0};
                    iconScale = 0;
                    linkProxy = "\A3\data_f\proxies\weapon_slots\SIDE";
                    scope = 0;
                };
            };

            class Single : Single
            {
                dispersion = 0.0010;

                recoil = "recoil_single_primary_3outof10";
                recoilProne = "recoil_single_primary_prone_3outof10";

                sounds[] = { "StandardSound" };

                class StandardSound : BaseSoundModeType
                {
                    begin1[] = {"\Indecisive_Armoury_Sounds\Republic\DC15S.ogg",1.25,1,1800};
                    begin2[] = {"\Indecisive_Armoury_Sounds\Republic\DC15S.ogg",1.25,1.025,1800};
                    begin3[] = {"\Indecisive_Armoury_Sounds\Republic\DC15S.ogg",1.25,0.95,1800};
                    begin4[] = {"\Indecisive_Armoury_Sounds\Republic\DC15S.ogg",1.25,1.05,1800};
                    begin5[] = {"\Indecisive_Armoury_Sounds\Republic\DC15S.ogg",1.25,0.9,1800};
                    beginwater1[] = {"\Indecisive_Armoury_Sounds\Republic\DC15S.ogg",1,1,400};
                    closure1[] = {};
                    closure2[] = {};
                    soundBegin[] = {"begin1",0.2,"begin2",0.2,"begin3",0.2,"begin4",0.2,"begin5",0.2};
                    soundBeginWater[] = {"beginwater1",1};
                    soundClosure[] = {};
                    weaponSoundEffect = "";
                };
            };

            class FullAuto : FullAuto
            {
                autoFire = 1;
                dispersion = 0.00133;
                reloadTime = 0.085;

                recoil = "recoil_auto_primary_3outof10";
                recoilProne = "recoil_auto_primary_prone_3outof10";

                sounds[] = { "StandardSound" };

                class StandardSound : BaseSoundModeType
                {
                    begin1[] = {"\Indecisive_Armoury_Sounds\Republic\DC15S.ogg",1.25,1,1800};
                    begin2[] = {"\Indecisive_Armoury_Sounds\Republic\DC15S.ogg",1.25,1.025,1800};
                    begin3[] = {"\Indecisive_Armoury_Sounds\Republic\DC15S.ogg",1.25,0.95,1800};
                    begin4[] = {"\Indecisive_Armoury_Sounds\Republic\DC15S.ogg",1.25,1.05,1800};
                    begin5[] = {"\Indecisive_Armoury_Sounds\Republic\DC15S.ogg",1.25,0.9,1800};
                    beginwater1[] = {"\Indecisive_Armoury_Sounds\Republic\DC15S.ogg",1,1,400};
                    closure1[] = {};
                    closure2[] = {};
                    soundBegin[] = {"begin1",0.2,"begin2",0.2,"begin3",0.2,"begin4",0.2,"begin5",0.2};
                    soundBeginWater[] = {"beginwater1",1};
                    soundClosure[] = {};
                    weaponSoundEffect = "";
                };
            };
        };

        class 3AS_DC15C_F;
        class aux187_DC15C : 3AS_DC15C_F
        {
            author = "Tim";
            scope = 2;
            scopeArsenal = 2;

            baseWeapon = "aux187_DC15C";
            displayName = "[187th] DC-15C Blaster Carbine";
            
            class XtdGearInfo {
                model = "aux187_PrimaryWeapon_Model";
                Rifleman = "DC15C";
            };

            class WeaponSlotsInfo
            {
                allowedSlots[] = {901};
                mass = 70;
                class CowsSlot : 3AS_CowsSlot_DC15C
                {
                    linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
                    displayName = "Optics Slot";
                    iconPicture = "\A3\Weapons_F\Data\UI\attachment_top.paa";

                    class CompatibleItems
                    {
                        aux187_optic_LPVO = 1;
                        aux187_optic_Reflex = 1;
                        aux187_optic_brScope = 1;
                        aux187_optic_holo = 1;
                    };
                };

                class PointerSlot : PointerSlot
                {
                    access = 1;
                    compatibleItems[] = {"acc_flashlight","ACE_SPIR","OPTRE_M12_Laser","acc_pointer_IR","ACE_acc_pointer_green","ACE_DBAL_A3_Red","ACE_DBAL_A3_Green"};
                    displayName = "Pointer Slot";
                    iconPicture = "\A3\Weapons_F\Data\UI\attachment_side.paa";
                    iconPinpoint = "Center";
                    iconPosition[] = {0,0};
                    iconScale = 0;
                    linkProxy = "\A3\data_f\proxies\weapon_slots\SIDE";
                    scope = 0;
                };
            };

            canShootInWater = 1;
            drySound[] = {"\Indecisive_Armoury_Sounds\weapon_dry.ogg",5,1,10};
            recoil = "IDA_recoil_BlasterCarbine";
            recoilProne = "assaultRifleBase";
            reloadAction = "GestureReload_IDA_Reload_Blaster";

            magazines[] = 
            {
                "aux187_Mag_45Rnd_DC15C"
            };

            modes[] = { "Single","FullAuto" };

            class TAS_Stun_F {};

            class Single : Single
            {
                dispersion = 0.00102;

                recoil = "recoil_single_primary_3outof10";
                recoilProne = "recoil_single_primary_prone_3outof10";

                sounds[] = { "StandardSound" };

                class StandardSound : BaseSoundModeType
                {
                    begin1[] = {"\Indecisive_Armoury_Sounds\Republic\DC15S.ogg",1.25,1,1800};
                    begin2[] = {"\Indecisive_Armoury_Sounds\Republic\DC15S.ogg",1.25,1.025,1800};
                    begin3[] = {"\Indecisive_Armoury_Sounds\Republic\DC15S.ogg",1.25,0.95,1800};
                    begin4[] = {"\Indecisive_Armoury_Sounds\Republic\DC15S.ogg",1.25,1.05,1800};
                    begin5[] = {"\Indecisive_Armoury_Sounds\Republic\DC15S.ogg",1.25,0.9,1800};
                    beginwater1[] = {"\Indecisive_Armoury_Sounds\Republic\DC15S.ogg",1,1,400};
                    closure1[] = {};
                    closure2[] = {};
                    soundBegin[] = {"begin1",0.2,"begin2",0.2,"begin3",0.2,"begin4",0.2,"begin5",0.2};
                    soundBeginWater[] = {"beginwater1",1};
                    soundClosure[] = {};
                    weaponSoundEffect = "";
                };
            };

            class FullAuto : FullAuto
            {
                autoFire = 1;
                dispersion = 0.00098;
                reloadTime = 0.12;

                recoil = "recoil_auto_primary_3outof10";
                recoilProne = "recoil_auto_primary_prone_3outof10";

                sounds[] = { "StandardSound" };

                class StandardSound : BaseSoundModeType
                {
                    begin1[] = {"\Indecisive_Armoury_Sounds\Republic\DC15S.ogg",1.25,1,1800};
                    begin2[] = {"\Indecisive_Armoury_Sounds\Republic\DC15S.ogg",1.25,1.025,1800};
                    begin3[] = {"\Indecisive_Armoury_Sounds\Republic\DC15S.ogg",1.25,0.95,1800};
                    begin4[] = {"\Indecisive_Armoury_Sounds\Republic\DC15S.ogg",1.25,1.05,1800};
                    begin5[] = {"\Indecisive_Armoury_Sounds\Republic\DC15S.ogg",1.25,0.9,1800};
                    beginwater1[] = {"\Indecisive_Armoury_Sounds\Republic\DC15S.ogg",1,1,400};
                    closure1[] = {};
                    closure2[] = {};
                    soundBegin[] = {"begin1",0.2,"begin2",0.2,"begin3",0.2,"begin4",0.2,"begin5",0.2};
                    soundBeginWater[] = {"beginwater1",1};
                    soundClosure[] = {};
                    weaponSoundEffect = "";
                };
            };
        };

        class 3AS_DC15A_F;
        class aux187_DC15A : 3AS_DC15A_F
        {
            author = "Tim";
            scope = 2;
            scopeArsenal = 2;

            baseWeapon = "aux187_DC15A";
            displayName = "[187th] DC-15A Blaster Rifle";
            
            class XtdGearInfo {
                model = "aux187_PrimaryWeapon_Model";
                Rifleman = "DC15A";
            };

            class WeaponSlotsInfo
            {
                allowedSlots[] = {901};
                mass = 70;
                class CowsSlot : 3AS_CowsSlot_DC15C
                {
                    linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
                    displayName = "Optics Slot";
                    iconPicture = "\A3\Weapons_F\Data\UI\attachment_top.paa";

                    class CompatibleItems
                    {
                        aux187_optic_LPVO = 1;
                        aux187_optic_Reflex = 1;
                        aux187_optic_brScope = 1;
                        aux187_optic_holo = 1;
                    };
                };

                class PointerSlot : PointerSlot
                {
                    access = 1;
                    compatibleItems[] = {"acc_flashlight","ACE_SPIR","OPTRE_M12_Laser","acc_pointer_IR","ACE_acc_pointer_green","ACE_DBAL_A3_Red","ACE_DBAL_A3_Green"};
                    displayName = "Pointer Slot";
                    iconPicture = "\A3\Weapons_F\Data\UI\attachment_side.paa";
                    iconPinpoint = "Center";
                    iconPosition[] = {0,0};
                    iconScale = 0;
                    linkProxy = "\A3\data_f\proxies\weapon_slots\SIDE";
                    scope = 0;
                };
            };

            canShootInWater = 1;
            drySound[] = {"\Indecisive_Armoury_Sounds\weapon_dry.ogg",5,1,10};
            recoil = "IDA_recoil_BlasterCarbine";
            recoilProne = "assaultRifleBase";
            reloadAction = "GestureReload_IDA_Reload_Blaster";

            magazines[] = 
            {
                "aux187_Mag_45Rnd_DC15A"
            };

            modes[] = { "Single","FullAuto" };

            class TAS_Stun_F {};

            class Single : Single
            {
                dispersion = 0.00066;

                recoil = "recoil_single_primary_3outof10";
                recoilProne = "recoil_single_primary_prone_3outof10";

                sounds[] = { "StandardSound" };

                class StandardSound : BaseSoundModeType
                {
                    begin1[] = {"\Indecisive_Armoury_Sounds\Republic\DC15S.ogg",1.25,1,1800};
                    begin2[] = {"\Indecisive_Armoury_Sounds\Republic\DC15S.ogg",1.25,1.025,1800};
                    begin3[] = {"\Indecisive_Armoury_Sounds\Republic\DC15S.ogg",1.25,0.95,1800};
                    begin4[] = {"\Indecisive_Armoury_Sounds\Republic\DC15S.ogg",1.25,1.05,1800};
                    begin5[] = {"\Indecisive_Armoury_Sounds\Republic\DC15S.ogg",1.25,0.9,1800};
                    beginwater1[] = {"\Indecisive_Armoury_Sounds\Republic\DC15S.ogg",1,1,400};
                    closure1[] = {};
                    closure2[] = {};
                    soundBegin[] = {"begin1",0.2,"begin2",0.2,"begin3",0.2,"begin4",0.2,"begin5",0.2};
                    soundBeginWater[] = {"beginwater1",1};
                    soundClosure[] = {};
                    weaponSoundEffect = "";
                };
            };

            class FullAuto : FullAuto
            {
                autoFire = 1;
                dispersion = 0.00088;
                reloadTime = 0.133;

                recoil = "recoil_auto_primary_3outof10";
                recoilProne = "recoil_auto_primary_prone_3outof10";

                sounds[] = { "StandardSound" };

                class StandardSound : BaseSoundModeType
                {
                    begin1[] = {"\Indecisive_Armoury_Sounds\Republic\DC15S.ogg",1.25,1,1800};
                    begin2[] = {"\Indecisive_Armoury_Sounds\Republic\DC15S.ogg",1.25,1.025,1800};
                    begin3[] = {"\Indecisive_Armoury_Sounds\Republic\DC15S.ogg",1.25,0.95,1800};
                    begin4[] = {"\Indecisive_Armoury_Sounds\Republic\DC15S.ogg",1.25,1.05,1800};
                    begin5[] = {"\Indecisive_Armoury_Sounds\Republic\DC15S.ogg",1.25,0.9,1800};
                    beginwater1[] = {"\Indecisive_Armoury_Sounds\Republic\DC15S.ogg",1,1,400};
                    closure1[] = {};
                    closure2[] = {};
                    soundBegin[] = {"begin1",0.2,"begin2",0.2,"begin3",0.2,"begin4",0.2,"begin5",0.2};
                    soundBeginWater[] = {"beginwater1",1};
                    soundClosure[] = {};
                    weaponSoundEffect = "";
                };
            };
        };

    /*
	---------------------------------------------------------------
	                      AUTORIFLEMAN WEAPONS
	---------------------------------------------------------------
	*/

        class 3AS_DC15L_F;
        class aux187_DC15L : 3AS_DC15L_F
        {
            author = "Tim";
            scope = 2;
            scopeArsenal = 2;

            baseWeapon = "aux187_DC15L";
            displayName = "[187th] DC-15L Heavy Blaster Rifle";
            
            class XtdGearInfo {
                model = "aux187_PrimaryWeapon_Model";
                Autorifleman = "DC15L";
            };

            class WeaponSlotsInfo
            {
                allowedSlots[] = {901};
                mass = 70;
                class CowsSlot : 3AS_CowsSlot_DC15C
                {
                    linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
                    displayName = "Optics Slot";
                    iconPicture = "\A3\Weapons_F\Data\UI\attachment_top.paa";

                    class CompatibleItems
                    {
                        aux187_optic_LPVO = 1;
                        aux187_optic_Reflex = 1;
                        aux187_optic_brScope = 1;
                        aux187_optic_holo = 1;
                    };
                };

                class PointerSlot : PointerSlot
                {
                    access = 1;
                    compatibleItems[] = {"acc_flashlight","ACE_SPIR","OPTRE_M12_Laser","acc_pointer_IR","ACE_acc_pointer_green","ACE_DBAL_A3_Red","ACE_DBAL_A3_Green"};
                    displayName = "Pointer Slot";
                    iconPicture = "\A3\Weapons_F\Data\UI\attachment_side.paa";
                    iconPinpoint = "Center";
                    iconPosition[] = {0,0};
                    iconScale = 0;
                    linkProxy = "\A3\data_f\proxies\weapon_slots\SIDE";
                    scope = 0;
                };

                class UnderBarrelSlot : 3AS_UnderBarrelSlot_DC15L
                {
                    access = 1;
                    iconPicture = "\A3\Weapons_F_Mark\Data\UI\attachment_under.paa";
                    iconPinpoint = "Bottom";
                    iconPosition[] = {0.24,0.7};
                    iconScale = 0.3;
                    linkProxy = "\A3\Data_F_Mark\Proxies\Weapon_Slots\UNDERBARREL";
                    scope = 0;
                    class compatibleItems
                    {
                        3AS_bipod_DC15L_F = 1;
                    };
                };
            };

            canShootInWater = 1;
            drySound[] = {"\Indecisive_Armoury_Sounds\weapon_dry.ogg",5,1,10};
            recoil = "IDA_recoil_RotaryBlaster";
            recoilProne = "assaultRifleBase";
            reloadAction = "GestureReload_IDA_Reload_Blaster";

            magazines[] = 
            {
                "aux187_Mag_75Rnd_DC15L"
            };

            modes[] = { "LessFullAuto","FullAuto","close","short","medium","far_optic1","far_optic2" };

            class FullAuto : FullAuto
            {
                autoFire = 1;
                dispersion = 0.00088;
                reloadTime = 0.0923;

                recoil = "recoil_auto_primary_3outof10";
                recoilProne = "recoil_auto_primary_prone_3outof10";

                sounds[] = { "StandardSound" };

                class StandardSound : BaseSoundModeType
                {
                    begin1[] = {"\Indecisive_Armoury_Sounds\Republic\DC15S.ogg",1.25,1,1800};
                    begin2[] = {"\Indecisive_Armoury_Sounds\Republic\DC15S.ogg",1.25,1.025,1800};
                    begin3[] = {"\Indecisive_Armoury_Sounds\Republic\DC15S.ogg",1.25,0.95,1800};
                    begin4[] = {"\Indecisive_Armoury_Sounds\Republic\DC15S.ogg",1.25,1.05,1800};
                    begin5[] = {"\Indecisive_Armoury_Sounds\Republic\DC15S.ogg",1.25,0.9,1800};
                    beginwater1[] = {"\Indecisive_Armoury_Sounds\Republic\DC15S.ogg",1,1,400};
                    closure1[] = {};
                    closure2[] = {};
                    soundBegin[] = {"begin1",0.2,"begin2",0.2,"begin3",0.2,"begin4",0.2,"begin5",0.2};
                    soundBeginWater[] = {"beginwater1",1};
                    soundClosure[] = {};
                    weaponSoundEffect = "";
                };
            };

            class LessFullAuto : FullAuto
            {
                autoFire = 1;
                dispersion = 0.00088;
                reloadTime = 0.133;

                displayName = "Slow Full";
                textureType = "burst";

                recoil = "recoil_auto_primary_3outof10";
                recoilProne = "recoil_auto_primary_prone_3outof10";

                sounds[] = { "StandardSound" };

                class StandardSound : BaseSoundModeType
                {
                    begin1[] = {"\Indecisive_Armoury_Sounds\Republic\DC15S.ogg",1.25,1,1800};
                    begin2[] = {"\Indecisive_Armoury_Sounds\Republic\DC15S.ogg",1.25,1.025,1800};
                    begin3[] = {"\Indecisive_Armoury_Sounds\Republic\DC15S.ogg",1.25,0.95,1800};
                    begin4[] = {"\Indecisive_Armoury_Sounds\Republic\DC15S.ogg",1.25,1.05,1800};
                    begin5[] = {"\Indecisive_Armoury_Sounds\Republic\DC15S.ogg",1.25,0.9,1800};
                    beginwater1[] = {"\Indecisive_Armoury_Sounds\Republic\DC15S.ogg",1,1,400};
                    closure1[] = {};
                    closure2[] = {};
                    soundBegin[] = {"begin1",0.2,"begin2",0.2,"begin3",0.2,"begin4",0.2,"begin5",0.2};
                    soundBeginWater[] = {"beginwater1",1};
                    soundClosure[] = {};
                    weaponSoundEffect = "";
                };
            };   
        };

        class IDA_Z6;
        class aux187_Z6 : IDA_Z6
        {
            author = "Tim";
            scope = 2;
            scopeArsenal = 2;

            baseWeapon = "aux187_z6";
            displayName = "[187th] Z6 Rotary Cannon";
            
            class XtdGearInfo {
                model = "aux187_PrimaryWeapon_Model";
                Autorifleman = "Z6";
            };

            canShootInWater = 1;
            drySound[] = {"\Indecisive_Armoury_Sounds\weapon_dry.ogg",5,1,10};
            recoil = "IDA_recoil_RotaryBlaster";
            recoilProne = "assaultRifleBase";
            reloadAction = "GestureReload_IDA_Reload_Blaster";

            magazines[] = 
            {
                "aux187_Mag_300Rnd_Z6"
            };

            modes[] = { "FullAuto" };

            class Auto : Auto
            {
                autoFire = 1;
                dispersion = 0.00208;
                reloadTime = 0.07;

                recoil = "recoil_auto_primary_3outof10";
                recoilProne = "recoil_auto_primary_prone_3outof10";

                sounds[] = { "StandardSound" };
            };
        };

    /*
	---------------------------------------------------------------
	                      GRENADIER WEAPONS
	---------------------------------------------------------------
	*/

        class IDA_DC15S_UGL;
        class aux187_DC15S_GL : IDA_DC15S_UGL
        {
            author = "Tim";
            scope = 2;
            scopeArsenal = 2;

            baseWeapon = "aux187_DC15S_GL";
            displayName = "[187th] DC-15S Blaster Carbine (UGL)";
            
            class XtdGearInfo {
                model = "aux187_PrimaryWeapon_Model";
                Grenadier = "DC15S";
            };

            canShootInWater = 1;
            drySound[] = {"\Indecisive_Armoury_Sounds\weapon_dry.ogg",5,1,10};
            recoil = "IDA_recoil_BlasterCarbine";
            recoilProne = "assaultRifleBase";
            reloadAction = "GestureReload_IDA_Reload_Blaster";

            magazines[] = 
            {
                "aux187_Mag_80Rnd_DC15S",
                "aux187_Mag_40Rnd_DC15S"
            };

            modes[] = { "Single","FullAuto" };

            class TAS_Stun_F {};

            class WeaponSlotsInfo
            {
                class PointerSlot : PointerSlot
                {
                    access = 1;
                    compatibleItems[] = {"acc_flashlight","ACE_SPIR","OPTRE_M12_Laser","acc_pointer_IR","ACE_acc_pointer_green","ACE_DBAL_A3_Red","ACE_DBAL_A3_Green"};
                    displayName = "Pointer Slot";
                    iconPicture = "\A3\Weapons_F\Data\UI\attachment_side.paa";
                    iconPinpoint = "Center";
                    iconPosition[] = {0,0};
                    iconScale = 0;
                    linkProxy = "\A3\data_f\proxies\weapon_slots\SIDE";
                    scope = 0;
                };
            };

            class Single : Single
            {
                dispersion = 0.0010;

                recoil = "recoil_single_primary_3outof10";
                recoilProne = "recoil_single_primary_prone_3outof10";

                sounds[] = { "StandardSound" };

                class StandardSound : BaseSoundModeType
                {
                    begin1[] = {"\Indecisive_Armoury_Sounds\Republic\DC15S.ogg",1.25,1,1800};
                    begin2[] = {"\Indecisive_Armoury_Sounds\Republic\DC15S.ogg",1.25,1.025,1800};
                    begin3[] = {"\Indecisive_Armoury_Sounds\Republic\DC15S.ogg",1.25,0.95,1800};
                    begin4[] = {"\Indecisive_Armoury_Sounds\Republic\DC15S.ogg",1.25,1.05,1800};
                    begin5[] = {"\Indecisive_Armoury_Sounds\Republic\DC15S.ogg",1.25,0.9,1800};
                    beginwater1[] = {"\Indecisive_Armoury_Sounds\Republic\DC15S.ogg",1,1,400};
                    closure1[] = {};
                    closure2[] = {};
                    soundBegin[] = {"begin1",0.2,"begin2",0.2,"begin3",0.2,"begin4",0.2,"begin5",0.2};
                    soundBeginWater[] = {"beginwater1",1};
                    soundClosure[] = {};
                    weaponSoundEffect = "";
                };
            };

            class FullAuto : FullAuto
            {
                autoFire = 1;
                dispersion = 0.00133;
                reloadTime = 0.085;

                recoil = "recoil_auto_primary_3outof10";
                recoilProne = "recoil_auto_primary_prone_3outof10";

                sounds[] = { "StandardSound" };

                class StandardSound : BaseSoundModeType
                {
                    begin1[] = {"\Indecisive_Armoury_Sounds\Republic\DC15S.ogg",1.25,1,1800};
                    begin2[] = {"\Indecisive_Armoury_Sounds\Republic\DC15S.ogg",1.25,1.025,1800};
                    begin3[] = {"\Indecisive_Armoury_Sounds\Republic\DC15S.ogg",1.25,0.95,1800};
                    begin4[] = {"\Indecisive_Armoury_Sounds\Republic\DC15S.ogg",1.25,1.05,1800};
                    begin5[] = {"\Indecisive_Armoury_Sounds\Republic\DC15S.ogg",1.25,0.9,1800};
                    beginwater1[] = {"\Indecisive_Armoury_Sounds\Republic\DC15S.ogg",1,1,400};
                    closure1[] = {};
                    closure2[] = {};
                    soundBegin[] = {"begin1",0.2,"begin2",0.2,"begin3",0.2,"begin4",0.2,"begin5",0.2};
                    soundBeginWater[] = {"beginwater1",1};
                    soundClosure[] = {};
                    weaponSoundEffect = "";
                };
            };
        };

        class 3AS_DC15C_GL;
        class aux187_DC15C_GL : 3AS_DC15C_GL
        {
            author = "Tim";
            scope = 2;
            scopeArsenal = 2;
            baseWeapon = "aux187_DC15C_GL";
            displayName = "[187th] DC-15C Blaster Carbine (UGL)";
            
            class XtdGearInfo {
                model = "aux187_PrimaryWeapon_Model";
                Grenadier = "DC15C";
            };

            class WeaponSlotsInfo
            {
                allowedSlots[] = {901};
                mass = 70;
                class CowsSlot : 3AS_CowsSlot_DC15C
                {
                    linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
                    displayName = "Optics Slot";
                    iconPicture = "\A3\Weapons_F\Data\UI\attachment_top.paa";

                    class CompatibleItems
                    {
                        aux187_optic_LPVO = 1;
                        aux187_optic_Reflex = 1;
                        aux187_optic_brScope = 1;
                        aux187_optic_holo = 1;
                    };
                };

                class PointerSlot : PointerSlot
                {
                    access = 1;
                    compatibleItems[] = {"acc_flashlight","ACE_SPIR","OPTRE_M12_Laser","acc_pointer_IR","ACE_acc_pointer_green","ACE_DBAL_A3_Red","ACE_DBAL_A3_Green"};
                    displayName = "Pointer Slot";
                    iconPicture = "\A3\Weapons_F\Data\UI\attachment_side.paa";
                    iconPinpoint = "Center";
                    iconPosition[] = {0,0};
                    iconScale = 0;
                    linkProxy = "\A3\data_f\proxies\weapon_slots\SIDE";
                    scope = 0;
                };
            };

            canShootInWater = 1;
            drySound[] = {"\Indecisive_Armoury_Sounds\weapon_dry.ogg",5,1,10};
            recoil = "IDA_recoil_BlasterCarbine";
            recoilProne = "assaultRifleBase";
            reloadAction = "GestureReload_IDA_Reload_Blaster";

            magazines[] = 
            {
                "aux187_Mag_45Rnd_DC15C"
            };

            modes[] = { "Single","FullAuto" };

            class TAS_Stun_F {};

            class Single : Single
            {
                dispersion = 0.00102;

                recoil = "recoil_single_primary_3outof10";
                recoilProne = "recoil_single_primary_prone_3outof10";

                sounds[] = { "StandardSound" };

                class StandardSound : BaseSoundModeType
                {
                    begin1[] = {"\Indecisive_Armoury_Sounds\Republic\DC15S.ogg",1.25,1,1800};
                    begin2[] = {"\Indecisive_Armoury_Sounds\Republic\DC15S.ogg",1.25,1.025,1800};
                    begin3[] = {"\Indecisive_Armoury_Sounds\Republic\DC15S.ogg",1.25,0.95,1800};
                    begin4[] = {"\Indecisive_Armoury_Sounds\Republic\DC15S.ogg",1.25,1.05,1800};
                    begin5[] = {"\Indecisive_Armoury_Sounds\Republic\DC15S.ogg",1.25,0.9,1800};
                    beginwater1[] = {"\Indecisive_Armoury_Sounds\Republic\DC15S.ogg",1,1,400};
                    closure1[] = {};
                    closure2[] = {};
                    soundBegin[] = {"begin1",0.2,"begin2",0.2,"begin3",0.2,"begin4",0.2,"begin5",0.2};
                    soundBeginWater[] = {"beginwater1",1};
                    soundClosure[] = {};
                    weaponSoundEffect = "";
                };
            };

            class FullAuto : FullAuto
            {
                autoFire = 1;
                dispersion = 0.00098;
                reloadTime = 0.12;

                recoil = "recoil_auto_primary_3outof10";
                recoilProne = "recoil_auto_primary_prone_3outof10";

                sounds[] = { "StandardSound" };

                class StandardSound : BaseSoundModeType
                {
                    begin1[] = {"\Indecisive_Armoury_Sounds\Republic\DC15S.ogg",1.25,1,1800};
                    begin2[] = {"\Indecisive_Armoury_Sounds\Republic\DC15S.ogg",1.25,1.025,1800};
                    begin3[] = {"\Indecisive_Armoury_Sounds\Republic\DC15S.ogg",1.25,0.95,1800};
                    begin4[] = {"\Indecisive_Armoury_Sounds\Republic\DC15S.ogg",1.25,1.05,1800};
                    begin5[] = {"\Indecisive_Armoury_Sounds\Republic\DC15S.ogg",1.25,0.9,1800};
                    beginwater1[] = {"\Indecisive_Armoury_Sounds\Republic\DC15S.ogg",1,1,400};
                    closure1[] = {};
                    closure2[] = {};
                    soundBegin[] = {"begin1",0.2,"begin2",0.2,"begin3",0.2,"begin4",0.2,"begin5",0.2};
                    soundBeginWater[] = {"beginwater1",1};
                    soundClosure[] = {};
                    weaponSoundEffect = "";
                };
            };
        };

        class 3AS_DC15A_GL;
        class aux187_DC15A_GL : 3AS_DC15A_GL
        {
            author = "Tim";
            scope = 2;
            scopeArsenal = 2;

            baseWeapon = "aux187_DC15A_GL";
            displayName = "[187th] DC-15A Blaster Rifle (UGL)";
            
            class XtdGearInfo {
                model = "aux187_PrimaryWeapon_Model";
                Grenadier = "DC15A";
            };

            class WeaponSlotsInfo
            {
                allowedSlots[] = {901};
                mass = 70;
                class CowsSlot : 3AS_CowsSlot_DC15C
                {
                    linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
                    displayName = "Optics Slot";
                    iconPicture = "\A3\Weapons_F\Data\UI\attachment_top.paa";

                    class CompatibleItems
                    {
                        aux187_optic_LPVO = 1;
                        aux187_optic_Reflex = 1;
                        aux187_optic_brScope = 1;
                        aux187_optic_holo = 1;
                    };
                };

                class PointerSlot : PointerSlot
                {
                    access = 1;
                    compatibleItems[] = {"acc_flashlight","ACE_SPIR","OPTRE_M12_Laser","acc_pointer_IR","ACE_acc_pointer_green","ACE_DBAL_A3_Red","ACE_DBAL_A3_Green"};
                    displayName = "Pointer Slot";
                    iconPicture = "\A3\Weapons_F\Data\UI\attachment_side.paa";
                    iconPinpoint = "Center";
                    iconPosition[] = {0,0};
                    iconScale = 0;
                    linkProxy = "\A3\data_f\proxies\weapon_slots\SIDE";
                    scope = 0;
                };
            };

            canShootInWater = 1;
            drySound[] = {"\Indecisive_Armoury_Sounds\weapon_dry.ogg",5,1,10};
            recoil = "IDA_recoil_BlasterCarbine";
            recoilProne = "assaultRifleBase";
            reloadAction = "GestureReload_IDA_Reload_Blaster";

            magazines[] = 
            {
                "aux187_Mag_45Rnd_DC15A"
            };

            modes[] = { "Single" };

            class TAS_Stun_F {};

            class Single : Single
            {
                dispersion = 0.0066;

                recoil = "recoil_single_primary_3outof10";
                recoilProne = "recoil_single_primary_prone_3outof10";

                sounds[] = { "StandardSound" };

                class StandardSound : BaseSoundModeType
                {
                    begin1[] = {"\Indecisive_Armoury_Sounds\Republic\DC15S.ogg",1.25,1,1800};
                    begin2[] = {"\Indecisive_Armoury_Sounds\Republic\DC15S.ogg",1.25,1.025,1800};
                    begin3[] = {"\Indecisive_Armoury_Sounds\Republic\DC15S.ogg",1.25,0.95,1800};
                    begin4[] = {"\Indecisive_Armoury_Sounds\Republic\DC15S.ogg",1.25,1.05,1800};
                    begin5[] = {"\Indecisive_Armoury_Sounds\Republic\DC15S.ogg",1.25,0.9,1800};
                    beginwater1[] = {"\Indecisive_Armoury_Sounds\Republic\DC15S.ogg",1,1,400};
                    closure1[] = {};
                    closure2[] = {};
                    soundBegin[] = {"begin1",0.2,"begin2",0.2,"begin3",0.2,"begin4",0.2,"begin5",0.2};
                    soundBeginWater[] = {"beginwater1",1};
                    soundClosure[] = {};
                    weaponSoundEffect = "";
                };
            };
        };

    /*
	---------------------------------------------------------------
	                      MARKSMAN WEAPONS
	---------------------------------------------------------------
	*/

        class 3AS_Valken38X_F;
        class aux187_Valken38X : 3AS_Valken38X_F
        {
            author = "Tim";
            scope = 2;
            scopeArsenal = 2;

            baseWeapon = "aux187_Valken38X";
            displayName = "[187th] Valken-38X";
            
            class XtdGearInfo {
                model = "aux187_PrimaryWeapon_Model";
                Marksman = "Valken";
            };
        };

        class ls_weapon_firepuncher;
        class aux187_Firepuncher : ls_weapon_firepuncher
        {
            author = "Tim";
            scope = 2;
            scopeArsenal = 2;

            baseWeapon = "aux187_Firepuncher";
            displayName = "[187th] 773-Firepuncher Sniper Blaster Rifle";
            
            class XtdGearInfo {
                model = "aux187_PrimaryWeapon_Model";
                Marksman = "Firepuncher";
            };
        };

    /*
	---------------------------------------------------------------
	                      ENGINEER WEAPONS
	---------------------------------------------------------------
	*/

        class 3AS_DP23_GL;
        class aux187_DP23 : 3AS_DP23_GL
        {
            author = "Tim";
            scope = 2;
            scopeArsenal = 2;

            baseWeapon = "aux187_DP23";
            displayName = "[187th] DP-23 Scatter Blaster";
            
            class XtdGearInfo {
                model = "aux187_PrimaryWeapon_Model";
                Engineer = "DP23";
            };

            class WeaponSlotsInfo
            {
                allowedSlots[] = {901};
                mass = 70;
                class CowsSlot : 3AS_CowsSlot_DC15C
                {
                    linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
                    displayName = "Optics Slot";
                    iconPicture = "\A3\Weapons_F\Data\UI\attachment_top.paa";

                    class CompatibleItems
                    {
                        aux187_optic_LPVO = 1;
                        aux187_optic_Reflex = 1;
                        aux187_optic_brScope = 1;
                    };
                };
            };
        };

    /*
	---------------------------------------------------------------
	                      RESTRICTED WEAPONS
	---------------------------------------------------------------
	*/

        class IDA_DC15S_Shield;
        class aux187_DC15S_Shield : IDA_DC15S_Shield
        {
            author = "Tim";
            scope = 2;
            scopeArsenal = 2;

            baseWeapon = "aux187_DC15S_Shield";
            displayName = "[187th] DC-15S Blaster Carbine (Shield)";
            
            class XtdGearInfo {
                model = "aux187_PrimaryWeapon_Model";
                Restricted = "Shield";
            };
        };

        class 3AS_DC15X_F;
        class aux187_DC15X : 3AS_DC15X_F
        {
            author = "Tim";
            scope = 2;
            scopeArsenal = 2;

            baseWeapon = "aux187_DC15X";
            displayName = "[187th] DC-15X Heavy Sniper Rifle";
            
            class XtdGearInfo {
                model = "aux187_PrimaryWeapon_Model";
                Restricted = "DC15X";
            };
        };

        class IDA_E10;
        class aux187_XLE7 : IDA_E10
        {
            author = "Tim";
            scope = 2;
            scopeArsenal = 2;

            baseWeapon = "aux187_XLE7";
            displayName = "[187th] XLE-7 Experimental Rifle";
            
            class XtdGearInfo {
                model = "aux187_PrimaryWeapon_Model";
                Restricted = "E7";
            };
        };

        class IDA_DLT19;
        class aux187_DLT16 : IDA_DLT19
        {
            author = "Tim";
            scope = 2;
            scopeArsenal = 2;

            baseWeapon = "aux187_DLT16";
            displayName = "[187th] DLT-16 Experimental Heavy Blaster";
            
            class XtdGearInfo {
                model = "aux187_PrimaryWeapon_Model";
                Restricted = "DLT16";
            };
        };

        class IDA_DC17M;
        class aux187_DC17M : IDA_DC17M
        {
            author = "Tim";
            scope = 2;
            scopeArsenal = 2;

            baseWeapon = "aux187_DC17M";
            displayName = "[187th] DC-17M Interchangeable Weapon System";
            
            class XtdGearInfo {
                model = "aux187_PrimaryWeapon_Model";
                Restricted = "DC17M";
            };
        };

        class 3AS_PLX1_F;
        class aux187_PLX1 : 3AS_PLX1_F
        {
            author = "Tim";
            scope = 2;
            scopeArsenal = 2;

            baseWeapon = "aux187_PLX1";
            displayName = "[187th] PLX-1 Guided Missile Launcher";
        };

    /*
	---------------------------------------------------------------
	                      ROCKET LAUNCHERS
	---------------------------------------------------------------
	*/

        class IDA_RPS6_Disposable;
        class aux187_RPS6_Disposable : IDA_RPS6_Disposable
        {
            author = "Tim";
            scope = 2;
            scopeArsenal = 2;

            baseWeapon = "aux187_RPS6_Disposable";
            displayName = "[187th] RPS-6 Disposable Launcher";
        };

        class JLTS_RPS6;
        class aux187_RPS6 : JLTS_RPS6
        {
            author = "Tim";
            scope = 2;
            scopeArsenal = 2;

            baseWeapon = "aux187_RPS6";
            displayName = "[187th] RPS-6 Rocket Launcher";
        };

    /*
	---------------------------------------------------------------
	                      SECONDARY WEAPONS
	---------------------------------------------------------------
	*/

        class IDA_DC17;
        class aux187_DC17 : IDA_DC17
        {
            author = "Tim";
            scope = 2;
            scopeArsenal = 2;

            baseWeapon = "aux187_DC17";
            displayName = "[187th] DC-17 Blaster Pistol";
            class XtdGearInfo {
                model = "aux187_SecondaryWeapon_Model";
                Pistols = "DC17";
            };
        };

        class IDA_DC15P;
        class aux187_DC15P : IDA_DC15P
        {
            author = "Tim";
            scope = 2;
            scopeArsenal = 2;

            baseWeapon = "aux187_DC15P";
            displayName = "[187th] DC-15P Blaster Pistol";
            class XtdGearInfo {
                model = "aux187_SecondaryWeapon_Model";
                Pistols = "DC15P";
            };
        };

        class IDA_Clone_Knife;
        class aux187_Knife : IDA_Clone_Knife
        {
            author = "Tim";
            scope = 2;
            scopeArsenal = 2;

            baseWeapon = "aux187_Knife";
            displayName = "[187th] Clone Knife";
            class XtdGearInfo {
                model = "aux187_SecondaryWeapon_Model";
                Melees = "Knife";
            };
        };

        class IDA_StunStick;
        class aux187_Baton : IDA_StunStick
        {
            author = "Tim";
            scope = 2;
            scopeArsenal = 2;

            baseWeapon = "aux187_Baton";
            displayName = "[187th] Stun Stick";
            class XtdGearInfo {
                model = "aux187_SecondaryWeapon_Model";
                Melees = "Baton";
            };
        };

    /*
	---------------------------------------------------------------
	                      ATTACHMENTS
	---------------------------------------------------------------
	*/


        class ItemInfo;

        class 3AS_optic_DC15C_F;
        class aux187_optic_Reflex : 3AS_optic_DC15C_F
        {
            author = "Tim";
            scope = 2;
            scopeArsenal = 2;

            displayName = "[187th] Reflex Optic";
        };

        class Optre_Evo_Sight_Riser;
        class aux187_optic_Holo : Optre_Evo_Sight_Riser
        {
            author = "Tim";
            scope = 2;
            scopeArsenal = 2;

            displayName = "[187th] Holo Optic";
        };

        class OPTRE_BR_Classic_Scope_SLS_Raised;
        class aux187_optic_brScope : OPTRE_BR_Classic_Scope_SLS_Raised
        {
            author = "Tim";
            scope = 2;
            scopeArsenal = 2;

            displayName = "[187th] Battle Rifle Optic";
        };

        class optic_mrco;
        class aux187_optic_LPVO : optic_mrco
        {
            author = "Tim";
            scope = 2;
            scopeArsenal = 2;

            displayName = "[187th] LPVO Optic";
            class ItemInfo : ItemInfo
            {
                weaponInfoType = "RscWeaponRangeZeroingFOV";
                mass = 16;
                class OpticsModes
                {
                    class MRCOcq
                    {
                        distanceZoomMax = 300;
                        distanceZoomMin = 300;
                        memoryPointCamera = "eye";
                        opticsDisablePeripherialVision = 0;
                        opticsFlare = 0;
                        opticsID = 1;
                        opticsPPEffects[] = {"Default"};
                        opticsZoomInit = 0.75;
                        opticsZoomMax = 1.25;
                        opticsZoomMin = 0.25;
                        useModelOptics = 0;
                        visionMode[] = {};
                    };

                    class MRCOscope
                    {
                        distanceZoomMax = 300;
                        distanceZoomMin = 300;
                        memoryPointCamera = "opticView";
                        opticsDisablePeripherialVision = 1;
                        opticsFlare = 1;
                        opticsID = 2;
                        opticsPPEffects[] = {"OpticsRadialBlur1","OpticsBlur1"};
                        opticsZoomInit = 0.125;
                        opticsZoomMax = 0.125;
                        opticsZoomMin = 0.125;
                        useModelOptics = 0;
                        visionMode[] = {};
                    };
                };
            };
        };
