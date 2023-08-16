#pragma once
#include <list>
#include "GameElement.h"

//game object hash table
class ElementHashTable{
    int largePrime = 4093;
    //indecies 4093, 4094, 4095 are inaccessible, reserved for system? 
    std::list<GameElement> elementTable[4096];

    void insert(GameElement _element);
    void remove(GameElement _element);
    void remove(uint64_t _id);
    GameElement* get(uint64_t _id);
}

//game object spacial accelleration hepTree
//https://gist.github.com/fabiovalse/06865431390fa7bb1fcb
class hepTree{
    hepTree* parent;
    hepTree* children[7];

    std::list<uint64_t> elements;

    std::list<uint64_t>::iterator returnChildren();
    std::list<uint64_t>::iterator returnAllChildren();
}