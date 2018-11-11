#include "pch.h"
#include "pilotengineer.h"
#include <iostream>
#include <string>
using namespace std;

pilotengineer::pilotengineer() :person("", 0, 'u', 0), pilot("", 0, 'u', 0, 0, 0, ""), engineer("", 0, 'u', 0, 0, "") {
	this->setSalary(0);
	cout << "PilotEngineer default constructor" << endl;
}

pilotengineer::pilotengineer(string name, int age, char gender, int id, int flighthours, int yearsOfExperience, string airline, int yearsOfStudy, string field, double salary):person (name, age, gender, id),pilot( name, age, gender, id, flighthours, yearsOfExperience, airline), engineer( name,  age,  gender,  id, yearsOfStudy, field) {	
	this->setSalary(salary); 
}

pilotengineer::~pilotengineer() {
	cout << "Destructing Pilot Engineer \n";
}

double pilotengineer::getSalary() {
	return this->salary;
}

void pilotengineer::setSalary(double salary) {
	if (salary > 0.0)
		this->salary = salary;
	else {
		cout << "salary must be positive double" << endl;
		this->salary = 0;
	}
}

int pilotengineer::getPilotFlightHours() { // one function that calls a specific parent's function
	return this->pilot::getFlightHours();
}

string pilotengineer::getName() { // one function that calls a specific parent's function
	return this->person::getName();
}

string pilotengineer::getEngineerField() { // one function that calls a specific parent's function
	return this->getField();
} 

void pilotengineer::printJob() { // pure virtual function
	cout << "This person's job is a Pilot Engineer" << endl;
}

void pilotengineer::print() { // overriding the print function
	cout << "The Pilot Engineer details are \n ";
	cout << "First, ";
	person::print();
	cout << "Second, the Pilot details are \n Years of Experience: " << this->getYearsOfExperience() << "\n Flight Hours: " << this->getFlightHours() << "\n Works for: " << this->getAirline() << " Airline." << endl;
	cout << "Third, the Engineer details are \n Years of study: " << this->getYearsOfStudy() << "\n Field of: " << this->getField() << " engineering." << endl;
	cout << "Fourth, the Pilot Engineer details are \n Salary: " << "$" << this->getSalary() << endl;
	}