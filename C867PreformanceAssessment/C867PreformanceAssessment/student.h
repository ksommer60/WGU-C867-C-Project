#pragma once
#include "degree.h"
#include <string>
using namespace std;

class Student
{
public:

	Student();
	Student(string studentIdentification, string studentFirstName, string studentLastName, string studentEmailAddress, int ageOfStudent, int lengthOfClass[], StudentDegreeProgram studentDegreeProgram);

	string getstudentIdentification();
	string getstudentFirstName();
	string getstudentLastName();
	string getstudentEmailAddress();
	int getageOfStudent();
	int getlengthOfClass(int index);
	StudentDegreeProgram getstudentDegreeProgram();

	void setstudentIdentification(string studentIdentification);
	void setstudentFirstName(string studentFirstName);
	void setstudentLastName(string studentLastName);
	void setstudentEmailAddress(string studentEmailAddress);
	void setageOfStudent(int ageOfStudent);
	void setlengthOfClass(int index, int value);
	void setstudentDegreeProgram(StudentDegreeProgram studentDegreeProgram);

	void print();

private: 

	string studentIdentification;
	string studentFirstName;
	string studentLastName;
	string studentEmailAddress;
	int ageOfStudent;
	int lengthOfClass[3];
	StudentDegreeProgram studentDegreeProgram; 

};

