#include<iostream>
#include<vector>
using namespace std;
//
//namespace trys {
//	int a ;
//	float b ;
//	void fill(int temp, float temp2) {
//		a = temp;
//		b = temp2;
//	}
//	void test() {
//		cout << a << endl << b << endl;
//	}
//}
//
//class test {
//public:
//	static test *instance;
//	int temp1;
//	int temp2;
//	test() {
//	//	instance = this;
//	}
//	static void temp() {
//		instance->mains();
//	}
//	virtual void mains();/* {
//		cout << "Mains test\n";
//	}*/
//	test* instant() { return this; }
//
//};
//class b :public test{
//	static test *instance;
//	//static b *insta;
//public:
//	// int a;
//	b() {
//	//	instance
//		instance = instant();
//	//	instance->temp1 = 15;
//	//	insta->
//	}
//	/*void mains() {
//		cout << "Mains b";
//	}*/
//	 
//	static void stat() {
//
//	}
//
//	//static int a;
//};
////b *b::insta = nullptr;
//class c :public test {
//public:
//	static test *instance;
//	int a;
//	c() {
//		instance = instant();
//	//	instance->a = 35;
//	}
//
//	static void stat() {
//	//	cout << instance->a << endl;
//	}
//};
////int c::a = 0;
////int b::a = 0;
//class d {
//};
////int test::a = 0;
//test *test::instance = nullptr;
//test *c::instance = nullptr;
//test *b::instance = nullptr;
//void main() {
//	//test t;
//	b asd;
//	asd.temp();
//	//c dsa;
//	//cout << t.a;
//	//asd.stat();
//	//dsa.stat();
//	//cout << test::a << endl << asd.a << endl << dsa.a << endl;
//	//trys::test();
//	system("pause");
//}
//

struct HWND__ {
	HWND__ (int a) {
		//cout << typeid( T ).name ();
		unused = a;
	}
	int unused;
};

typedef HWND__ *HWND;

HWND__* instance (int b) {
	return new HWND__(b);
}



class derH :public HWND__ {
public:
	derH():HWND__(5){}
	void* operator new( size_t siz) {
		return static_cast< derH* >( instance ( 5 ) );
	}
public:
	int uunused2;
};

derH* instances (int b) {
	return static_cast< derH* >( instance (b) );
}

struct X {
	int x;
	operator int () {
		return x;
	}
};

//bool operator==( X &x1, int a ) {
//	if( x1.x++ == a )return true;
//	return false;
//}

X& operator++( X &x ) {
	x.x++;
	return { x };
}
X operator++(X &x,int z) {
	X temp = x;
	++x;
	return { temp };
}
X operator+( X& x1, X &x2 ) {
	return { x1.x + x2.x };
}
typedef X G;
void main () {
	/*
	HWND h = instance (50);
	
	derH* d = new derH;
	cout<<d->unused <<typeid(derH).name();*/

	G x = { 1 };
	G c;
	//c = x++ + x++ + x++;
/*
	int z = 1;
	cout << z++ + z++ + z++<<endl;
	int temp1 = z++;
	int temp2 = z++;
	int temp3 = z++;
	cout << temp1 + temp2 + temp3;
*/
//	cout << c.x << endl;
	cout << x++ + x++ + x++;
	//cout<<++ x + ++x + ++x;
	//cout << x++++ +x;
	//if( x == 1 && x == 2 && x == 3 )cout << "Success";
	system ( "pause" );
}