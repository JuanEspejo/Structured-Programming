//cd2.c
#include<cstdio>
#include<cstdlib>
#include<ctime>
void escala(int n, int arr[], float farr[]){
	int i, min, max;
	min = max = arr[0];
	for(i=1; i<n; i++) {
		if(min>arr[i]) min = arr[i]; 
		if(max<arr[i]) max = arr[i]; 
	}
	for(i=0; i<n; i++) farr[i] = (float)(arr[i]-min) /(max-min);
}

main(){
	int n= 6, arr[n], i;
	float farr[n];
	srand(time(NULL));	
	for(i=0; i<n; i++) arr[i] = 10 + rand()%21;
	escala(n, arr, farr);
	printf("Escalamiento de valores de un arreglo\n");
	printf("Valores iniciales: ");	
	for(i=0; i<n; i++) printf("%d\t", arr[i]);
	printf("\nValores escalados: ");
	for(i=0; i<n; i++) printf("%.2f\t", farr[i]);
	printf("\n");
}
