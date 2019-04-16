//3.c
#include<cstdio>
int primo(int n);
main(){
	int n=10, np = 0, i=2;
	printf("10 Primeros números primos:\n");
	for(; np<n; i++)
		if(primo(i)) {
			np++; 
			printf("%d  ", i);
		}
	printf("\n");
}
int primo(int n){
	int primo=1, i=2; 
	for(; i*i<=n && primo; i++) 	if(n%i==0) primo = 0;
	return primo;
}
