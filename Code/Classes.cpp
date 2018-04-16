
#include<iostream>
#include<wchar.h>
#include<string>
#include<memory>
#include<thread>
using namespace std;
//class Derived;
//class Base {
//	friend class Derived;
//public:
//	int Ba;
//	int Bb;
//private:
//	float Bc;
//}_Base;
//
//class Derived :private Base {
//public:
//	static int Da;
//	//friend Base;
//	int Db;
//	float Dc;
//	void flo() {
//		Bc = 34;
//
//	}
//	//static Base __BASE;
//}_Derived;
//int Derived::Da = 4;
//class again :private Derived {
//public:
//	int Daz;
//	int Dbz;
//	float Dcz;
//}_again;
//void main() {
//	std::cout << sizeof(_Base) << std::endl << sizeof(_Derived) << std::endl << sizeof(_again) << std::endl;
//	system("pause");
//}
//class selfHDC;
//
//struct HDC {
//	int unused;
//	operator selfHDC() {
//		return { unused };
//	}
//};
//
//class selfHDC :public HDC {
//public:
//	selfHDC (int a) {
//		unused = a;
//	}
//	operator HDC () {
//		return { unused };
//	}
//	void edit ( int und ) {
//		unused = und;
//	}
//	void print () {
//		cout << unused;
//	}
//};
////
////HDC editHDC ( long ptr ) {
////
////}
//
//void testhdc(HDC h){
//	cout << h.unused * 5 << endl;
//}
//void main () {
//	HDC h1;
//	selfHDC h2;
//	h2.edit ( 10 );
//	h1 = static_cast< HDC >( h2 );
//	cout << h1.unused << endl;
//	//h1.unused = 1;
//	system ( "pause" );
//
//}

//template<class T>
//class base {
//
//public:
//	base ( T* _ins,int a,int b ) {
//		first = a;
//		second = b;
//		inst = _ins;
//	}
//
//	static void fill (int a,int b) {
//		inst->first = a;
//		inst->second = b;
//	}
//
//	static void  WndProc ( int _first, int _second ) {
//		int a = sizeof T;
//		inst->Ini ( _first, _second );
//		inst->OwnWndProc ();
//	}
//
//	virtual void OwnWndProc () = 0;
//
//	void Ini ( int _first, int _second ) {
//		first = _first;
//		second = _second;
//	}
//
//	void print () {
//		cout << endl << first << "   " << second << endl;
//	}
//
//	int first;
//	int second;
//private:
//	static T* inst;
//};
//
//template<class T>
//T* base<T>::inst = NULL;
//
//template<class T>
//class semibase :public base<semibase<T>> {
//public:
//	semibase (int z,int x) :base ( this,z,x ) {
//		fill ( z, x );
//	}
//
//	void play (int a,int b) {
//		this->WndProc ( a, b );
//	}
//
//
//};
//
//class derv1 :public semibase<derv1> {
//public:
//	derv1 () :semibase ( 5, 7 ) {}
//
//	virtual void OwnWndProc ()override {
//		cout << first << endl << second << "derv1\n";
//	}
//	float a[120];
//};
//
//class derv2 :public semibase<derv2> {
//public:
//	derv2():semibase(8,10){}
//	virtual void OwnWndProc ()override {
//		cout << first << endl << second << "derv2\n";
//	}
//	float a[10];
//};
//
//void main () {
//	derv1 d;
//	derv2 d2;
//	//std::
//	//thread t{ d.play ( 56,65 ) };
//	int a = sizeof ( d );
//	d.play ( 56, 65 );
//	d2.play (13,31);
//
//	system ( "pause" );
//}

class base {
public:
	virtual void print(int ){	
	}

	void play (int x) {
		print ( x );
	}
};

class der :public base {
public:
	void print ( int a )override {
		cout << "Hello" << a;
	}
};

void main () {
	der d;
	d.play ( 5 );
	system ( "pause" );
}