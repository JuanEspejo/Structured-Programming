#include<stdio.h>

void main(){
	float c, f;
	printf("Ingrese la temperatura en grados Fahrenheit: ");
	scanf("%f", &f);
	c=(f-32)/1.8;
	printf("La temperatura en grados Celsius es %.2f\n", c);
}	
