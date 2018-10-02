//AB4.c
#include<cstdio>
#include<cstdlib>
#include<ctime>
#include<cmath>
int suma1(int n, int notas[]){					// elimina la menor nota y retorna la suma de las otras
	int sum=notas[0], min = sum, i=1;
	for(; i<n; i++) {
		sum += notas[i];
		if(min>notas[i]) min = notas[i];
	}
	return sum - min;
}
main(){
	int pract[4], exam[3], i;
	float PP, PF;
	srand(time(NULL));	
	for (i=0; i<4; i++) pract[i] = 8+rand()%13;
	for (i=0; i<3; i++) exam[i] = 8+rand()%13;
	PP = (float)suma1(4,pract)/3;
	PF = (float)(suma1(3,exam)+PP)/3;	
	printf("P1\tP2\tP3\tP4\tEP\tEF\tES\tNF\n");	
	printf("%d\t%d\t%d\t%d\t%d\t%d\t%d\t%d\n", pract[0], pract[1], pract[2], pract[3],
		 exam[0], exam[1], exam[2], (int)floor(PF+.5));
}
