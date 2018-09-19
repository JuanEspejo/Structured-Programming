// AB1.c
#include <cstdio> 
#include <cstdlib> 
main () { 
	int d, m, a, s1, s2, r;
	printf(" Ingrese su día de nacimiento: "); scanf("%d", &d);
	printf(" Ingrese su mes de nacimiento: "); scanf("%d", &m);
	printf(" Ingrese su año de nacimiento: "); scanf("%d", &a);
	s1 = m*100 + d + a;
	s2 = abs(s1/100 - s1%100);
	r = s2%4;
	printf(" %d %d %d\n", s1, s2, r) ;	
	switch (r) 
	{
		case 0:  printf(" Tímido\n") ; break;
		case 1:  printf(" Soñador\n"); break;
		case 2:  printf(" Enamorador\n"); break;
		default: printf(" Irresistible\n");
	}
} 
