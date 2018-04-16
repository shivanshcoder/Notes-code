/*
	Program 3 
	Class for storing Date and few manipulation functions
*/

#include<iostream>
#include<conio.h>
using namespace std;

class Date {
public:
	
	//Arguement Cosntructor
	Date (int _day, int _month, int _year)
		:day (_day), month (_month), year (_year) {}
	
	//Default Constructor
	Date()
		:day(ini_day),month(ini_month),year(ini_year){}

	Date& operator++();

	void display ();

protected:
	void inc_year();
	void inc_month();
	void inc_day();

	int number_of_days ();
	
	bool end_of_month (int _date);

private:

	const static int ini_day = 1;
	const static int ini_month = 1;
	const static int ini_year = 1990;
	int day, month, year;
};

//Function to return Number of days in a month
int Date::number_of_days () {
	switch (month) {
	case 1: case 3: case 5: case 7: case 8: case 10: case 12:
		return 31;

	case 2:
		if (year % 400 == 0)return 29;
		else return 28;

	default:
		return 30;
	}
}

//Checks if the Date is last date of the month
bool Date::end_of_month (int _date) {
	switch (month) {
	case 1: case 3: case 5: case 7: case 8: case 10: case 12:
		if (_date == 31)return true;
		else return false;

	case 2:
		if (year % 4 == 0) {
			if (_date == 29)
				return true;
			else 
				return false;
		}
		else if (_date == 28)
			return true;
		return false;

	default:
		if (_date == 30)return true;
		else return false;
	}
}

//Increments Day
void Date::inc_day () {
	if (end_of_month (day)) {
		inc_month ();
		day = 1;
	}
	else
		day++;
}

//Increments Month
void Date::inc_month () {
	if (month == 12) {
		inc_year ();
		month = 1;
	}
	else
		month++;
}

//Increments Year
inline void Date::inc_year () {
	year++;
}

//Defined ++Opertator
inline Date& Date::operator++() {
	inc_day ();
	return *this;
}

void Date::display () {
	cout << day << ':' << month << ':' << year << endl;
}

void main () {
	Date d (30, 1, 2000);
	for (int i = 0; i < 10; ++i) {
		++d;
		cout << "\nDate incremented once";
		d.display ();
	}
	//d.display ();
	_getch ();
}