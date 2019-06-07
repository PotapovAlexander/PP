#pragma once
#include "pch.h"
#include <iostream>
#include <string>
#include "spell.h"

class mage
{
private: 
	int hpbaar, mana; 
	std::string name; 
public:
	void unit(int newHPbarr, int newMana, std::string newName); 
	std::string getName(); 
	int cast(spell &spel, mage &target);
	void hit(spell &spel); 
	void say(std::string text);
};

