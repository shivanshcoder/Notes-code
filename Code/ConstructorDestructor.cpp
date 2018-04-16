/*
	Program 2 
	Simple Class, Constructors and Destructors use shown
*/
#define CRT_USE_NO_WARNING

#include<iostream>

using namespace std;


class DemoClass {
public:
	
	//Can be called to create object anywhere
	DemoClass () {
		cout << "Public Default Constructor called!\n";
	}

	//Can be called to create object anywhere
	DemoClass ( int a ) {
		cout << "Public Arguement Constructor called!\n" << a;
	}

	//Destroys the object
	~DemoClass () {
		cout << "Destructor called!\n";
	}

protected:
	//Can only be called by a inherited class or friend class or friend function 
	DemoClass ( float a ) {
		cout << "Protected Arguement Constructor called!\n" << a;
	}

private:
	//Can only be called by friend class or friend function 
	DemoClass ( char a ) {
		cout << "Private Arguement Constructor called!\n" << a;
	}
};


void main () {

	//New scope Made so that Destructor call can be seen
	{
		DemoClass first;
		DemoClass Second (1);
	}
	system ( "pause" );
}