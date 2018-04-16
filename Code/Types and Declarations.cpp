#include<iostream>

using namespace std;
void main() {
	unsigned char c1 = 64;//Valid
	unsigned char c2 = 1256; //TRUNCATION and implementation defined!!

	//cout << int{ c2 };
	cout << 0xf << endl;
	cout << hex << 0xf << 23215;
	system("pause");
}