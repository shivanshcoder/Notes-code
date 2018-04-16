#include<iostream>
#include<memory>
#include<string>
using namespace std;

class name {
public:
	name ( unique_ptr<string>temp ) {
		ptr = move ( temp );
	}
	name ( shared_ptr<string>temp ) {
		ptr2 = temp;
	}
	void print () {
		cout << *ptr << endl;
	}
	void print2 () {
		cout << *ptr2 << endl;
	}
	unique_ptr<string>ptr;
	shared_ptr<string>ptr2;
};

void main () {
	name n ( make_unique<string> ( "HEllo" ) );
	name n2 ( make_shared<string> ( "Bye" ) );
	n.print ();
	n2.print2 ();
	system ( "pause" );
}
