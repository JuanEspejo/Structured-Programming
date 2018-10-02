// AB1.c
#include <cstdio>
int perfecto(int n) {
	int n2, sum=0, i;
	n2 = n/2;
	for(i=1; i<=n2; i++) if(n%i == 0) sum += i;
	return (n == sum);
}
int primo(int n) {
	int primo=1, i=2, n2= n/2;
	for(; primo && i<=n2; i++) if(n%i==0) primo = 0; 
	return primo;
}
main(){
	int n;
	printf("\n\n Verificar si un número es primo y/o perfectos :\n");
	printf("Ingrese cualquier número: ");
	scanf("%d", &n);
	if(primo(n))	 printf("%d es primo.\n", n);
	else				 printf("%d no es primo.\n", n);
	if(perfecto(n)) printf("%d es un perfecto.\n", n);
	else				 printf("%d no es perfecto.\n", n);
}

