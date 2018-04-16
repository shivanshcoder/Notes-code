/*
	Program 9
	Use of Multilevel Programming Shown using example
*/
/*
						MULTILEVEL INHERITANCE

								person
								   |
								student
								   |
								Schoolid

*/

#define _CRT_SECURE_NO_WARNINGS

#include<iostream>
#include<conio.h>
using namespace std;


class person {
public:
	void fill () {
		fillName ();
		fillBirthyear ();
	}

	void displayperson () {
		cout << "Name:" << Name
			<< endl << "Age:" << calc_age ();
	}

protected:
	void fillName () {
		cout << "Enter Name:";
		cin >> Name;
	}

	void fillBirthyear () {
		cout << "Enter your birth year:";
		cin >> Birthyear;
	}
	int calc_age () {
		return currentyear - Birthyear;
	}

private:
	char Name[20];
	int Birthyear;
	const int currentyear = 2018;
};

class student :public person{
public:
	
	void displaystudent () {
		displayperson ();
		cout << endl << "Class:" << Class
			<< endl << "School Name:" << SchoolName;
	}

protected:
	void fillClass () {
		cout << "Enter the Class:";
		cin >> Class;
	}
	void fillSchoolName () {
		cout << "Enter the School name:";
		cin >> SchoolName;
	}

	int Class;
private:
	int RollNum;
	//Assuming class is from 1st to 12th
	char SchoolName[50];
};

class SchoolId :public student{
public:

	SchoolId () {
		fillName ();
		fillBirthyear ();
		fillClass ();
		fillSchoolName ();
		fillAdmissionNum ();
	}

	void displaySchoolId () {
		displaystudent ();
		cout << endl << "Admission Number:" << AdmissionNumber
			<< endl << "Your Fees:" << calc_fees (Class);
	}
protected:
	void fillAdmissionNum () {
		cout << "Enter your Admission Number:";
		cin >> AdmissionNumber;
	}

	int calc_fees (int Class) {
		Fees = 1000 * Class;
		return Fees;
	}

private:
	int AdmissionNumber;
	int Fees;
};


void main () {

	cout << endl; 

	SchoolId s;

	cout << endl;
	cout << endl;

	s.displaySchoolId ();
	
	cout << endl;
	_getch ();
}