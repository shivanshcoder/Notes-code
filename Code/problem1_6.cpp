#include<iostream>
using namespace std;

bool check_odd(int num) {
	return ((num & 0x1) ? 1 : 0);
}

void main() {
	int x;
	x = 10, 12, 23;
	cout << ~1<<endl;
	system("pause");
}