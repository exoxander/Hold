#pragma once
#include "ElementModule.h"
#include <vector>
#include <list>
#include "WorldSpace.h"
#include "GameManager.h"

struct hepTreeLocation{
	hepTree* container;
	std::list<WorldElement>::iterator position;
}

class GameElement {
protected:
	uint64_t elementID;

public:
	uint64_t getID() { return elementID; }
	std::vector<ElementModule> modules;
};

class WorldElement : GameElement{
	protected:

	public:
		hepTreeLocation location;
}