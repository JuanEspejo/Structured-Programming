//CD1.c
#include<cstdio>
int fibo(int n){
	if(n==0) return 0;
	if(n==1) return 1 + fibo(0);
	return fibo(n-1) + fibo(n-2);
}
main(){
	int n = 5;
	printf("Ingrese un entero > 1: ");	
	scanf("%d", &n),
	printf("fibo(%d) = %d\n", n, fibo(n));
}
