#include<stdio.h>

int fibo(int n); // Prototipo de la función fibo

void main()
{
    int i = 1; // N es una VARIABLE LOCAL
    for ( ; i <= 25 ; i++ ) 
        printf(" fibo(%d) = %d\n", i, fibo(i)); // pasamos a fibo EL VALOR de i
}
	
int fibo(int n) // cabecera de la función fibo
{ 
    if ( n <= 2 ) 
        return 1; // fibo(1) = fibo (2) = 1
    else
        return fibo(n-1) + fibo(n-2); // fibo(n) = fibo(n-1) + fibo(n-2)
}
