_EndSplashScreen = {
    for "_x" from 1 to 4 do {
        endLoadingScreen;
        sleep 3;
    };
};

[] spawn _EndSplashScreen;

[west, 2000, [["TFAR_Land_Communication_F", 75], ["Land_Razorwire_F", 15], ["3as_hbarrier_Ramp", 5], ["3as_hbarrier_bunker", 20], ["3as_hbarrier_big4", 20], ["3as_hbarrierwall_4", 20], ["3as_hbarrier_3", 20], ["3as_hbarrier_watchtower", 25]]] call acex_fortify_fnc_registerObjects;
