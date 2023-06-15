#pragma once
#include "ElementModule.h"
#include <vector>
#include "WorldSpace.h"


class GameElement {
protected:
	unsigned long ID;

public:
	int getID() { return ID; }
	std::vector<ElementModule> modules;
};