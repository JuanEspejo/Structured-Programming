#include<stdio.h>

void main(){
	int num, c, d, u;
	do {	printf("Ingrese un numero entero entre 1 y 999: ");
		scanf("%d", &num);
	} while(num>999 || num<1);
	
	c=num/100;
	d=(num-(c*100))/10;
	u=num%10;
	
	printf("El numero en romano es: ");
	switch(c){
		case 9: printf("CM"); break;
		case 8: printf("DCCC"); break;
		case 7: printf("DCC"); break;
		case 6: printf("DC"); break;
		case 5: printf("D"); break;
		case 4: printf("CD");break;
		case 3: printf("CCC"); break;
		case 2: printf("CC"); break;
		case 1: printf("C"); break;
		case 0: break;
	}
	switch(d){
		case 9: printf("XC"); break;
		case 8: printf("LXXX"); break;
		case 7: printf("LXX"); break;
		case 6: printf("LX"); break;
		case 5: printf("L"); break;
		case 4: printf("XL");break;
		case 3: printf("XXX"); break;
		case 2: printf("XX"); break;
		case 1: printf("X"); break;
		case 0: break;
	}
	switch(u){
		case 9: printf("IX"); break;
		case 8: printf("VIII"); break;
		case 7: printf("VII"); break;
		case 6: printf("VI"); break;
		case 5: printf("V"); break;
		case 4: printf("IV");break;
		case 3: printf("III"); break;
		case 2: printf("II"); break;
		case 1: printf("II"); break;
		case 0: break;
	}	
	printf("\n");	
}
	
