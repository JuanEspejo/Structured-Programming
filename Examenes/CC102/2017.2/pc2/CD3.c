// 3.c: 

#include<stdio.h>

void main(void){
	int n = 8, arr[8] = {2, 3, 3, 3, 6, 6, 7, 10}, elem, fre, moda=1, i=0;
	printf("Elemento Frecuencia\n");
	while(i<n){
		elem = arr[i];
		fre = 1;
		i++;
		while(i < n && arr[i] == elem) {
			fre++;
			i++;
		}
		moda = (moda<fre)? fre: moda;
		printf(" %d\t %d\n", elem, fre);
	}
	printf(" La moda es: %d\n", moda);
}
