#include<stdio.h>
#include<conio.h>
#include<iostream>
using namespace std;
#define x_size 40
#define y_size 40
struct POINT { long x; long y; };

bool is_prime(unsigned long num) {
	if (num < 2)return false;
	else if (num == 2)return true;
	if (num % 2 == 0)return false;
	for (unsigned long n = 3; n < num; n += 2) if (!(num%n))return false;
	return true;
}

void set_array(char arr[x_size][y_size], POINT p,char val) {
	arr[x_size/2 + p.x][y_size/2 + p.y] = val;
}

void start_spiral(char arr[x_size][y_size], int max_num = x_size*y_size) {
	POINT p{ 0,0 };
	long number = 1;
	int incre = 1;   //increment or decrement value
	int num_incre = 1;   //number of times values have to be changed
	while (number < max_num) {  //Maximum number based on number of pixels

		for (int i = 0; i < num_incre&&p.x<x_size/2; ++i, number++) {
			if (is_prime(number)) {  //checks if the current number is prime
			//	SetPixel(hdc, p.x, p.y, RGB(0, 0, 255));  //sets the pixel color blue
				set_array(arr, p, '*');
			}
			else set_array(arr, p, ' ');
			p.x += incre;  //increments or decrements value of point
		}
		for (int i = 0; i < num_incre&&p.y<y_size; ++i, number++) {
			if (is_prime(number)) {
			//	SetPixel(hdc, p.x, p.y, RGB(0, 0, 255));
				set_array(arr, p, '*');
			}
			else set_array(arr, p, ' ');
			p.y += incre;
		}
		//_getch();
		num_incre++; //number of increments are increased after every turn of spiral
		incre *= (-1);  //number of increments are increased after every 2 turn of spiral
	}
}

void main() {
	char arr[x_size][y_size];
	start_spiral(arr);
	for (int i = 0; i < x_size; ++i) {
		for (int j = 0; j < y_size; ++j)
			cout << arr[j][i] << " ";
		cout << endl;
	}
	cout << endl;
	system("pause");
}