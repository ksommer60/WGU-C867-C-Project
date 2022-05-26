#pragma once
#include <iostream>
#include "student.h"
#include <string>
using namespace std;

class Roster
{

public:

	
	void add(string studentIdentification, string studentFirstName, string studentLastName, string studentEmailAddress, int ageOfStudent, int daysInCourse1, int daysInCourse2, int daysInCourse3, StudentDegreeProgram studentDegreeProgram);
	void printAll();
	void remove(string studentID); 
	void printAverageDaysInCourse(string studentID);
	void printInvalidEmails(); 
	void printByDegreeProgram(StudentDegreeProgram studentDegreeProgram);
	void parse(string studentData); 
	~Roster();
	

private: 

	Student* classRosterArray[5]; 

};

