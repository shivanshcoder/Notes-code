#include<stdio.h>
#include<conio.h>

long int maxx(long int, long int);

#define maxs(a,b,c) max(a,max(b,c))

long int maxx(long int n1, long int n2) {
	if (n1 > n2)return n1;
	return n2;
}

void main() {
	printf("%ul",maxs(123, 456, 789));
	_getch();
}