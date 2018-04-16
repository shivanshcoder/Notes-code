#define _CRT_USE_NO_WARNINGS

//Single Inheritance

#include<iostream>

using namespace std;

class super_base {

public:
	int pub_base;
	
	void pub_func_base () {
		cout << "pub_func_base\n";
	}

	void test_base () {

	}

protected:
	int proc_base;
	
	void proc_func_base () {
		cout << "proc_func_base\n";
	}


private:
	int priv_base;
	
	void priv_func_base () {
		cout << "priv_func_base\n";
	}

};


class derived : public super_base {
public:
	int pub_der;
	
	void pub_func_der () {
		cout << "pub_func_der\n";
	}
	
	void test_der () {

	}
protected:
	int proc_der;
	
	void proc_func_der () {
		cout << "proc_func_der\n";
	}

private:
	int priv_der;
	
	void priv_func_der () {
		cout << "priv_func_der\n";
	}

};

