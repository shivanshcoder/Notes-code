#include<iostream>
using namespace std;

/* Lets take example as 3 + 4*/
#define squared(x) x*x    //becomes 3+4*3+4
#define squared2(x) (x)*(x)     //becomes (3+4) * (3+4)
#define squared3(x) (x*x)     //becomes (3+4*3+4)
#define squared4(x) ((x)*(x))    //becomes ((3+4)*(3+4))

void main() {
	int ans = 18 / squared(3 + 4);
	cout << ans<< endl;
//	system("pause");
}