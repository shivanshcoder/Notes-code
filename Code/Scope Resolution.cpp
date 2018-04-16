/*
	Program 13
	Use of Scope Resolution in this Program of studnet class
*/
#define _CRT_SECURE_NO_WARNINGS

#include<iostream>
using namespace std;


class student {
public:
	void fill ( int rollno, const char *name );
	void display ();
private:
	int RollNo;
	char Name[20];
};

student student_var;

//Scope Resolution used to define the class memeber functions outside the class
void student::fill ( int rollno, const char *name ) {
	RollNo = rollno;
	strcpy ( Name, name );
}

//Scope Resolution used to define the class memeber functions outside the class
void student::display () {
	cout << "Roll Number:" << RollNo << endl;
	cout << "Name:" << Name << endl;
}


void main () {
	student student_var;
	
	//Local variable is used
	student_var.fill ( 1, "Saurabh" );
	
	//Global variable is used
	::student_var.fill ( 1, "Sahil" );

	//Local variable is used
	student_var.display();

	//Global variable is used
	::student_var.display ();

	system ( "pause" );
}