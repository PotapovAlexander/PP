#include "pch.h"
#include "reader.h"
#include <iostream>
#include <string>


void reader::sreadmember(const char * nreadmember)
{
	this->readmember = nreadmember;
	return;
}
void reader::sage(const int nage)
{
	this->age = nage;
	return;
}
void reader::skniga(kniga current)
{
	this->currentBook = current;
	return;
}
void reader::ginfo()
{
	std::cout << "װָ־: " << this->readmember << ", גמחנאסע: " << this->age << " ";
	this->currentBook.ginfo();
	return;
}
