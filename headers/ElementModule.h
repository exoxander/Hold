#pragma once
#include "olcPixelGameEngine.h"
#include "SpriteManager.h"
#include "WorldSpace.h"

class ElementModule {
protected:

public:
	int ID;
};
//sprite module
class SpriteModule : ElementModule {
protected:
	SpriteManager* spriteManager;
	int animationStates;
	Animation* animations;//array of animations

public:
	SpriteModule(SpriteManager* _sm){spriteManager = _sm; animationStates = 0; animations = nullptr;}
	SpriteModule(SpriteManager* _sm, int _states, Animation* _arr){spriteManager = _sm; animationStates = _states; animations = _arr;}

	//render the sprite using 2d camera space
	void render(iVector _cameraSpace);

	//render the sprite using world space translated to camera space
	void render(fVector _worldSpace, iVector _cameraOffset);

};