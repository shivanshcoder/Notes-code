#include<stdio.h>
#include<conio.h>

void main() {
	printf("\t\t\tTemperature Conversion Program(Fahrenheit to Celsius)\n");
	for (int fahr = 0; fahr <= 300; fahr += 20)printf("%f\t\t\t%f\n", fahr, (5.0 / 9 * (fahr - 32)));
	_getch();
}