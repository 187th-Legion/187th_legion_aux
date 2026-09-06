    class aux187_HandFlare_Light_Base
    {
        intensity = 20000;
        drawLight = 0;
        class Attenuation
        {
            start = 0;
            constant = 0;
            linear = 0;
            quadratic = 0;
        };
        dayLight = 0;
        useFlare = 1;
        flareSize = 5;
        flareMaxDistance = 600;
        position[] = {0, 0.019, -0.125};
    };
    class aux187_HandFlare_Light_Red : aux187_HandFlare_Light_Base
    {
        color[] = {1, 0.25, 0};
        diffuse[] = {0.8, 0.35, 0.25};
        ambient[] = {2, 0.3, 0};
    };
    class aux187_HandFlare_Light_Green : aux187_HandFlare_Light_Base
    {
        color[] = {0.5, 1, 0.25};
        diffuse[] = {0.5, 0.8, 0.25};
        ambient[] = {0.25, 2, 0.25};
    };
    class aux187_HandFlare_Light_Yellow : aux187_HandFlare_Light_Base
    {
        color[] = {1, 1, 0.25};
        diffuse[] = {0.8, 0.8, 0.25};
        ambient[] = {2, 2, 0.25};
    };
    class aux187_HandFlare_Light_Blue : aux187_HandFlare_Light_Base
    {
        color[] = {0.25, 0.25, 1};
        diffuse[] = {0.25, 0.25, 0.8};
        ambient[] = {0.25, 0.25, 2};
    };
    class aux187_HandFlare_Light_Purple : aux187_HandFlare_Light_Base
    {
        color[] = {1, 0.25, 1};
        diffuse[] = {0.8, 0.25, 0.8};
        ambient[] = {2, 0.25, 2};
    };
    class aux187_SignalFlare_Light_Base : aux187_HandFlare_Light_Base
    {
        intensity = 2500;
        drawLight = 0;
        flareSize = 3.5;
        flareMaxDistance = 800;
    };
    class aux187_SignalFlare_Light_Red : aux187_SignalFlare_Light_Base
    {
        color[] = {1, 0.25, 0};
        diffuse[] = {0.8, 0.35, 0.25};
        ambient[] = {2, 0.3, 0};
    };
    class aux187_SignalFlare_Light_Green : aux187_SignalFlare_Light_Base
    {
        color[] = {0.5, 1, 0.25};
        diffuse[] = {0.5, 0.8, 0.25};
        ambient[] = {0.25, 2, 0.25};
    };
    class aux187_SignalFlare_Light_Yellow : aux187_SignalFlare_Light_Base
    {
        color[] = {1, 1, 0.25};
        diffuse[] = {0.8, 0.8, 0.25};
        ambient[] = {2, 2, 0.25};
    };
    class aux187_SignalFlare_Light_Blue : aux187_SignalFlare_Light_Base
    {
        color[] = {0.25, 0.25, 1};
        diffuse[] = {0.25, 0.25, 0.8};
        ambient[] = {0.25, 0.25, 2};
    };
    class aux187_SignalFlare_Light_Purple : aux187_SignalFlare_Light_Base
    {
        color[] = {1, 0.25, 1};
        diffuse[] = {0.8, 0.25, 0.8};
        ambient[] = {2, 0.25, 2};
    };
    class aux187_HandFlare_Light_Sparks_Base
    {
        ambient[] = {0, 0, 0, 0};
        intensity = 500;
        drawLight = 0;
        class Attenuation
        {
            start = 0;
            constant = 0;
            linear = 0;
            quadratic = 6;
            hardLimitStart = 40;
            hardLimitEnd = 80;
        };
        dayLight = 1;
        useFlare = 0;
        blinking = 0;
        position[] = {0, 0.019, -0.125};
    };
    class aux187_HandFlare_Light_Sparks_Red : aux187_HandFlare_Light_Sparks_Base
    {
        color[] = {0.1, 0.1, 0.1};
        diffuse[] = {0.8, 0.2, 0};
    };
    class aux187_HandFlare_Light_Sparks_Green : aux187_HandFlare_Light_Sparks_Base
    {
        color[] = {0.1, 0.1, 0.1};
        diffuse[] = {0.2, 0.8, 0};
    };
    class aux187_HandFlare_Light_Sparks_Yellow : aux187_HandFlare_Light_Sparks_Base
    {
        color[] = {0.1, 0.1, 0.1};
        diffuse[] = {0.8, 0.8, 0};
    };
    class aux187_HandFlare_Light_Sparks_Blue : aux187_HandFlare_Light_Sparks_Base
    {
        color[] = {0.1, 0.1, 0.1};
        diffuse[] = {0.2, 0.2, 0.8};
    };
    class aux187_HandFlare_Light_Sparks_Purple : aux187_HandFlare_Light_Sparks_Base
    {
        color[] = {0.1, 0.1, 0.1};
        diffuse[] = {0.8, 0.2, 0.8};
    };
