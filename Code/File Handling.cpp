/*
	Program 16
	Data File Handling Explained using prize Calculation Program
*/

#include<fstream>
#include<iostream>
#include<conio.h>
using namespace std;

class Prize_Calculator {

public:
	Prize_Calculator ();

	//Calculates and returns a token number
	void Calculate ();

	//Finds the Eligible prize through the token provided
	void Search_Prize ();

protected:
	void display_prize ();
private:
	char name[20];
	int age;
	int favourite_num;
	int prize_amount;

	int current_token_number;
};

Prize_Calculator::Prize_Calculator () {
	cout << "Please Enter your name:";
	cin >> name;

	cout << "Please Enter your Age:";
	cin >> age;

	cout << "Please Enter your Favourite number:";
	cin >> favourite_num;
}

void Prize_Calculator::Calculate () {
	
	ofstream out ("Data.txt", ios::app);
	out << endl;

	out << name << endl
		<< age << endl
		<< rand () % (favourite_num*age) << endl;
	out.close ();
}

void Prize_Calculator::Search_Prize () {
	system ("cls");
	cout << "Search Prize!!\n";
	char _name[20];
	
	cout << "Enter your Name:";
	cin >> _name;
	
	ifstream input ("Data.txt",ios::in);
	
	system ("cls");

	while (!input.eof()) {
		input >> name >> age >> prize_amount;

		if (!strcmp (name, _name)) {
			cout << "Match Found\n";
			display_prize ();
			break;
		}
	}
}

void Prize_Calculator::display_prize () {
	cout << "Name: " << name << endl
		<< "Age: " << age << endl
		<< "Prize: Rs " << prize_amount;
}

void main () {
	Prize_Calculator p;
	p.Calculate ();
	p.Search_Prize ();
	_getch ();
}