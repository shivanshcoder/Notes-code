#include<stdio.h>
#include<conio.h>
#include < math.h >
void printint(int A) {
	printf("%d", A);
}
void printfloat(float A) {
	printf("%f", A);
}

int input(const char* string, int *num) {
	printf(string);
	scanf("%d", &num);
	return num;
}

void calculate_root(int a, int b, int c) {
	int desc = b*b - 4 * a*c;
	double temp;
	printf("%d", desc);
	if (desc < 0) {
		printf("No Real Roots exist!");
		_getch();
		return;
	}
	temp = sqrt(desc);
	//printfloat(temp);
	printf("\nThe First root:%f", (-b + temp) / 2 * a);
	printf("\nThe Second root:%f", (-b - temp) / 2 * a);
}

void equation_in() {
	int a, b, c;
	//_clrscr();
	printf("Equation of type a*X^2 + b*X +c\n");
	a = input("\nEnter the value of a:", &a);
	b = input("\nEnter the value of b:", &b);
	c = input("\nEnter the value of c:", &c);
	//printf("%d%d%d", a, b, c);
	calculate_root(a,b,c);
}

void main() {
	equation_in();
	_getch();
}