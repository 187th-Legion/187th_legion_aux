    /*
	---------------------------------------------------------------
	                      RIFLEMAN WEAPONS
	---------------------------------------------------------------
	*/
        class 3AS_CowsSlot_DC15C;
        class 3AS_CowsSlot_DC15A;
        class 3AS_CowsSlot_DP23;
        class 3AS_CowsSlot_DC15L;
        class 3AS_UnderBarrelSlot_DC15L;
        class 3AS_UnderBarrelSlot_DC15X;
        class 3AS_UnderBarrelSlot_VK38X;
        class CowsSlot;
        class WeaponSlotsInfo;
        class UGL_F;
        class PointerSlot;
        class Mode_FullAuto;
        class Mode_SemiAuto;
        class Single : Mode_SemiAuto {};
        class FullAuto : Mode_FullAuto {};
        class Auto : Mode_FullAuto{};

        class BaseSoundModeType;
        
        class Default;
        class LauncherCore: Default {};
        class RifleCore: Default {};


        class Rifle: RifleCore {};
        class Rifle_Base_F: Rifle {};
        class Launcher: LauncherCore {};
        class Launcher_Base_F: Launcher {};
        

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
            reloadMagazineSound[] = {"\Indecisive_Armoury_Sounds\Blaster_reload_Vent.ogg",5,1,100};

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
        
        class 3AS_DC15C_Base_F: Rifle_Base_F {};
        class 3AS_DC15C_F: 3AS_DC15C_Base_F {};
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
            reloadMagazineSound[] = {"\Indecisive_Armoury_Sounds\Blaster_reload_Vent.ogg",5,1,100};

            magazines[] = 
            {
                "aux187_Mag_45Rnd_DC15C"
            };

            //modes[] = { "Single","FullAuto" };

            class TAS_Stun_F {};

            /*class Single : Mode_SemiAuto
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
            };*/
        };

        
        class 3AS_DC15A_Base_F: Rifle_Base_F {};
        class 3AS_DC15A_F: 3AS_DC15A_Base_F {};
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
                class CowsSlot : 3AS_CowsSlot_DC15A
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
            reloadMagazineSound[] = {"\Indecisive_Armoury_Sounds\Blaster_reload_Vent.ogg",5,1,100};

            magazines[] = 
            {
                "aux187_Mag_45Rnd_DC15A"
            };

            class TAS_Stun_F {};
        };

    /*
	---------------------------------------------------------------
	                      AUTORIFLEMAN WEAPONS
	---------------------------------------------------------------
	*/

        class 3AS_DC15L_Base_F: Rifle_Base_F {};
        class 3AS_DC15L_F: 3AS_DC15L_Base_F {};
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
                class CowsSlot : 3AS_CowsSlot_DC15L
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
            reloadMagazineSound[] = {"\Indecisive_Armoury_Sounds\Blaster_reload_Vent.ogg",5,1,100};

            magazines[] = 
            {
                "aux187_Mag_75Rnd_DC15L"
            };

            //modes[] = { "LessFullAuto","FullAuto","close","short","medium","far_optic1","far_optic2" };

            /*class FullAuto : FullAuto
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
            };*/ 
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
            reloadMagazineSound[] = {"\Indecisive_Armoury_Sounds\Blaster_reload_Vent.ogg",5,1,100};

            magazines[] = 
            {
                "aux187_Mag_300Rnd_Z6"
            };

            modes[] = { "FullAuto" };

            /*class Auto : Auto
            {
                autoFire = 1;
                dispersion = 0.00208;
                reloadTime = 0.07;

                recoil = "recoil_auto_primary_3outof10";
                recoilProne = "recoil_auto_primary_prone_3outof10";

                sounds[] = { "StandardSound", "BaseSoundModeType" };
                class StandardSound : BaseSoundModeType
                {
                    begin1[] = {"\Indecisive_Armoury_Sounds\Republic\Z6.ogg",1,1,1800};
                    begin2[] = {"\Indecisive_Armoury_Sounds\Republic\Z6.ogg",1,1.015,1800};
                    begin3[] = {"\Indecisive_Armoury_Sounds\Republic\Z6.ogg",1,0.985,1800};
                    begin4[] = {"\Indecisive_Armoury_Sounds\Republic\Z6.ogg",1,1.01,1800};
                    begin5[] = {"\Indecisive_Armoury_Sounds\Republic\Z6.ogg",1,0.995,1800};
                    beginwater1[] = {"\Indecisive_Armoury_Sounds\Republic\Z6.ogg",1,1,400};
                    closure1[] = {};
                    closure2[] = {};
                    soundBegin[] = {"begin1",0.2,"begin2",0.2,"begin3",0.2,"begin4",0.2,"begin5",0.2};
                    soundBeginWater[] = {"beginwater1",1};
                    soundClosure[] = {};
                    weaponSoundEffect = "";
                };
            };*/
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
            reloadMagazineSound[] = {"\Indecisive_Armoury_Sounds\Blaster_reload_Vent.ogg",5,1,100};

            magazines[] = 
            {
                "aux187_Mag_80Rnd_DC15S",
                "aux187_Mag_40Rnd_DC15S"
            };

            //modes[] = { "Single","FullAuto" };

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

            /*class Single : Single
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
            };*/
        };

        class 3AS_DC15C_GL: 3AS_DC15C_Base_F {};
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
            reloadMagazineSound[] = {"\Indecisive_Armoury_Sounds\Blaster_reload_Vent.ogg",5,1,100};

            magazines[] = 
            {
                "aux187_Mag_45Rnd_DC15C"
            };

            //modes[] = { "Single","FullAuto" };

            class TAS_Stun_F {};

            /*class Single : Mode_SemiAuto
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
            };*/

            class GL_3GL_F: UGL_F
            {
                displayName = "187th UGL";
                descriptionShort = "Pew Tube";
                useModelOptics = 0;
                useExternalOptic = 0;
                magazines[]=
                {
                    "3AS_3UGL_MK54_HE_shell",
                    "aux187_Mag_3Rnd_HE_Grenade",
                    "aux187_Mag_3Rnd_AP_Grenade"
                };
                magazineWell[]=
                {
                    "UGL_40x36",
                    "3UGL_40x36",
                    "3AS_3UGL_Magwell"
                };
                cameraDir = "OP_look";
                discreteDistance[]=
                {
                    50,
                    75,
                    100,
                    150,
                    200,
                    250,
                    300,
                    350,
                    400
                };
                discreteDistanceCameraPoint[]=
                {
                    "OP_eye_50",
                    "OP_eye_75",
                    "OP_eye_100",
                    "OP_eye_150",
                    "OP_eye_200",
                    "OP_eye_250",
                    "OP_eye_300",
                    "OP_eye_350",
                    "OP_eye_400"
                };
                discreteDistanceInitIndex = 1;
                reloadAction = "GestureReloadMXUGL";
                reloadMagazineSound[]=
                {
                    "A3\Sounds_F\arsenal\weapons\Rifles\MX\Mx_UGL_reload.ogg",
                    1,
                    1,
                    10
                };
            };
        };

        class 3AS_DC15A_GL: 3AS_DC15A_Base_F {};
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
                class CowsSlot : 3AS_CowsSlot_DC15A
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
            reloadMagazineSound[] = {"\Indecisive_Armoury_Sounds\Blaster_reload_Vent.ogg",5,1,100};

            magazines[] = 
            {
                "aux187_Mag_45Rnd_DC15A"
            };

            class TAS_Stun_F {};

            class GL_3GL_F: UGL_F
            {
                displayName = "187th UGL";
                descriptionShort = "Pew Tube";
                useModelOptics = 0;
                useExternalOptic = 0;
                magazines[]=
                {
                    "3AS_3UGL_MK54_HE_shell",
                    "aux187_Mag_3Rnd_HE_Grenade",
                    "aux187_Mag_3Rnd_AP_Grenade"
                };
                magazineWell[]=
                {
                    "UGL_40x36",
                    "3UGL_40x36",
                    "3AS_3UGL_Magwell"
                };
                cameraDir = "OP_look";
                discreteDistance[]=
                {
                    50,
                    75,
                    100,
                    150,
                    200,
                    250,
                    300,
                    350,
                    400
                };
                discreteDistanceCameraPoint[]=
                {
                    "OP_eye_50",
                    "OP_eye_75",
                    "OP_eye_100",
                    "OP_eye_150",
                    "OP_eye_200",
                    "OP_eye_250",
                    "OP_eye_300",
                    "OP_eye_350",
                    "OP_eye_400"
                };
                discreteDistanceInitIndex = 1;
                reloadAction = "GestureReloadMXUGL";
                reloadMagazineSound[]=
                {
                    "A3\Sounds_F\arsenal\weapons\Rifles\MX\Mx_UGL_reload.ogg",
                    1,
                    1,
                    10
                };
            };
        };

    /*
	---------------------------------------------------------------
	                      MARKSMAN WEAPONS
	---------------------------------------------------------------
	*/

        class 3AS_Valken38X_Base_F: Rifle_Base_F {};
        class 3AS_Valken38X_F: 3AS_Valken38X_Base_F {};
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

            canShootInWater = 1;
            drySound[] = {"\Indecisive_Armoury_Sounds\weapon_dry.ogg",5,1,10};
            recoil = "IDA_recoil_BlasterCarbine";
            recoilProne = "assaultRifleBase";
            reloadAction = "GestureReload_IDA_Reload_Blaster";
            reloadMagazineSound[] = {"\Indecisive_Armoury_Sounds\Blaster_reload_Vent.ogg",5,1,100};

            magazines[] = 
            {
                "aux187_Mag_20Rnd_Valken38X"
            };

            class WeaponSlotsInfo: WeaponSlotsInfo
            {
                class CowsSlot: CowsSlot
                {
                    linkProxy="\A3\data_f\proxies\weapon_slots\TOP";
                    compatibleItems[]=
                    {
                        "3AS_optic_VK38X_F", "OPTRE_SRS99C_Scope", "OPTRE_M6C_Scope", "optic_Arco_blk_F"
                    };
                };
                class UnderBarrelSlot : 3AS_UnderBarrelSlot_VK38X
                {
                    linkProxy = "\A3\Data_F_Mark\Proxies\Weapon_Slots\UNDERBARREL";
                    compatibleItems[]=
                    {
                        "3AS_bipod_VK38X_F"
                    };
                };
            };
        };

        class 3AS_DC15X_Base_F: Rifle_Base_F {};
        class 3AS_DC15X_F: 3AS_DC15X_Base_F {};
        class aux187_DC15X : 3AS_DC15X_F
        {
            author = "Tim";
            scope = 2;
            scopeArsenal = 2;

            baseWeapon = "aux187_DC15X";
            displayName = "[187th] DC-15X Heavy Sniper Rifle";
            
            class XtdGearInfo {
                model = "aux187_PrimaryWeapon_Model";
                Marksman = "DC15X";
            };

            canShootInWater = 1;
            drySound[] = {"\Indecisive_Armoury_Sounds\weapon_dry.ogg",5,1,10};
            recoil = "IDA_recoil_BlasterCarbine";
            recoilProne = "assaultRifleBase";
            reloadAction = "GestureReload_IDA_Reload_Blaster";
            reloadMagazineSound[] = {"\Indecisive_Armoury_Sounds\Blaster_reload_Vent.ogg",5,1,100};

            magazines[] = 
            {
                "aux187_Mag_5Rnd_DC15X",
                "aux187_Mag_1Rnd_CMag"
            };

            class WeaponSlotsInfo: WeaponSlotsInfo
            {
                class CowsSlot: CowsSlot
                {
                    linkProxy="\A3\data_f\proxies\weapon_slots\TOP";
                    compatibleItems[]=
                    {
                        "OPTRE_SRS99C_Scope", "3AS_optic_DC15X_F"
                    };
                };
                class UnderBarrelSlot : 3AS_UnderBarrelSlot_DC15X	
                {
                    linkProxy = "\A3\Data_F_Mark\Proxies\Weapon_Slots\UNDERBARREL";
                    compatibleItems[]=
                    {
                        "3AS_bipod_DC15X_F"
                    };
                };
            };
        };

    /*
	---------------------------------------------------------------
	                      ENGINEER WEAPONS
	---------------------------------------------------------------
	*/

        class 3AS_DP23_Base_F: Rifle_Base_F {};
        class 3AS_DP23_GL: 3AS_DP23_Base_F {};
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
                class CowsSlot : 3AS_CowsSlot_DP23
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

            class 3AS_FL_F: UGL_F
            {
                displayName="187th UGL";
                descriptionShort="Pew Tube";
                useModelOptics=0;
                useExternalOptic=0;
                magazines[]=
                {
                    "3AS_1Rnd_EC80_Flechette"
                };
                magazineWell[] = 
                {
                    "3AS_DP23_GL_Magwell"
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

            canShootInWater = 1;
            drySound[] = {"\Indecisive_Armoury_Sounds\weapon_dry.ogg",5,1,10};
            recoil = "IDA_recoil_BlasterCarbine";
            recoilProne = "assaultRifleBase";
            reloadAction = "GestureReload_IDA_Reload_Blaster";
            reloadMagazineSound[] = {"\Indecisive_Armoury_Sounds\Blaster_reload_Vent.ogg",5,1,100};

            magazines[] = 
            {
                "aux187_Mag_40Rnd_DC15S",
                "aux187_Mag_80Rnd_DC15S"
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

        class TKE_MDSniperGrey;
        class aux187_amr : TKE_MDSniperGrey
        {
            author = "Tim";
            scope = 2;
            scopeArsenal = 2;

            baseWeapon = "aux187_amr";
            displayName = "[187th] XLE-279 Anti-Material Rifle";
            
            class XtdGearInfo {
                model = "aux187_PrimaryWeapon_Model";
                Restricted = "XLE279";
            };

            canShootInWater = 1;
            drySound[] = {"\Indecisive_Armoury_Sounds\weapon_dry.ogg",5,1,10};
            //recoil = "IDA_recoil_BlasterCarbine";
            recoilProne = "assaultRifleBase";
            reloadAction = "GestureReload_IDA_Reload_Blaster";
            reloadMagazineSound[] = {"\Indecisive_Armoury_Sounds\Blaster_reload_Vent.ogg",5,1,100};

            magazines[] = 
            {
                "aux187_Mag_1Rnd_CMag"
            };

            class WeaponSlotsInfo: WeaponSlotsInfo
            {
                class CowsSlot: CowsSlot
                {
                    linkProxy="\A3\data_f\proxies\weapon_slots\TOP";
                    compatibleItems[]=
                    {
                        "OPTRE_SRS99C_Scope"
                    };
                };
                class UnderBarrelSlot : 3AS_UnderBarrelSlot_DC15X	
                {
                    linkProxy = "\A3\Data_F_Mark\Proxies\Weapon_Slots\UNDERBARREL";
                    compatibleItems[]=
                    {
                        "3AS_bipod_DC15X_F"
                    };
                };
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

            canShootInWater = 1;
            drySound[] = {"\Indecisive_Armoury_Sounds\weapon_dry.ogg",5,1,10};
            recoil = "IDA_recoil_BlasterCarbine";
            recoilProne = "assaultRifleBase";
            reloadAction = "GestureReload_IDA_Reload_Blaster";
            reloadMagazineSound[] = {"\Indecisive_Armoury_Sounds\Blaster_reload_Vent.ogg",5,1,100};

            magazines[] = 
            {
                "aux187_Mag_40Rnd_XLE7"
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

            canShootInWater = 1;
            drySound[] = {"\Indecisive_Armoury_Sounds\weapon_dry.ogg",5,1,10};
            recoil = "IDA_recoil_BlasterCarbine";
            recoilProne = "assaultRifleBase";
            reloadAction = "GestureReload_IDA_Reload_Blaster";
            reloadMagazineSound[] = {"\Indecisive_Armoury_Sounds\Blaster_reload_Vent.ogg",5,1,100};

            magazines[] = 
            {
                "aux187_Mag_250Rnd_DLT16"
            };

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

            canShootInWater = 1;
            drySound[] = {"\Indecisive_Armoury_Sounds\weapon_dry.ogg",5,1,10};
            recoil = "IDA_recoil_BlasterCarbine";
            recoilProne = "assaultRifleBase";
            reloadAction = "GestureReload_IDA_Reload_Blaster";
            reloadMagazineSound[] = {"\Indecisive_Armoury_Sounds\Blaster_reload_Vent.ogg",5,1,100};

            magazines[] = 
            {
                "aux187_Mag_100Rnd_DC17M",
                "aux187_Mag_10Rnd_DC17M",
                "aux187_Mag_3Rnd_DC17M"
            };
        };

        class launch_Titan_base: Launcher_Base_F {};
        class launch_Titan_short_base: launch_Titan_base {};
        class JLTS_PLX1_AT: launch_Titan_short_base {};
        class aux187_PLX1 : JLTS_PLX1_AT
        {
            author = "Tim";
            scope = 2;
            scopeArsenal = 2;

            baseWeapon = "aux187_PLX1";
            displayName = "[187th] PLX-1 Guided Missile Launcher";

            ace_javelin_enabled = 1;
            weaponInfoType = "ACE_RscOptics_javelin";
            modelOptics = "\z\ace\addons\javelin\data\reticle_titan.p3d";
            canLock = 0;
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
