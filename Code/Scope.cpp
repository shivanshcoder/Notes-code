#include<iostream>

using namespace std;

class base {
public:
	base ( int a ) {
		cout << "Constructed\n";
		res = a;
	}

	~base () {

		cout << "\nDestructed\n";
	}

	int res;
private:
};

void test ( base a ) {
	cout << a.res << endl;
}

void main () {
	test ( base ( 4 ) );
	system ( "pause" );
}