#include<iostream>
#include<algorithm>

using namespace std;
#define INT_MAX 111000

int main () {
	int Num_Workers;
	cin >> Num_Workers;

	int *cost = new int[Num_Workers];
	int *type = new int[Num_Workers];

	for (int i = 0; i < Num_Workers; ++i)cin >> cost[i];

	int min_translator = INT_MAX;
	int min_author = INT_MAX;
	int min_multi = INT_MAX;
	
	for (int i = 0; i < Num_Workers; ++i) {
		int type_worker;


		cin >> type_worker;

		switch (type_worker) {

		case 1: {
			if (min_translator > cost[i])
				min_translator = cost[i];
		}
				break;

		case 2: {
			if (min_author > cost[i])
				min_author = cost[i];
		}
				break;
		case 3: {
			if (min_multi > cost[i])
				min_multi = cost[i];
		}
				break;
		}

	}

	cout << min (min_multi, (min_author + min_translator));
	//system ("pause");


	return 0;
}