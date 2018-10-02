//CD4.c
#include <stdio.h>
main() { 
	int n=6, A[]={6,13,4,12,8,7}, i, j, aux, iesimo;
	printf("\n");
	for (j = 0; j < (n-1); j++){			// ordenea el arreglo
		for (i = 0; i < (n-1); i++){
			if(A[i+1]<A[i]){
				aux = A[i+1];
				A[i+1] = A[i];
				A[i] = aux;
			}
		}
	}
	printf("\ningresa i-esimo: ");
	scanf("%d", &iesimo);
	printf("El %d-esimo menor es %d\n", iesimo, A[iesimo-1]); 
}
