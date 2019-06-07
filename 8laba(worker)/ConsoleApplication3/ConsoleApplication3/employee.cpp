#include "pch.h"
#include "employee.h"
#include <iostream>


void Employee::print() 
{
	std::cout << " Employee: " << name;
	std::cout << " Position" << position;
	std::cout << " Department: " << departtment;
	std::cout << " Room: " << room << std::endl;
}
