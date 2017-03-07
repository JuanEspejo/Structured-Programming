#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int verificar(int *p, int m, int n);

void main(){

	int i,m,n,v;
	int *p;
	int arr[100];
	srand (time(NULL)); 
	n=rand()%9 + 10;
	
	printf("Ingresar el tamaño del arreglo: ");
	scanf("%d",&m);
	
	for(i=0;i<m;i++)
		arr[i]=rand()%9 + 10;
		
	n=rand()%9+10;
	p=&arr[0];
	v=verificar(&arr[0],m,n);
	
	for(i=0;i<m;i++)
		printf("%d ",arr[i]);
	printf("\n");
	
	if(v==1)
		printf("El numero %d esta en la arreglo.\n",n);
	else
		printf("El numero %d no esta en el arreglo.\n",n);
}

int verificar(int *p, int m, int n){
	int k;
	for(k=0;k<m;k++){
		if(p[k]==n)
			return 1;
	}
	return 0;
}

// Muy bien!
