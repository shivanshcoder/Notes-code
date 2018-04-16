/*
	Program 6
	Concept of Function Overloading Explained
*/
#define _CRT_SECURE_NO_WARNINGS

#include<iostream>

using namespace std;

void printNumber ( int a ) {
	cout << a << " a Integer!\n";
}

void printNumber ( float a ) {
	cout << a << " a Floating point!\n";
}

class DemoClass {
public:
	void print(int a) {
		cout << a << " a Integer!\n";
	}

	void print ( float a ) {
		cout << a << " a Floating point!\n";
	}

	void print ( char a ) {
		cout << a << " a Character!\n";
	}

	void print ( char *string ) {
		cout << string << " a string!\n";
	}
};

void main () {
	printNumber ( 1 );
	printNumber ( 10.0f );

	DemoClass DC;

	DC.print ( "Hello" );
	DC.print ( 'a' );
	DC.print ( 100 );
	DC.print ( 9.0f );

	system ( "pause" );
}