#pragma once
#include <string>
#include <iostream>
#include "person.h"
#include "engineer.h"
using namespace std;

class pilot : public virtual person {

private:
	int flighthours;
	int yearsOfExperience;
	string airline;
public:
	pilot(); // empty copnstructor
	pilot(string name, int age, char gender, int id, int flighthours, int yearsOfExperience, string airline);
	~pilot(); // destructor
	void setFlightHours(int flighthours);
	int getFlightHours();
	void setAirline(string airline);
	string getAirline();
	void setYearsOfExperience(int yearsOfExperience);
	int getYearsOfExperience();
	void convert(engineer e); // convert function in pilot class which have access to engineer class private variables .. the function sets YearsOfExperience to input engineers yearsOfStudy
	friend pilot doubleFlightHours(const pilot&); // friend function to double the number of a pilot flight hours
	friend void tripleFlightHours(pilot&);
	virtual void printJob(); // pure virtual function
	virtual void print() override; // overriding the print function
};