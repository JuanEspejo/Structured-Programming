//CD4.c
#include <stdio.h> 
#include <time.h> 
#include <stdlib.h> 
void main(void){ 
	int n = 15, arr[n], i, *p = arr, *pmax = p +n;
	srand(time(NULL));
	while(p<pmax) {
		*p = rand()%100;
		printf("%d ", *p++);		
	}
	printf("\nDireccón en el espacio 15: %p\n", arr+14);
	printf("Direccón en el espacio 10: %p\n", arr+9);
}

