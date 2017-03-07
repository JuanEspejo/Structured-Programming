#include<stdio.h>

void main(){
	char cat;
	int desk,lap,cant;
	float pago,des=0;
	printf("Ingrese la categoria del tecnico: "); scanf("%c",&cat);
	printf("Ingrese la cantidad de desktops que repara el tecnico: "); scanf("%d",&desk);
	printf("Ingrese la cantidad de laptops que repara el tecnico: "); scanf("%d",&lap);
	switch(cat){
		case 'A': pago = 20*desk + 30*lap; break;
		case 'B': pago = 30*desk + 50*lap; break;
		case 'C': pago = 50*desk + 100*lap; break;
	}
	cant = desk + lap;
	if (cant > 9) {des = 0.25*pago; pago = 0.75*pago;}
	else 	
		if (cant > 5) {des = 0.20*pago; pago = 0.80*pago;}
		else
			if (cant > 2) {des = (0.10)*pago; pago = 0.90*pago;}
	
	printf("El pago del tecnico es de %f soles.\n",pago);
	printf("Y el descuento fue de %f soles.\n",des);
}
