/*
	Program 7
	The Effect of Inheritance 
	on Constructors of classes
*/

/*
							   INHERITANCE

								Superbase
							/				\
						base1				base2
					/			\		/			\
				derived1	  common_derived	  derived2

*/


#include<iostream>
#include<conio.h>

using namespace std;

class superbase {
public:
	superbase () {
		cout << "Super Base Default Constructor called\n";
	}

	superbase (int a) {
		cout << "Super Base Arguement Constructor called\n";
	}
};

class base1 :public superbase {
public:
	base1 (int a) :superbase () {
		cout << "Base1 Consructor called\n";
	}
};

class base2 :public superbase {
public:
	base2 () :superbase (5) {
		cout << "Base2 Constructor called\n";
	}
};

class derived1 :public base1 {
public:
	derived1 ():base1(2) {
		cout << "Derived1 Contructor called\n";
	}
};

class derived2 : public base2 {
public:
	derived2 () :base2 () {
		cout << "Derived2 Constructor called\n";
	}
};

class common_derived :public base1, public base2 {
public:
	common_derived () :base1 (4), base2 () {
		cout << "Common Derived Constructor called\n";
	}
};

void main () {
	common_derived a;

	cout << "\n\n\n";
	derived1 d1;

	cout << "\n\n\n";
	derived2 d2;
	_getch ();
}