#include<iostream>

using namespace std;


void multiplication() {
	int num = 100 + rand() % 900;
	int num2 = 10 + rand() % 90;
	cout << num << endl << 'x' << num2 << endl << num*num2 << endl;
	system("pause");
}

void subtraction() {
	int num = 1000 + rand() % 9000;
	int num2 = 1000 + rand() % 9000;
	if (num > num2)cout << num << endl << num2 << endl;
	else
		cout << num2 << endl << num << endl;
	system("pause");
}

void addition() {
	int num = 1000 + rand() % 8000;
	int secnum = 1000 + rand() % (9000-num);
	/*if (secnum + num >= 10000) {
		cout << "fail";
		system("pause");
	}*/
	cout << num << endl << secnum<<endl;
	system("pause");
	//system("cls");
}

void col1_addition() {
	int left1 = rand() % 1000;
	int left2 = rand() % 1000;
	int right1 = rand() % (left1 + left2);
	int right2 = left1 + left2 - right1;
	cout << left1 << "   " << left2 << "   " << right1 << "    " << right2 << endl;
	system("pause");
}

void threerow_addition() {
	int r1 = 1000 + rand() % 9000;
	int r2 = rand() % (10000-r1);
	int r3 = rand() % (10000 - r1 - r2);
	cout << r1 << endl << r2 << endl << r3 << endl<<r1+r2+r3<<endl;
	system("pause");
}
void main() {
//	multiplication();
//	subtraction();
//	col1_addition();
	threerow_addition();
	system("cls");
	main();
}