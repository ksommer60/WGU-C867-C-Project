#include "student.h"
#include "degree.h"
#include <iostream>
#include <iomanip>
#include <ostream>
#include <string>

using namespace std;

Student::Student() {

	this->studentIdentification = " "; 
	this->studentFirstName = " ";
	this->studentLastName = " ";
	this->studentEmailAddress = " ";
	this->ageOfStudent = 0;
	this->lengthOfClass[0] = 0; 
	this->lengthOfClass[1] = 0;
	this->lengthOfClass[2] = 0; 
	this->studentDegreeProgram = SOFTWARE;
}

Student::Student(string studentIdentification, string studentFirstName, string studentLastName, string studentEmailAddress, int ageOfStudent, int lengthOfClass[], StudentDegreeProgram studentDegreeProgram) {

	this->studentIdentification = studentIdentification;
	this->studentFirstName = studentFirstName;
	this->studentLastName = studentLastName;
	this->studentEmailAddress = studentEmailAddress;
	this->ageOfStudent = ageOfStudent;
	this->lengthOfClass[0] = lengthOfClass[0]; 
	this->lengthOfClass[1] = lengthOfClass[1];
	this->lengthOfClass[2] = lengthOfClass[2];
	this->studentDegreeProgram = studentDegreeProgram;

}

void Student::setstudentIdentification(string studentIdentification) {
	studentIdentification = studentIdentification; 
}

void Student::setstudentFirstName(string studentFirstName) {
	studentFirstName = studentFirstName; 
}

void Student::setstudentLastName(string studentLastName) {
	studentLastName = studentLastName;
}

void Student::setstudentEmailAddress(string studentEmailAddress) {
	studentEmailAddress = studentEmailAddress;
}

void Student::setageOfStudent(int ageOfStudent) {
	ageOfStudent = ageOfStudent;
}

void Student::setlengthOfClass(int index, int value) {
	lengthOfClass[index] = value; 
}

void Student::setstudentDegreeProgram(StudentDegreeProgram studentDegreeProgram) {
	studentDegreeProgram = studentDegreeProgram; 
}

string Student::getstudentIdentification() {
	return studentIdentification; 
}

string Student::getstudentFirstName() {
	return studentFirstName; 
}

string Student::getstudentLastName() {
	return studentLastName; 
}

string Student::getstudentEmailAddress() {
	return studentEmailAddress;
}

int Student::getageOfStudent() {
	return ageOfStudent; 
}

int Student::getlengthOfClass(int index) {
	return lengthOfClass[index]; 
}

StudentDegreeProgram Student::getstudentDegreeProgram()
{
	return studentDegreeProgram;
}

void Student::print()
{
	string studentDegreeProgram[] = { "Security", "Network", "Software" };
	cout << this->getstudentIdentification() << '\t';
	cout << this->getstudentFirstName() << '\t';
	cout << this->getstudentLastName() << '\t';
	cout << this->getstudentEmailAddress() << '\t';
	cout << this->getageOfStudent() << '\t';
	cout << this->getlengthOfClass(0) << ',';
	cout << this->getlengthOfClass(1) << ',';
	cout << this->getlengthOfClass(2) << '\t';
	cout << studentDegreeProgram[this->getstudentDegreeProgram()] << '\n';
}