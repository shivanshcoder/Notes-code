#include"Header.h"
//#include<Windows.h>
//using namespace std;
//class s {
//	int a;
//};
//class print {
//public:
//	string p;
//	print& operator<<(int a) {
//		cout << a << " " << a;
//		return *this;
//	}
//	print& operator<<(wchar_t *s) {
//		for (int i = 0; s[i]; ++i)cout << s[i];
//		return *this;
//	}
//};
//
//void main() {
//	print p;//= new print;
//	p << 1 << (wchar_t)"Hello";
//	system("pause");
//	sprintf()
//}
//

void main() {
	print p;
	p << "ABCD" << 34 << &p;
	system("pause");
}
