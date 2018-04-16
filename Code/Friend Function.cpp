/*
	Program 5
	Use of Friend Functions in classes
	Classes can also be friends though
*/
#define _CRT_SECURE_NO_WARNINGS

#include<iostream>

using namespace std;


class student {
public:
	void fill ( int rollno, const char *name, int birthyear );
	void display ();

	//This function can access private members of student class also
	friend int calculate_age ( student s );
private:
	int RollNo;
	char Name[20];
	int Birthyear;
};

void student::fill ( int rollno, const char *name, int birthyear ) {
	RollNo = rollno;
	Birthyear = birthyear;
	strcpy ( Name, name );
}


void student::display () {
	cout << "Roll Number:" << RollNo << endl
		<< "Name:" << Name << endl;
}

int calculate_age ( student s ) {
	return 2018 - s.Birthyear;
}


void main () {
	student s;
	s.fill ( 1, "Saurabh", 1997 );
	cout << "Saurabh is " << calculate_age ( s ) << " years old.";
	system ( "pause" );
}