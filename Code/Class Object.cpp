/*
	Program 1
	Making a small class and its object
	Using simple flling and display functions
*/
#define _CRT_SECURE_NO_WARNINGS

#include<iostream>
using namespace std;


class student {
public:

	void fill ( int rollno,const char *name ) {
		RollNo = rollno;
		strcpy ( Name, name );
	}

	void display () {
		cout << "Roll Number:" << RollNo << endl;
		cout << "Name:" << Name << endl;
	}
private:

	int RollNo;
	char Name[20];

};


void main () {
	student s;
	s.fill ( 1, "Saurabh" );
	s.display ();
}