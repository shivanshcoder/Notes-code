/*
	Program 10
	Use of Multiple Inheritance shown using example
*/
/*
						MULTIPLE INHERITANCE
					person			   SchoolId
							\		/
							 student
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

class SchoolId {

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

class student :public person, public SchoolId{
public:
	student () {
		fillName ();
		fillBirthyear ();
		fillClass ();
		fillSchoolName ();
		fillAdmissionNum ();
	}

	void displaystudent () {
		displayperson ();
		cout << endl << "Class:" << Class
			<< endl << "School Name:" << SchoolName
			<< endl << "Your calculated fees:" << calc_fees (Class);
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

private:
	int RollNum;

	//Assuming class is from 1st to 12th
	int Class;
	char SchoolName[50];
};

void main () {
	person p;
	p.fill ();

	cout << endl;

	student s;

	cout << endl;

	p.displayperson ();

	cout << endl;

	s.displaystudent ();
	cout << endl;

	_getch ();
}