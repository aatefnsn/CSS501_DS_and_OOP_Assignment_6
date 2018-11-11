#include "pch.h"
#include "engineer.h"
#include <iostream>
using namespace std;

engineer::engineer() :person("", 0, 'u', 0) {
	this->setField("");
	this->setYearsOfStudy(0);
	cout << "Engineer default constructor" << endl;
}

engineer::engineer(string name, int age, char gender, int id, int yearsOfStudy, string field) : person(name, age, gender, id) {
	this->setField(field);
	this->setYearsOfStudy(yearsOfStudy);
}

engineer::engineer(int yearsOfStudy, string field) {
	this->setYearsOfStudy(yearsOfStudy);
	this->setField(field);
}

engineer::~engineer() {
	cout << "Destructing Engineer \n";
}


int engineer::getYearsOfStudy() {
	return this->yearsOfStudy;
}

string engineer::getField() {
	return this->field;
}

void engineer::setYearsOfStudy(int y) {
	if (y > 3)
		this->yearsOfStudy = y;
	else {
		this->yearsOfStudy = 0;
		cout << " Years of study must be greater than 3 years" << endl;
	}
}

void engineer::setField(string f) {
	if (&f != NULL)
		this->field = f;
}

void engineer::print() { // overriding the print method
	cout << "The Engineer details are \n First,";
	person::print();
	cout << "Second, \n Years of study: " << this->getYearsOfStudy() <<  "\n Field of: " << this->getField() << " engineering." << endl;
}

void engineer::printJob() { // pure virtual function definition
	cout << "This person's job is an Engineer" << endl;
}
