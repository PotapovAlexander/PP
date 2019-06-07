#pragma once
#include "pch.h"
#include <iostream>


class kniga
{
private:
	std::string name;
	int year; 
public: 
	void sname(const char * nname); 
	void syear(const int nyear);
	void ginfo();
};

