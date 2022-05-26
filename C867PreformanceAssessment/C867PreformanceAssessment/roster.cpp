#include "roster.h"
#include "student.h"
#include "degree.h"
#include <iostream>
using namespace std;


void Roster::parse(string studentData) {

	size_t rhs = studentData.find(",");
	string studentIdentification = studentData.substr(0, rhs); 
	
	size_t lhs = rhs + 1;
	rhs = studentData.find(",", lhs); 
	string studentFirstName = studentData.substr(lhs, rhs - lhs);

	lhs = rhs + 1; 
	rhs = studentData.find(",", lhs);
	string studentLastName = studentData.substr(lhs, rhs - lhs);

	lhs = rhs + 1;
	rhs = studentData.find(",", lhs);
	string studentEmailAddress = studentData.substr(lhs, rhs - lhs);

	lhs = rhs + 1; 
	rhs = studentData.find(",", lhs);
	int ageOfStudent = stoi(studentData.substr(lhs, rhs - lhs)); 

	lhs = rhs + 1; 
	rhs = studentData.find(",", lhs);
	int daysInCourse1 = stoi(studentData.substr(lhs, rhs - lhs));
	
	lhs = rhs + 1;
	rhs = studentData.find(",", lhs);
	int daysInCourse2 = stoi(studentData.substr(lhs, rhs - lhs)); 
	
	lhs = rhs + 1;
	rhs = studentData.find(",", lhs);
	int daysInCourse3 = stoi(studentData.substr(lhs, rhs - lhs));

	lhs = rhs + 1;
	rhs = studentData.find(",", lhs);
	string strStudentDegreeProgram = studentData.substr(lhs, rhs - lhs);

	StudentDegreeProgram studentDegreeProgram = StudentDegreeProgram::SOFTWARE;

	if (strStudentDegreeProgram == "SECURITY") {
		studentDegreeProgram = StudentDegreeProgram::SECURITY;
	}
	else if (strStudentDegreeProgram == "NETWORK") {
		studentDegreeProgram = StudentDegreeProgram::NETWORK;
	}
	else if (strStudentDegreeProgram == "SOFTWARE") {
		studentDegreeProgram = StudentDegreeProgram::SOFTWARE;
	}
	add(studentIdentification, studentFirstName, studentLastName, studentEmailAddress, ageOfStudent, daysInCourse1, daysInCourse2, daysInCourse3, studentDegreeProgram); 

 }

void Roster::add(string studentIdentification, string studentFirstName, string studentLastName, string studentEmailAddress, int ageOfStudent, int daysInCourse1, int daysInCourse2, int daysInCourse3, StudentDegreeProgram studentDegreeProgram) {
	
	bool found = false; 

	for (int i = 0; i < 5; i++) {
		if (classRosterArray[i]->getstudentIdentification() == " ") {
			classRosterArray[i]->setstudentIdentification(studentIdentification);
			classRosterArray[i]->setstudentFirstName(studentFirstName);
			classRosterArray[i]->setstudentLastName(studentLastName);
			classRosterArray[i]->setstudentEmailAddress(studentEmailAddress);
			classRosterArray[i]->setageOfStudent(ageOfStudent);
			classRosterArray[i]->setlengthOfClass(0, daysInCourse1);
			classRosterArray[i]->setlengthOfClass(1, daysInCourse2);
			classRosterArray[i]->setlengthOfClass(2, daysInCourse3);
			classRosterArray[i]->setstudentDegreeProgram(studentDegreeProgram);
			found = true;
			break; 
		}
	}
	if (!found) {
		cout << "Student not found in roster." << endl; 
	}
}

Roster::Roster() {
	for (int i = 0; i < 5; i++) {
		classRosterArray[i] = new Student();
	}
}
Roster::~Roster() {
	for (int i = 0; i < 5; i++) {
		delete classRosterArray[i];
	}
}

void Roster::remove(string studentID) {
	
	bool found = false;

	for (int i = 0; i < 5; i++) {
		if (classRosterArray[i]->getstudentIdentification() == studentID) {
			classRosterArray[i]->setstudentIdentification(" ");
			classRosterArray[i]->setstudentFirstName(" ");
			classRosterArray[i]->setstudentLastName(" ");
			classRosterArray[i]->setstudentEmailAddress(" ");
			classRosterArray[i]->setageOfStudent(0);
			classRosterArray[i]->setlengthOfClass(0, 0);
			classRosterArray[i]->setlengthOfClass(1, 0);
			classRosterArray[i]->setlengthOfClass(2, 0);
			classRosterArray[i]->setstudentDegreeProgram(SOFTWARE);
			found = true;
			break;
		}
	}
	if (!found) {
		cout << "Student not found in roster." << endl;
	}
}

void Roster::printAll() {

	for (int i = 0; i < 5; i++) {
		classRosterArray[i]->print();
	}
}

void Roster::printAverageDaysInCourse(string studentID) { 
	for (int i = 0; i < 5; i++) {
		if (classRosterArray[i]->getlengthOfClass(0)) {
			cout << classRosterArray[i]->getlengthOfClass(int value);
		}
		if (classRosterArray[i]->getlengthOfClass(1)) {
			cout << classRosterArray[i]->getlengthOfClass(int value);
		}
		if (classRosterArray[i]->getlengthOfClass(2)) {
			cout << classRosterArray[i]->getlengthOfClass(int value);
		}
	}
}

void Roster::printInvalidEmails() { 
	
	bool isValid = true; 
	
	for (int i = 0; i < 5; i++) {
		if (classRosterArray[i]->getstudentEmailAddress().find('@')) {
			isValid; 
		}
		if (classRosterArray[i]->getstudentEmailAddress().find(' ')) {
			isValid = false; 
			cout << "Invalid email student email address" << endl; 
		}
		if (classRosterArray[i]->getstudentEmailAddress().find('.')) {
			isValid;
		}
		if (classRosterArray[i]->getstudentEmailAddress().find('.')) { //if . is not found 
			isValid = false; 
			cout << "Invalid email student email address" << endl;
		}
	}
}

void Roster::printByDegreeProgram(StudentDegreeProgram studentDegree) { //loop through 

	StudentDegreeProgram studentDegreeProgram = StudentDegreeProgram::SOFTWARE; 

	for (int i = 0; i < 5; i++) {
		if (studentDegreeProgram == "Network") {
			cout << StudentDegreeProgram::NETWORK; 
		}
		if (studentDegreeProgram == "Security") {
			cout << StudentDegreeProgram::SECURITY;
		}
		if (studentDegreeProgram == "Software") {
			cout << StudentDegreeProgram::SOFTWARE;
		}
	}
}