/*
	Program 11
	Program to show how to make opertors for a class
*/
#define _CRT_SECURE_NO_WARNINGS

#include<iostream>
using namespace std;


class strings {
public:
	strings(const char *str){
		index = strlen ( str );
		strcpy ( _string, str );
	}

		strings& operator+( const char *str ) {
			if( index + strlen ( str ) >= 40 ) {
				cout << "Error!!";
				return *this;
			}
			strcpy ( &_string[index], str );
			
			//Returns the reference of the object
			return *this;
		}

	void display () {
		cout << _string;
	}
	
private:
	int index;
	char _string[40];
};

void main () {
	strings s ( "Hello" );

	s = s + " World";

	s.display ();
	system ( "pause" );
}