#pragma once
#include "pch.h"
#include <iostream>
#include "kniga.h"
class reader
{
private:
	int age;
	std::string readmember;
	kniga currentBook;
public:
	void sage(const int nage); 
	void sreadmember(const char * nreadmember);
	void skniga(kniga current); 
	void ginfo();
};

