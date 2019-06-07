#pragma once
#include "pch.h"
#include <iostream>
#include <string>
#include "idcard.h"
class Department;

class Employee
{
private:
	std::string position; 
	Idcard* card; 	
	Department* departtment; 
	int room;
public:
	std::string name; 
	void setPosition(std::string newPosition)
	{
		position = newPosition;
	};
	std::string getPosition()
	{
		return position;
	};
	void setIdCard(Idcard*newIdCard) 
	{
		card = newIdCard;
	};
	Idcard* getIdCard() 
	{ 
		return card; 
	}; 	
	void setRoom(int newRoom) 
	{
		room = newRoom; 
	};
	int getRoom()
	{
		return room;
	};
	void setDepartment(Department* newDepartment)
	{
		departtment = newDepartment;
	};
	Department* getDepartment()
	{
		return departtment;
	};
	void print();


};

