    class IDA_Nerf_closeExp_SoundShader;
    class aux187_meme_soundshader_skull_close : IDA_Nerf_closeExp_SoundShader
    {
        range = 70;
        rangeCurve[] = {{0,1},{50,0.75},{70,0}};
        volume = 1;

        samples[] = {{ "z\aux187\addons\equipment\memes\data\skull_explosion.ogg",1 },{ "z\aux187\addons\equipment\memes\data\skull_explosion.ogg",1 }};
    };

    class aux187_meme_soundshader_skull_med : aux187_meme_soundshader_skull_close
    {
        range = 2200;
        rangeCurve[] = {{0,1},{100,1},{500,0},{2200,0}};
        volume = 1;
    };

    class aux187_meme_soundshader_skull_far : aux187_meme_soundshader_skull_close
    {
        range = 2200;
        rangeCurve[] = {{0,0},{100,0},{250,1},{2200,1}};
        volume = 1.12202;
    };
