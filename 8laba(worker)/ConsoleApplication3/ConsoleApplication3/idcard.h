#pragma once
#include "pch.h"
#include <iostream>
#include <string>

class Idcard
{
private:
	int id; 
	std::string dataExpire;
public: 
	void setId(int newId) 
	{
		id = newId;
	};
	int getId() 
	{ 
		return id; 
	};
	void setDataExpire(std::string newDataExpire) 
	{
		dataExpire = newDataExpire;
	};
	std::string getDataExpire()
	{
		return dataExpire;
	};
	void print()
	{
		std::cout << " idCard " << id << std::endl;
	};
};