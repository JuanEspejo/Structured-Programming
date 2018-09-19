// CD1.c
#include <cstdio> 
#include <cstdlib> 
main (){ 
	int d, m, a, n;
	printf(" Ingrese un entero de 8 digitos: "); scanf("%d", &n);

	a = n/10000;
	m = (n/100) % 100;
	d = n % 100;
	
	printf(" %d de ", d);
	switch (m) 
	{
		case 1:  printf("enero") ; break;
		case 2:  printf("febrero"); break;
		case 3:  printf("marzo"); break;
		case 4:  printf("abril") ; break;
		case 5:  printf("mayo"); break;
		case 6:  printf("junio"); break;
		case 7:  printf("julio") ; break;
		case 8:  printf("agosto"); break;
		case 9:  printf("septiembre"); break;
		case 10:  printf("octubre"); break;
		case 11:  printf("noviembre") ; break;
		default: printf("diciembre"); break;
	}
	printf(" %d\n", a);
} 
