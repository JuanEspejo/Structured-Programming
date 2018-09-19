// AB4.c
#include<iostream>
using namespace std;
main(){
	float PI=3, a0=2, a1=3, a2=4, mm = -1, pi, err = 0.0005; 
 	do {
		pi = 4/(a0*a1*a2); 
		mm = -mm;
		PI += mm*pi;
		a0 +=2;
 		a1 +=2;
		a2 +=2;
	} while(pi>=err);
	printf("Valor de PI: %f\n", PI);
}
