#include <stdio.h>

int FMA(int, int);

int main() {
    int a, b;
    printf("Introduzca los dos números para encontrar su FMA:  ");
    scanf("%d%d", &a, &b);
    printf("El FMA de %d y %d es %d.\n", a, b, FMA(a, b));
}

int FMA(int a, int b) {
	while (a != b)
		if (a>b) return FMA(a-b, b  );
		else     return FMA(a  , b-a);
	return a;
}