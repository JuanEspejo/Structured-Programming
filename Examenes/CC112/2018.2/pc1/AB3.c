// AB3.c
#include<cstdio>
main(){
	int n, i, j, jj = 0, paso = 1;
	printf("Ingrese un entero: ");
	scanf("%d", &n);
	for(i=n; i>=-n; i--){
		if(i==0) paso = -1;
		jj += paso; 
		for (j=1; j<=jj; j++) printf("%d\t", j); 
		printf("\n");
	}
}
