// AB2.c
#include <cstdio>
int hail(int n){
	int ns = 1;
	while(n>1) {
		n = (n%2)? 3*n + 1: n/2;
		printf(", %d", n);
		ns++;
	}
	return ns;
}
main(){
	int n;
	printf("Ingrese cualquier número: ");
	scanf("%d", &n);
	printf("Serie: %d", n);
	printf("\nEl número de elementos de la serie es: %d\n", hail(n));
}
