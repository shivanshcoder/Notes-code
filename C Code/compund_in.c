#include<stdio.h>

float compund_int(int principal, float rate, int years) {
	
	return principal*pow((1 + rate / 12), 12 * years);
}

float simple_int(int principal, float rate, int years) {
	return principal*(1 + rate*years);
}

void enter_info(int *principal, float *rate, int *years) {
	system("cls");
	printf("Enter Principal:");
	scanf("%d", principal);
	printf("Enter Rate of Interest:");
	scanf("%f", rate);
	printf("Enter Tenure in years:");
	scanf("%d", years);
}
void main() {
	int principal, years;
	float rate,temp;
	int choice;
	printf("Interest Calculator\n");
	printf("1. Compound Interest\n");
	printf("2. Simple Interest\n");
	printf("3. Exit\n");
	printf("Choice(1-3):");
	scnaf("%d", choice);

	enter_info(&principal, &rate, &years);
	system("cls");
	switch (choice) {
	case 1: temp = 
	case 2:
		printf("The Calculated Total Amount is:%f", compund_int(principal, rate, years));
	}
}