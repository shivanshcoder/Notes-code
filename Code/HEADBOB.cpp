#include<iostream>
#include<vector>
#include<string>
#define FOR(A,B) for(int i = A;i<B;++i)

using namespace std;

int main() {
	int num;
	cin >> num;
	while (num--) {
		string answer = "NOT SURE";
		int nu;
		cin >> nu;
		char c;
		FOR(0, nu) {
			cin >> c;
			if (c == 'I') {
				answer = "INDIAN";
		//		break;
			}
			else if (c == 'Y') {
				answer = "NOT INDIAN";
		//		break;
			}
		}
		cout << answer << endl;
	}
}