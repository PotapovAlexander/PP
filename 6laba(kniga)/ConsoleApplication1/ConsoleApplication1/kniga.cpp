#include "pch.h"
#include <iostream>
#include <string>
#include "kniga.h"

void kniga::sname(const char * nname)
{
	this->name = nname;
	return;
}
void kniga::syear(const int nyear)
{
	this->year = nyear;
	return;
}
void kniga::ginfo()
{
	std::cout << this->name << "(" << this->year << ")" << std::endl;
	return;
}
