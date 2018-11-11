#pragma once
#include <string>
#include <iostream>
#include "person.h"
using namespace std;

class engineer : public virtual person {
	friend class pilot; // allows pilot class to access private members of engineer
private:
	int yearsOfStudy;
	string field;
public:

	engineer(); // empty constructor
	engineer(int yearsOfStudy, string field);
	~engineer(); // destructor
	engineer(string name, int age, char gender, int id, int yearsOfStudy, string field);	
	int getYearsOfStudy();
	void setYearsOfStudy(int y);
	string getField();
	void setField(string f);
	virtual void print() override; // overriding print method 
	virtual void printJob(); // defining hte printJob pure virtual finction
};



