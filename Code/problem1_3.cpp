#include<iostream>
#include<vector>
#include<algorithm>
#include<math.h>
using namespace std;

bool wayToSort(int i, int j) { return i > j; }

vector<int> extract(int num) {
	vector<int>temp;   //can also take array of definite size
	
	while( num ) {
		temp.push_back(num & 0xF);  //instead use temp[i] icase of array
		num = num >> 4;
	}
	return temp;
}

void reverse_byte_order(int num) {
	vector<int>temp = extract(num);  //instead array can be used
	sort(temp.begin(), temp.end(), wayToSort);   //make a sorting algorithm
	for (int i = 0; i < temp.size(); ++i)cout << hex << temp[i];
	cout << endl;
}

void rotate_bits(int num) {
	vector<int>temp = extract(num);  //array can be used
	for (int i = 0; i < temp.size(); ++i)cout << hex << temp[i];
	cout << endl;
	reverse(temp.begin() + 1, temp.end());  //simply reverse the array leaving the first element
	for (int i = 0; i < temp.size(); ++i)cout << hex << temp[i];
	cout << endl;

}

void main() {
	int num = 0xCAFE;
	reverse_byte_order(num);
	rotate_bits(num);
	system("pause");
}