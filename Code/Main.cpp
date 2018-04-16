#include<iostream>
#include<fstream>
using namespace std;
//
//
//void test ();
//class base {
//	friend void test ();
//	base (int a) {
//		cout << "\nPrivate Base called\n";
//	}
//
//public:
//	base () {
//		cout << "Default called";
//	}
//
//private:
//	int a;
//	int b;
//
//};
//
//void test () {
//	base b ( 2 );
//
//}
//=


#include<string>

void flip_pancakes ( string& s, int flip_size, int index ) {
	//if( index + flip_size >= s.size () )return false;

	for( int i = index; i <= flip_size; ++i ) {
		if( s[i] == '+' )
			s[i] = '-';
		else
			s[i] = '+';
	}
	//return true;
}

void crawler ( string& line, int flipper_size ) {
	for( int i = 0; i <= line.size () - flipper_size; ++i ) {
		if( line[i] == '-' ) {
			flip_pancakes ( line, flipper_size, i );
		}
	}
}

void main () {
	int test_case;
	cin >> test_case;

	while( test_case-- ) {
		string line;
		cin >> line;

		int flipper_size;
		cin >> flipper_size;


	}

	system ( "pause" );
}