#include<iostream>
#include<string>
using namespace std;

int main()
{
	cout << "Please enter your first name and age" << endl;
	string First_Name = "???";
	int Age = -1;
	cin >> First_Name >> Age;
	cout << "Hello, " << First_Name << "(age" << Age << ")" << endl;
	//keep_window_open();
	system("pause");
	return 0;
}