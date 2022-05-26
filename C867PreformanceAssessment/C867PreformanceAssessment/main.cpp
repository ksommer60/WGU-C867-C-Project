// C867PreformanceAssessment.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string> 
#include "degree.h"
#include "roster.h"
#include "student.h"

using namespace std;


int main() {

	const string studentData[] =
	{ "A1,John,Smith,John1989@gm ail.com,20,30,35,40,SECURITY",
	"A2,Suzan,Erickson,Erickson_1990@gmailcom,19,50,30,40,NETWORK",
	"A3,Jack,Napoli,The_lawyer99yahoo.com,19,20,40,33,SOFTWARE",
	"A4,Erin,Black,Erin.black@comcast.net,22,50,58,40,SECURITY",
	"A5,Kevin,Sommer,ksomme6@wgu.edu,25,28,35,44,SOFTWARE"
	}; 

	cout << "C867 Scripting and Programming - Applications, C++, 001030926, Kevin Sommer" << endl;

	Roster classRoster; 


	classRoster.printAll();


	classRoster.printInvalidEmails();



	//loop through classRosterArray and for each element:

	classRoster.printAverageDaysInCourse(/*current_object's student id*/);



	classRoster.printByDegreeProgram(SOFTWARE);

	classRoster.remove("A3");

	classRoster.printAll();

	classRoster.remove("A3"); {
		cout << "Student with ID of A3 was not found" << endl; 
	}


}







