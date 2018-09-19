// CD4.c
#include<iostream>
using namespace std;
main(){
	float PI=1, a=3, mm = 1, cont, err = 0.000125; 
	do{
		cont = 1/a; 
		if(cont<err) break;
		mm = -mm;
		PI += mm*cont;
		a +=2;
	}while(1);
	printf("Valor de PI: %f\n", PI*4);
}

