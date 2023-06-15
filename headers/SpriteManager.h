#pragma once
#include "olcPixelGameEngine.h"

//contains all the sprites for a certain object
struct SpriteSet{
    string spriteFolder = "graphics/";
    int frames = 1;
    olc::Sprite* spriteArray = nullptr;
}

//Contains the information for one animation from the spriteset
struct Animation{
	int frameCount;
	int frameDuration;
	int startFrameIndex;
	int endFrameIndex;
	int progression = 0;

	Animation(int _fc, int _fd, int _sfi, int _efi){frameCount = _fc; frameDuration = _fd; startFrameIndex = _sfi; endFrameIndex = _efi;};
};


//contains the SpriteSets for all game objects
struct SpriteManager{
    SpriteSet* spriteMasterArray = nullptr;
};