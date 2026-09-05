    class OPTRE_Furniture_Locker;
    class CBA_Extended_EventHandlers_base;

    class aux187_arsenal_locker : OPTRE_Furniture_Locker
    {
        displayName = "[187th] Limited Arsenal (Locker)";
        author = "Tim";

        scope = 2;
        editorCategory = "aux187_edCat_props";
        editorSubcategory = "aux187_edSubcat_crates";

        class EventHandlers
        {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base
            {
                init = "(_this select 0) execVM 'z\aux187\addons\core\functions\arsenals\fn_limitedArsenal.sqf';";
            };
        };
    };

    class TKE_Crate1R;
    class aux187_arsenal_crate : TKE_Crate1R
    {
        displayName = "[187th] Limited Arsenal (Crate)";
        author = "Tim";

        scope = 2;
        editorCategory = "aux187_edCat_props";
        editorSubcategory = "aux187_edSubcat_crates";

        class EventHandlers
        {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base
            {
                init = "(_this select 0) execVM 'z\aux187\addons\core\functions\arsenals\fn_limitedArsenal.sqf';";
            };
        };
    };
