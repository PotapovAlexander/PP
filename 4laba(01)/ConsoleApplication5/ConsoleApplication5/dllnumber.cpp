#include "pch.h"
#include "dllnumber.h"
#include <iostream>


void dllnumber::snum(const int nnum) 
{
	this->num = nnum; 
	return;
};
void dllnumber::ginfo()
{
	std::cout << this->num << std::endl;
	return;
};