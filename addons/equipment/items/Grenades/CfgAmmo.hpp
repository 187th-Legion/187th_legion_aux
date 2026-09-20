    class JLTS_grenade_emp_ammo ;
    class aux187_grenadeAmmo_popper : JLTS_grenade_emp_ammo
    {
        model = "\Indecisive_Armoury_Ammos\Data\Thermal_Detonator\IDA_Thermal_Detonator.p3d";
        
        ace_frag_enabled = 0;
        EMPSoundLoop1[] = {"MRC\JLTS\weapons\Grenades\sounds\grenade_burning.wss",0.125893,1,70};
        grenadeBurningSound[] = {"EMPSoundLoop1",0.5};
        explosionEffects = "JLTS_fx_exp_EMP";
        SoundSetExplosion[] = {"JLTS_GrenadeEMP_Exp_SoundSet","JLTS_GrenadeEMP_Tail_SoundSet","Explosion_Debris_SoundSet"};
        JLTS_isEMPAmmo = 0;

        class EventHandlers
        {
            init = "_this select 0 addEventHandler ['Explode', {[_position, 15] call aux187_fnc_droidPopper;}];";
        };
    };
