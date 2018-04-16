#include<iostream>
#include<string>
using namespace std;
int main() {
	//string a;
	char *a = "this is string\0 this part not assigned why?";
	cout << a;
	cout << "  sth";
	cout << endl;
	//a.push_back('\0');
	cout << a;
	cout << "  sth\n";
	system("pause");
}