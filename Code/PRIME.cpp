#include<iostream>
using namespace std;
#define Endl endl
bool is_prime(unsigned long num) {
	if (num < 2)return false;
	else if (num == 2)return true;
	for (unsigned long n = 2; n < num; n += 2) if (!(num%n))return false;
	return true;

}
void main() {
	int n;
	cin >> n;
	cout << Endl << is_prime(n) << endl;
	system("pause");
}