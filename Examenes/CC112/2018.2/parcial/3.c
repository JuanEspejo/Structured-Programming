#include<stdio.h> 

void combinaciones(int arr[10], int n);
void analizar(int a, int b, int c);
 
int main() {
	int arr[10] = {10, 12, 5, 7, 14, 20};
	combinaciones(arr, 6);
}

void combinaciones(int arr[10], int n) {
	int i, j, k;
	for(i = 0; i < n-2; i++)
		for(j = i+1; j < n-1; j++)
			for(k = j+1; k < n; k++)
				analizar(arr[i], arr[j], arr[k]);
}

void analizar(int a, int b, int c) {
				printf("(%d, %d, %d): ", a, b, c);
				if(a + b > c && a + c > b && b + c > a)
						printf("ES un triángulo.\n");
				else 
						printf("NO es un triángulo.\n");	
}