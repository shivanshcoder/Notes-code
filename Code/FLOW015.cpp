#include<iostream>
#include<vector>
#include<string>

using namespace std;

class weeks {
public:
	weeks(int day) {
		current = day;
		week = vector<string>{ "Monday","Tuesday","Wednesday","Thursday","Friday","Saturday","Sunday" };
	}
	void operator++();

	string currents() { return week[current]; }
private:
	int current;
	vector<string>week;
};
void weeks::operator++() {
	if (current == 6)current = 0;
	else current++;
}

string& operator<<(ostream& os,weeks& w) {
	return w.currents();
}

pair<int, int> intervals(pair<int, int> years, int differences,int year) {
	int init = years.first;
	
	while (init + differences<=years.second+differences) {
		if (year <= init + differences)return make_pair(init, init + differences);
		init += differences;
	}
}

//enum week { Mon , Tue, Wed, Thu, Fri, Sat, Sun };

int smain() {
	int num;
	cin >> num;
	while (num--) {
		int year;
		cin >> year;
	}
	return 0;
}

int main() {
	pair<int, int>ans;
	ans = intervals(intervals(make_pair(1900, 2500), 100, 2342), 28, 2342);
	cout << ans.first << endl << ans.second << endl;
	system("pause");
	return 0;
}