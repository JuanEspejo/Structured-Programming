//1.c
#include <stdio.h>
void main (void){
	int n, cie, cin, vei, die;	
	printf ("\n ingrese la cantidad a retirar: ");
	scanf ("%d", &n);		
	cie = n/100;
	cin = (n - cie*100)/50;
	vei = (n - cie*100 - cin*50)/20;
	die = (n - cie*100 - cin*50 - vei*20)/10;	
	printf ("\n Se retiran:\n");
	printf (" %d billete(s) de 100 soles.\n", cie);
	printf (" %d billete(s) de 50 soles.\n", cin);
	printf (" %d billete(s) de 20 soles.\n", vei);
	printf (" %d billete(s) de 10 soles.\n\n", die);
}
