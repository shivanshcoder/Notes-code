#define  _CRT_SECURE_NO_WARNINGS

#include<iostream>
#include<conio.h>

using namespace std;

class error_class {
public:
	error_class (char *Error_name) {
		cout << Error_name;
	}

};

void main () {

	int a;
	cin >> a;
	try {
		if (a != 0)

			cout << 10 / a;
		else
			throw error_class ("Divide By Zero");
	}
	catch (error_class error) {
		//Handle the Error
	}
	_getch ();
}
