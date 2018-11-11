#pragma once
#include <string>
using namespace std;


class person {

private:

	string name;
	string job;
	int age;
	char gender; // either M male or F female  
	int identification; // drivers license number or SS number 

public:
	person(); // empty constructor
	person(string name, int age, char gender, int id);
	virtual ~person();	//destructor
	string getName() const; // added const to be able to use the method in  pilot function doubleFlightHours
	void setName(string name);
	string getJob();
	void setJob(string job);	
	void setAge(int age);
	int getAge() const;
	void setGender(char g);
	char getGender() const;
	int getIdentification() const;
	void setIdentification(int id);
	virtual void print(); // virtual function to be redefined in derived classes
	virtual void printJob() = 0; // pure virtual to make person an abstract class
};