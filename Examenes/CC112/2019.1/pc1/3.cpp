//3.c
#include<cstdio>

main(){
	printf("Evaluación del curso CC112/n");
	int p1=15, p2=17, p3=11, p4=16, p5=7, p6=12, ep=9, ef= 13, es=13, min, nota;
	float pp;
	min=p1;
	if(min>p2) min = p2;
	if(min>p3) min = p3;
	if(min>p4) min = p4;
	if(min>p5) min = p5;
	if(min>p6) min = p6;
	pp = (p1+p2+p3+p4+p5+p6-min)/float(5);		// división flotante
	if(es)
		if(ep<ef) ep = es;
		else      ef = es;
	pp = ((pp+ep+ef)/3);						// división flotante
	nota = (int)pp; 							// división entera
	if(pp-nota>.5) nota++;					// redondeo
	printf("6 Prácticas: %d, %d, %d, %d, %d, %d\n", p1, p2, p3, p4, p5, p6);
	printf("Exámenes: Parcial= %d, Final = %d, Susti = %d\n", ep, ef, es);
	printf("Nota final: %d\n", nota);
}
