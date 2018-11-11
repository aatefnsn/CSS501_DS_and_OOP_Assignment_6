#include "pch.h"
#include "person.h"
#include <iostream>
using namespace std;

person::person() {
	this->setName("");
	this->setAge(0);
	this->setGender('u');
	this->setIdentification(0);
	cout << "person default constructor" << endl;
}
person::person(string name, int age, char gender, int id) {
	this->setName(name);
	this->setAge(age);
	this->setGender(gender);
	this->setIdentification(id);
}

person::~person()
{
	cout << "Destructing Person \n";
}

string person::getName() const {
	return this->name;
}
void person::setName(string name) {
	if (name != "" || &name != NULL)
		this->name = name;
	else {
		cout << "Invalid Name" << endl;
		this->name = "";
	}
}
void person::setJob(string job) {
	if (job != "" || &job != NULL)
		this->job = job;
	else {
		cout << "Invalid job" << endl;
		this->job = "";
	}
}
string person::getJob() {
	return this->job;
}
void person::setAge(int age) {
	if (age >= 0)
		this->age = age;
	else {
		cout << "age must be a positive integer" << endl;
		this->age = 0;
	}
}
int person::getAge() const {
	return this->age;
}
void person::setGender(char g) {
	if (g == 'f' || g == 'm' || g == 'F' || g == 'M')
		this->gender = g;
	else {
		cout << "Gender can only be either Female or Male" << endl;
		this->gender = 'u'; // undefined 
	}
}
char person::getGender() const {
	return this->gender;
}
int person::getIdentification() const {
	return this->identification;
}
void person::setIdentification(int id) {
	if (id > 0)
		this->identification = id;
	else {
		cout << "Identification must be a positive integer" << endl;
		this->identification = 0;
	}
}

void person::print() { // defining the print method to be overrided in derived classes
	//cout << "This is a person" << endl; 
	cout << "The person details are \n" << " Name:" << this->getName() << "\n age:" << this->getAge() << "\n gender:" << this->getGender() << "\n Identification:" << this->getIdentification() << endl;
}