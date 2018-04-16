#include <stdio.h>
#include <conio.h>
#include <iostream>

using namespace std;

int result;

class B;
class A {
	int Num1;

public:
	friend void Sum ( A, B );
	void getdata ( int p ) {
		Num1 = p;
	}

	void display ();


};

class B {
	int Num2;

public:
	friend void Sum ( A, B );
	void getdata ( int q ) {
		Num2 = q;
	}

};

void  Sum ( A a, B b ) {

	result = a.Num1 + b.Num2;


}

void A::display () {
	cout << "The Summ of Integers of diff class"; cout << result;
}



void main () {
	A obj1;
	B obj2;
	obj1.getdata ( 12 );
	obj2.getdata ( 14 );
	Sum ( obj1, obj2 );
	obj1.display ();
	system ( "pause" );
}