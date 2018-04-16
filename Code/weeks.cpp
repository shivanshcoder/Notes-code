#include<iostream>
#include<string>
#include<vector>
using namespace std;

class week {
public:
	string &operator=(string &a) { a = weeks[day]; return a; }
	week(int z)
		:day(z){}
private:
	int day;
	static const vector<string>weeks;
};
const  vector<string> week::weeks = { "Monday","Tuesday","Wednesday","Thursday","Friday","Saturday","Sunday" };

void main() {
	week w(1);
	string d;
	w = d;
	cout << d;
	system("pause");
}