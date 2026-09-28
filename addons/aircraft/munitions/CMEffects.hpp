    class CounterMeasureChaff;
    class aux187_effect_cm_chaff : CounterMeasureChaff
    {
        class Cmeasures1
        {
            intensity = 1;
            interval = 1;
            lifeTime = 8.5;
            position[] = {0,0,0};
            qualityLevel = 2;
            simulation = "particles";
            type = "aux187_Cmeasures1";
        };

        class Cmeasures1L : Cmeasures1
        {
            qualityLevel = 0;
            type = "aux187_Cmeasures1L";
        };

        class Cmeasures1M : Cmeasures1
        {
            qualityLevel = 1;
            type = "aux187_Cmeasures1M";
        };

        class Cmeasures2
        {
            intensity = 1;
            interval = 1;
            lifeTime = 7.2;
            position[] = {0,0,0};
            simulation = "particles";
            type = "aux187_Cmeasures2";
        };

        class Cmeasures3
        {
            intensity = 1;
            interval = 1;
            lifeTime = 0.05;
            position[] = {0,0,0};
            simulation = "particles";
            type = "aux187_Cmeasures3";
        };
    };
