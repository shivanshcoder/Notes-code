/*
	Program 12
	A Random Program to generate points for ULAM spiral
	It generates unique points for every prime number
*/

#include<iostream>
#include<conio.h>
using namespace std;

struct POINT {
	long x;
	long y;
};

bool is_prime (unsigned long num);

void start_spiral() {
	POINT p{ 0,0 };

	//The variable which is checked if it is a prime number or not
	long number = 1;
	int incre = 1;
	int num_incre = 1;

	//According to Resolution of screen
	while (number < 1920 * 1080) {
		
		for (int i = 0; i < num_incre; ++i,number++) {

			if (is_prime(number)) {
				cout << endl << number << "X   x:" << p.x << "   y:" << p.y;
			}
			//Moves the point on x-Axis
			p.x += incre;
		}
		for (int i = 0; i < num_incre; ++i,number++) {

			if (is_prime(number)) {
				cout << endl << number << "Y   x:" << p.x << "   y:" << p.y;
			}
			//Moves the point on y-Axis
			p.y += incre;
		}

		//So that the points go in increasing square width pattern
		num_incre++;

		//For changing the direction of incrementing points
		incre *= (-1);
	}
}

bool is_prime (unsigned long num) {

	if (num < 2 || num % 2 == 0)
		return false;
	else if (num == 2)
		return true;

	for (unsigned long n = 3; n < num; n += 2)
		if (!(num % n))
			return false;

	return true;
}

void main() {
	start_spiral();
}