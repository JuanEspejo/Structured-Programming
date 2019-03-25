#include <stdio.h> 
void cargar  (int *a, int m, int n);	// Carga 1 en cada elemento de arr
void imprimir(int *a, int m, int n);	// Imprime arr
void cambiar (int *a, int m, int n);	// suma i a cada fila i de arr 
void main(void){ 
	int m=4, n = 5, arr[m][n], *a = &arr[0][0];
	cargar(a, m, n);
	printf("Matriz inicial\n");	
	imprimir(a, m, n);
	cambiar(a, m, n);
	printf("Matriz cambiada\n");	
	imprimir(a, m, n);
}
void cargar(int *a, int m, int n){
	int *amax = a+m*n;
	while(a<amax) *a++ = 1;
}
void imprimir(int *a, int m, int n){
	int i, j;
	for(i=0; i< m; i++){
		for(j=0; j< n; j++) printf("%d ", *a++);
		printf("\n");	
	}
}
void cambiar(int *a, int m, int n){
	int i, j;
	for(i=0; i< m; i++)
		for(j=0; j< n; j++) *a++ += i;
}
