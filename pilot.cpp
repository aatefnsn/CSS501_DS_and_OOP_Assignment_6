#include "pch.h"
#include "pilot.h"
#include <iostream>
#include <string>
using namespace std;

pilot::pilot(): person("", 0, 'u', 0) {
	this->setFlightHours(0);
	this->setYearsOfExperience(0);
	this->setAirline("");
	cout << "Pilot default constructor" << endl;
}
pilot::pilot(string name, int age, char gender, int id, int flighthours, int yearsOfExperience, string airline) : person(name, age, gender, id) {
	this->setFlightHours(flighthours);
	this->setYearsOfExperience(yearsOfExperience);
	this->setAirline(airline);
}

pilot::~pilot() {
	cout << "Destructing Pilot \n";
}

void pilot::setFlightHours(int flighthours) {
	if (flighthours > 100)
		this->flighthours = flighthours;
	else {
		cout << "A pilot flight hours must exceed 100 hours" << endl;
		this->flighthours = 0;
	}
}
int pilot::getFlightHours() {
	return this->flighthours;
}

void pilot::setAirline(string airline) {
	if (&airline != NULL)
		this->airline = airline;
}
string pilot::getAirline() {
	return this->airline;
}
void pilot::setYearsOfExperience(int yearsOfExperience) {
	if (yearsOfExperience > 0)
		this->yearsOfExperience = yearsOfExperience;
	else {
		cout << "Years of experience must be a positive integer" << endl;
		this->yearsOfExperience = 0;
	}
}
int pilot::getYearsOfExperience() {
	return this->yearsOfExperience;
}

void pilot::printJob() { // pure virtual function
	cout << "This person's job is a Pilot" << endl;
}
void pilot::print() { // overriding the print function
	cout << "The Pilot details are \n First, "; 
	person::print();
	cout << "Second \n Years of Experience: " << this->getYearsOfExperience() << "\n Flight Hours: " << this->getFlightHours() << "\n Works for: " << this->getAirline() << " Airline." << endl;
}

void pilot::convert(engineer e) { // pilot is a friend class to engineer so pilot can access engineer private member YearsOfStudy	
	cout << "Setting engineer years of study as pilot years of experience" << endl;
	this->setYearsOfExperience(e.yearsOfStudy);
}

pilot doubleFlightHours(const pilot& p) { // friend function to prove that function is able to access private variables of the input reference pilot n
	pilot p2 = pilot(p.getName(), p.getAge(), p.getGender(), p.getIdentification(), p.flighthours, p.yearsOfExperience, p.airline);
	p2.flighthours = p.flighthours * 2; 
	return p2;
}

void tripleFlightHours(pilot& p) { // friend function to prove that function is able to access private variables of the input reference pilot n
	p.setFlightHours(3 * p.getFlightHours());
}