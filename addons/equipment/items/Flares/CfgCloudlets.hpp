    class aux187_HandFlare_Effect_Smoke_Base
    {
        interval = 0.01;
        circleRadius = 0;
        circleVelocity[] = {0, 0, 0};
        particleShape = "\A3\data_f\ParticleEffects\Universal\Universal";
        particleFSNtieth = 16;
        particleFSIndex = 7;
        particleFSFrameCount = 48;
        particleFSLoop = 1;
        particleType = "Billboard";
        animationSpeed[] = {1};
        animationSpeedCoef = 1;
        animationName = "";
        angle = 0;
        angleVar = 0.5;
        timerPeriod = 1;
        lifeTime = 1.1;
        lifeTimeVar = 0.4;
        rotationVelocity = 1;
        rotationVelocityVar = 9;
        weight = 1.2;
        volume = 1;
        rubbing = 0.5;
        size[] = {0.05, 0.5};
        sizeVar = 0;
        sizeCoef = 0.6;
        color[] = {{0.1353, 0.1353, 0.1353, 0.3}};
        colorVar[] = {0, 0, 0, 0};
        colorCoef[] = {1, 1, 1, 1};
        randomDirectionPeriod = 0.2;
        randomDirectionPeriodVar = 0;
        randomDirectionIntensity = 0.02;
        randomDirectionIntensityVar = 0;
        beforeDestroyScript = "";
        onTimerScript = "";
        position[] = {0, 0.022, -0.125};
        positionVar[] = {0, 0, 0};
        positionVarConst[] = {0, 0, 0};
        moveVelocity[] = {0, 0.2, 0};
        MoveVelocityVar[] = {0.08, 0.08, 0.08};
        MoveVelocityVarConst[] = {0, 0, 0};
        destroyOnWaterSurface = 1;
        destroyOnWaterSurfaceOffset = -0.6;
        blockAIVisibility = 0;
    };
    class aux187_HandFlare_Effect_Smoke_Base_UW : aux187_HandFlare_Effect_Smoke_Base
    {
        interval = 0.04;
        particleShape = "\A3\data_f\ParticleEffects\Universal\UnderWaterSmoke";
        particleFSNtieth = 4;
        particleFSIndex = 0;
        particleFSFrameCount = 16;
        particleFSLoop = 1;
        animationSpeedCoef = 1;
        lifeTime = 8;
        lifeTimeVar = 5;
        rotationVelocity = 1;
        weight = 1.15;
        volume = 1;
        size[] = {0.2};
        sizeVar = 0.004;
        color[] = {{1, 1, 1, 1}};
        colorVar[] = {0, 0, 0, 1};
        colorCoef[] = {1, 1, 1, 1};
        moveVelocity[] = {0, 0, 0};
        MoveVelocityVar[] = {0.05, 0.05, 0.05};
        MoveVelocityVarConst[] = {0, 0, 0};
        destroyOnWaterSurface = -1;
    };
    class aux187_HandFlare_Effect_Smoke_Red : aux187_HandFlare_Effect_Smoke_Base
    {
        color[] = {{0.5, 0, 0, 0.2}};
    };
    class aux187_HandFlare_Effect_Smoke_Red_UW : aux187_HandFlare_Effect_Smoke_Base_UW
    {
    };
    class aux187_HandFlare_Effect_Smoke_Green : aux187_HandFlare_Effect_Smoke_Base
    {
        color[] = {{0, 0.5, 0.1, 0.2}};
    };
    class aux187_HandFlare_Effect_Smoke_Green_UW : aux187_HandFlare_Effect_Smoke_Base_UW
    {
    };
    class aux187_HandFlare_Effect_Smoke_Yellow : aux187_HandFlare_Effect_Smoke_Base
    {
        color[] = {{0.5, 0.5, 0, 0.2}};
    };
    class aux187_HandFlare_Effect_Smoke_Yellow_UW : aux187_HandFlare_Effect_Smoke_Base_UW
    {
    };
    class aux187_HandFlare_Effect_Smoke_Blue : aux187_HandFlare_Effect_Smoke_Base
    {
        color[] = {{0, 0, 0.5, 0.2}};
    };
    class aux187_HandFlare_Effect_Smoke_Blue_UW : aux187_HandFlare_Effect_Smoke_Base_UW
    {
    };
    class aux187_HandFlare_Effect_Smoke_Purple : aux187_HandFlare_Effect_Smoke_Base
    {
        color[] = {{0.5, 0, 0.5, 0.2}};
    };
    class aux187_HandFlare_Effect_Smoke_Purple_UW : aux187_HandFlare_Effect_Smoke_Base_UW
    {
    };
    class aux187_SignalFlare_Effect_Smoke_Base : aux187_HandFlare_Effect_Smoke_Base
    {
        interval = 0.035;
        animationSpeed[] = {1};
        lifeTime = 25;
        lifeTimeVar = 10;
        rotationVelocity = 0.3;
        rotationVelocityVar = 3;
        weight = 1.2;
        rubbing = 0.1;
        size[] = {0.05, 20};
        moveVelocity[] = {0, 0.2, 0};
        MoveVelocityVar[] = {0.1, 0.1, 0.1};
    };
    class aux187_SignalFlare_Effect_Smoke_Base_UW : aux187_HandFlare_Effect_Smoke_Base_UW
    {
    };
    class aux187_SignalFlare_Effect_Smoke_Red : aux187_SignalFlare_Effect_Smoke_Base
    {
        color[] = {{0.5, 0, 0, 0.2}};
    };
    class aux187_SignalFlare_Effect_Smoke_Red_UW : aux187_SignalFlare_Effect_Smoke_Base_UW
    {
    };
    class aux187_SignalFlare_Effect_Smoke_Green : aux187_SignalFlare_Effect_Smoke_Base
    {
        color[] = {{0, 0.5, 0.1, 0.2}};
    };
    class aux187_SignalFlare_Effect_Smoke_Green_UW : aux187_SignalFlare_Effect_Smoke_Base_UW
    {
    };
    class aux187_SignalFlare_Effect_Smoke_Yellow : aux187_SignalFlare_Effect_Smoke_Base
    {
        color[] = {{0.5, 0.5, 0, 0.2}};
    };
    class aux187_SignalFlare_Effect_Smoke_Yellow_UW : aux187_SignalFlare_Effect_Smoke_Base_UW
    {
    };
    class aux187_SignalFlare_Effect_Smoke_Blue : aux187_SignalFlare_Effect_Smoke_Base
    {
        color[] = {{0, 0, 0.5, 0.2}};
    };
    class aux187_SignalFlare_Effect_Smoke_Blue_UW : aux187_SignalFlare_Effect_Smoke_Base_UW
    {
    };
    class aux187_SignalFlare_Effect_Smoke_Purple : aux187_SignalFlare_Effect_Smoke_Base
    {
        color[] = {{0.5, 0, 0.5, 0.2}};
    };
    class aux187_SignalFlare_Effect_Smoke_Purple_UW : aux187_SignalFlare_Effect_Smoke_Base_UW
    {
    };
    class aux187_HandFlare_Effect_Sparks_Base
    {
        interval = 0.004;
        circleRadius = 0;
        circleVelocity[] = {0, 0, 0};
        particleShape = "\A3\data_f\ParticleEffects\Universal\Universal.p3d";
        particleFSNtieth = 16;
        particleFSIndex = 13;
        particleFSFrameCount = 2;
        particleFSLoop = 0;
        particleType = "Billboard";
        animationSpeed[] = {1000};
        animationSpeedCoef = 1;
        animationName = "";
        angle = 0;
        angleVar = 360;
        timerPeriod = 1;
        lifeTime = 0.2;
        lifeTimeVar = 0.2;
        rotationVelocity = 1;
        weight = 210;
        volume = 0.008;
        rubbing = 0.3;
        size[] = {0.12, 0};
        sizeVar = 0.03;
        sizeCoef = 1;
        randomDirectionPeriod = 0;
        randomDirectionPeriodVar = 0;
        randomDirectionIntensity = 0;
        randomDirectionIntensityVar = 0;
        beforeDestroyScript = "";
        onTimerScript = "";
        position[] = {0, 0.019, -0.125};
        positionVar[] = {0.008, 0.008, 0.008};
        positionVarConst[] = {0, 0, 0};
        moveVelocity[] = {"( - inDirX * 1 + surfNormalX / 2) * inSpeed / 1", "( - inDirY * 1 + surfNormalY / 2) * inSpeed / 1", "( - inDirZ * 1 + surfNormalZ / 2) * inSpeed / 1"};
        moveVelocityVar[] = {3.2, 3.2, 3.2};
        moveVelocityVarConst[] = {0, 0, 0};
        rotationVelocityVar = 0;
        blockAIVisibility = 0;
        emissiveColor[] = {{10, 10, 10, 1}};
        bounceOnSurface = 0.4;
        bounceOnSurfaceVar = 0.4;
    };
    class aux187_HandFlare_Effect_Sparks_Red : aux187_HandFlare_Effect_Sparks_Base
    {
        color[] = {{1, 0.3, 0.3, -6.5}, {1, 0.3, 0.3, -6}, {1, 0.3, 0.3, -5.5}, {1, 0.3, 0.3, -4.5}};
        colorVar[] = {0.05, 0.05, 0.05, 5};
        colorCoef[] = {1, 1, 1, 1};
    };
    class aux187_HandFlare_Effect_Sparks_Green : aux187_HandFlare_Effect_Sparks_Base
    {
        color[] = {{0.3, 1, 0.3, -6.5}, {0.3, 1, 0.3, -6}, {0.3, 1, 0.3, -5.5}, {0.3, 1, 0.3, -4.5}};
        colorVar[] = {0.05, 0.05, 0.05, 5};
        colorCoef[] = {1, 1, 1, 1};
    };
    class aux187_HandFlare_Effect_Sparks_Yellow : aux187_HandFlare_Effect_Sparks_Base
    {
        color[] = {{1, 1, 0.3, -6.5}, {1, 1, 0.3, -6}, {1, 1, 0.3, -5.5}, {1, 1, 0.3, -4.5}};
        colorVar[] = {0.05, 0.05, 0.05, 5};
        colorCoef[] = {1, 1, 1, 1};
    };
    class aux187_HandFlare_Effect_Sparks_Blue : aux187_HandFlare_Effect_Sparks_Base
    {
        color[] = {{0.3, 0.3, 1, -6.5}, {0.3, 0.3, 1, -6}, {0.3, 0.3, 1, -5.5}, {0.3, 0.3, 1, -4.5}};
        colorVar[] = {0.05, 0.05, 0.05, 5};
        colorCoef[] = {1, 1, 1, 1};
    };
    class aux187_HandFlare_Effect_Sparks_Purple : aux187_HandFlare_Effect_Sparks_Base
    {
        color[] = {{1, 0.3, 1, -6.5}, {1, 0.3, 1, -6}, {1, 0.3, 1, -5.5}, {1, 0.3, 1, -4.5}};
        colorVar[] = {0.05, 0.05, 0.05, 5};
        colorCoef[] = {1, 1, 1, 1};
    };
    class aux187_HandFlare_Effect_Flame_Base
    {
        interval = 0.01;
        circleRadius = 0;
        circleVelocity[] = {0, 0, 0};
        particleShape = "\A3\data_f\ParticleEffects\Universal\Universal.p3d";
        particleFSNtieth = 16;
        particleFSIndex = 10;
        particleFSFrameCount = 32;
        particleFSLoop = 1;
        particleType = "Billboard";
        animationSpeed[] = {1};
        animationSpeedCoef = 1;
        animationName = "";
        angle = 0;
        angleVar = 1;
        timerPeriod = 3;
        lifeTime = 0.45;
        lifeTimeVar = 0.3;
        rotationVelocity = 0;
        weight = 0.0515;
        volume = 0.04;
        rubbing = 0.16;
        size[] = {0.1, 0};
        sizeVar = 0.05;
        sizeCoef = 1;
        colorVar[] = {0.1, 0.1, 0.1, 0};
        colorCoef[] = {1, 1, 1, 1};
        randomDirectionPeriod = 0;
        randomDirectionPeriodVar = 0;
        randomDirectionIntensity = 0;
        randomDirectionIntensityVar = 0;
        beforeDestroyScript = "";
        onTimerScript = "";
        position[] = {0, 0.019, -0.125};
        positionVar[] = {0.018, 0.08, 0.018};
        positionVarConst[] = {0, 0, 0};
        moveVelocity[] = {0, 0, 0};
        moveVelocityVar[] = {0.01, 0.01, 0.01};
        moveVelocityVarConst[] = {0, 0, 0};
        rotationVelocityVar = 0;
    };
    class aux187_HandFlare_Effect_Flame_Red : aux187_HandFlare_Effect_Flame_Base
    {
        color[] = {{1, 0.3, 0.3, -80}};
    };
    class aux187_HandFlare_Effect_Flame_Green : aux187_HandFlare_Effect_Flame_Base
    {
        color[] = {{0, 1, 0.1, -80}};
    };
    class aux187_HandFlare_Effect_Flame_Yellow : aux187_HandFlare_Effect_Flame_Base
    {
        color[] = {{1, 1, 0.1, -80}};
    };
    class aux187_HandFlare_Effect_Flame_Blue : aux187_HandFlare_Effect_Flame_Base
    {
        color[] = {{0.1, 0.1, 1, -80}};
    };
    class aux187_HandFlare_Effect_Flame_Purple : aux187_HandFlare_Effect_Flame_Base
    {
        color[] = {{1, 0.1, 1, -80}};
    };
