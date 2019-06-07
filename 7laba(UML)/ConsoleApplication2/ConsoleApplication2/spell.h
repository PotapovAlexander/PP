#pragma once
#include "pch.h"
#include <iostream>
#include <string>
class spell
{
public:
	std::string sname; 
	int dhpbaar, dmana;
	spell(std::string nName, int nDhpbaar, int nDmana);
};

