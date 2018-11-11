#pragma once
#include <string>
#include <iostream>
#include "person.h"
#include "pilot.h" // pilot already includes engineer
#include "engineer.h"

using namespace std;

class pilotengineer : public engineer, public pilot {
private:
	double salary;
public:
	pilotengineer(); // empty constructor
	pilotengineer(string name, int age, char gender, int id, int flighthours, int yearsOfExperience, string airline, int yearsOfStudy, string field, double salary);
	~pilotengineer(); // destructor
	double getSalary();
	void setSalary(double salary);
	int getPilotFlightHours();
	string getName();
	string getEngineerField();
	virtual void print() override; // overriding print
	virtual void printJob(); // pure virtual function
};
