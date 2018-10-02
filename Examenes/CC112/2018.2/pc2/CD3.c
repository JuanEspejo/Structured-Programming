//CD3.c
#include <cstdio>
main() {
	int n = 5, ele[5], i, vot;
 	for (i = 0; i < n; i++) ele[i]=0;
	printf("\nProceso de elecciones\n");
	do{
		do{ 
			printf("Candidado votado (0 para terminar): ");
			scanf("%d", &vot);
		} while(vot<0 || vot>6);
		if(vot==0) break;   
		ele[vot-1]++; 
	} while(1);
	printf("\nResultados de la elección:");
 	for (i = 0; i < 5; i++) printf("\nCandidato %d: %d", i+1, ele[i]);
	printf("\n");
}
