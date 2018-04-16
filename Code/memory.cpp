#include<iostream>
#include<memory>
#include<string>
#include"Header.h"
using namespace std;

#define type string

//class derived2;
//class derived1;
//template<class T>class base;

//
//template<class T>class semi_derv :public base<T> {
//public:
//	semi_derv (unique_ptr<T>val, int snum ) :base ( move(val), snum ) { 
//		var = snum; 
//	}
//	void sprint () { cout << 'a' << var << 'a'; }
//	static int var;
//};
//template<class T>int semi_derv<T>::var = 0;
//
////class derived2 :public base<derived2> {
////public:
////	derived2():base(unique_ptr<derived2>(this),2){
////		fill ( 2, 5 );
////	}
////
////};
////
////class derived1 :public base<derived1> {
////public:
////	derived1():base( unique_ptr<derived1> ( this ),1){
////		fill ( 3, 4 );
////	}
////
////};
//
//class derived1 :public semi_derv<derived1> {
//public:
//	derived1 ( int nu = 1 ) :semi_derv ( unique_ptr<derived1> ( this ), nu ) { fill ( 2, 3 ); }
//};
//
//class derived2 :public semi_derv<derived2> {
//public:
//	derived2 () :semi_derv ( unique_ptr<derived2> ( this ), 2 ) { fill ( 3, 4 ); }
//};
//
//class derived3 :public base<derived3> {
//public:
//	derived3 ( int tr ):base(unique_ptr<derived3>(this),tr) {
//		fill ( 4, 5 );
//	}
//};
//
//void main () {
//	
//	derived1 d1;
//	///derived1 d3 ( 9 );
//	derived2 d2;
//	derived3 d3 ( 3 );
//	d1.print ();
//	d2.print ();
//	d3.print ();
//	d1.sprint ();
//	d2.sprint ();
//	d1.use ( 1, 1 );
//	d2.use ( 2, 2 );
//	d3.use ( 3, 3 );
//	system ( "pause" );
//
//}


class semi_derv :public base<semi_derv> {
public:
	semi_derv (  int snum ) :base ( unique_ptr<semi_derv>(this), snum ) {
		var = snum;
	}
	void sprint () { cout << 'a' << var << 'a'; }
	static int var;
};
int semi_derv::var = 0;


class derived1 :public semi_derv {
public:
	derived1 ( int nu = 1 ) :semi_derv (  nu ) { fill ( 2, 3 ); }
};

class derived2 :public semi_derv {
public:
	derived2 () :semi_derv ( 2 ) { fill ( 3, 4 ); }
};

class derived3 :public base<derived3> {
public:
	derived3 ( int tr ) :base ( unique_ptr<derived3> ( this ), tr ) {
		fill ( 4, 5 );
	}
};

void main () {

	derived1 d1;
	///derived1 d3 ( 9 );
	derived2 d2;
	derived3 d3 ( 3 );
	d1.print ();
	d2.print ();
	d3.print ();
	d1.sprint ();
	d2.sprint ();
	d1.use ( 1, 1 );
	d2.use ( 2, 2 );
	d3.use ( 3, 3 );
	system ( "pause" );

}