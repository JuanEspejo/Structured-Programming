//2.c
#include <stdio.h>
void main(void){
	int a, b;	
	printf ("\n ingrese los coeficientes a y b: ");
	scanf ("%d %d", &a, &b);
	printf(" C.S. = ");
	if (a == 0) {
		if (b == 0) printf("R\n");
		else printf("{}");
	}
	else printf (" {%f}\n", (float)b/a);
}
