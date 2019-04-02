//4.c
#include<cstdio>
#include<cmath>
main(){
	printf("Evaluar si un punto pertenece a figuras en R2/n");
	float x1=1, y1=3, x2=2, y2=5, xc=5, yc=7, r=2, r1,  r2, x=1.5, y = 4;
	printf("Rectángulo definido por los puntos (%.2f, %.2f) y (%.2f, %.2f)", x1, y1, x2, y2);
	printf("Círculo definido por (%.2f, %.2f) y radio = %d)", xc, yc, r);
	if(x>=x1 && x<=x2 && y>=y1 && y<=y2) printf("el punto (%.2f, %.2f) pertenece al rectángulo\n", x,y);
	else											 printf("el punto (%.2f, %.2f) NO pertenece al rectángulo\n", x,y);

	r1 = x-xc;
	r2 = y-yc;
	r1 = sqrt(r1*r1 + r2+r2);
	if(r1<=r) printf("El punto (%.2f, %.2f) pertenece al círculo\n", x,y);
	else		 printf("El punto (%.2f, %.2f) NO pertenece al círculo\n", x,y);
}
