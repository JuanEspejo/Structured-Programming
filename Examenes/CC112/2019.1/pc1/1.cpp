//1.c
#include<cstdio>

main(){
	printf("Promedio de prácticas\n");
	int p1=13, p2=17, p3=14, p4, suma;
	suma = p1+p2+p3;
	p4 = 20-suma%4;
	printf("P1 = %d, P2 = %d, P3 = %d, P4 = %d, Promedio = %d\n", p1, p2, p3, p4, (p1+p2+p3+p4)/4);
}
