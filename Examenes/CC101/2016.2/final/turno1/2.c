#include<stdio.h>
#include<math.h>
void main(void){
	float x0, y0, x1, y1, x2, y2, perimetro = 0;
	printf("Ingrese el punto de inicio x0, y0: ");
	scanf("%f %f", &x0, &y0);
	printf("%f %f\n", x0, y0);
	x1 = x0;
	y1 = y0;
	do{
		printf("Ingrese un punto x y: ");
		scanf("%f %f", &x2, &y2);
		printf("%f %f\n", x2, y2);
		perimetro = sqrt((x2-x1)*(x2-x1) + (y2-y1)*(y2-y1));
		x1 = x2;
		y1 = y2;
	} while(x2!= x0 || y2!= y0);
	printf("perimetro: %f\n", perimetro);
}
