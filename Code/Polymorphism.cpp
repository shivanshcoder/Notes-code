/*
Program 15
Polymorphism Explained and use of virtual functions
*/

#include <iostream> 
using namespace std;

class Shape {
protected:
	int width, height;

public:
	Shape (int a = 0, int b = 0) {
		width = a;
		height = b;
	}
	virtual int area () {
		cout << "Parent class area :" << endl;
		return 0;
	}
};


class Rectangle : public Shape {
public:
	Rectangle (int a = 0, int b = 0) :Shape (a, b) { }

	int area () {
		cout << "Rectangle class area :" << (width * height) << endl;
		return (width * height);
	}
};

class Triangle : public Shape {
public:
	Triangle (int a = 0, int b = 0) :Shape (a, b) { }

	int area () {
		cout << "Triangle class area :" << (width * height / 2);
		return (width * height / 2);
	}
};

class Circle : public Shape {
public:
	Circle (int a) :Shape (a, a) {}

	int areas () {
		cout << "Circle class area :" << (3.14 * width * height) << endl;
		return 3.14 * width * height;
	}
};


int main () {
	Shape *shape;
	Rectangle rec (10, 7);
	Triangle  tri (10, 5);
	Circle cir (5);
	// store the address of Rectangle
	shape = &rec;

	// call rectangle area.
	shape->area ();

	// store the address of Triangle
	shape = &tri;

	// call triangle area.
	shape->area ();

	//store the address of Circle
	shape = &cir;

	//Calls parent class area function
	shape->area ();

	//Prints area
	cir.areas ();

	return 0;
}