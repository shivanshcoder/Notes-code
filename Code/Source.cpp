#include<iostream>
using namespace std;
//class lPARAM;

class HWND {
public:
	HWND(int n):hwnd(n){}
	
	
	/*void operator=( lPARAM l ) {
		hwnd = l.reserve;
	}*/

	void print () {
		cout << hwnd;
	}
private:
	int hwnd;
};

class HWND2 {
public:
	HWND2 ( int n ) :hwnd ( n ) {}


	/*void operator=( lPARAM l ) {
	hwnd = l.reserve;
	}*/

	void print2 () {
		cout << hwnd;
	}
private:
	int hwnd;
};

class lPARAM {

public:
	lPARAM(int n):reserve(n){}
	void printl () {
		cout << reserve;
	}
	explicit operator HWND() {
		return HWND ( reserve );
	}
	short reserve;
private:
};





void main () {
	lPARAM low ( 5 );
	HWND h ( 10 );
	//h = low;
	static_cast< HWND >( low ).print ();
	system ( "pause" );
	//system ( "pause" );
	//h = ( HWND ) low;
	//long t = (lPARAM)(&h);
	//long t = dynamic_cast< long >( &h );
//	h = dynamic_cast< HWND >( low );
	//(static_cast< lPARAM >( h )).printl ();
}
