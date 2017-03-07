#include <stdio.h>
#include <math.h>

struct coordenada
{
	float x, y, z;
};

struct ortoedro
{
	struct coordenada vertice1, vertice2;
} orto;

void main()
{
	float delta1, delta2, delta3, volumen;

	/* Ingresando las coordenadas de vertice1 */
	printf("\nIngrese la primera coordenada de vertice1: ");
	scanf("%f", &orto.vertice1.x);
	printf("Ingrese la segunda coordenada de vertice1: ");
	scanf("%f", &orto.vertice1.y);
	printf("Ingrese la tercera coordenada de vertice1: ");
	scanf("%f", &orto.vertice1.z);

	/* Ingresando las coordenadas de vertice2 */
	printf("\nIngrese la primera coordenada de vertice2: ");
	scanf("%f", &orto.vertice2.x);
	printf("Ingrese la segunda coordenada de vertice2: ");
	scanf("%f", &orto.vertice2.y);
	printf("Ingrese la tercera coordenada de vertice2: ");
	scanf("%f", &orto.vertice2.z);
	
	/* Calculando y mostrando el volumen de orto */
	delta1 = fabs(orto.vertice1.x - orto.vertice2.x);
	delta2 = fabs(orto.vertice1.y - orto.vertice2.y);
	delta3 = fabs(orto.vertice1.z - orto.vertice2.z);

	volumen = delta1*delta2*delta3;
	printf("\n\n El volumen es de %f unidades.\n\n", volumen);

 	/* mostrando los vertices de orto */
	printf("======== Imprimiendo los vertices");
	printf(" de orto =========\n\n");
	printf(" (%f,%f,%f)\n", orto.vertice1.x, orto.vertice1.y, orto.vertice1.z);
	printf(" (%f,%f,%f)\n", orto.vertice1.x, orto.vertice1.y, orto.vertice2.z);

	printf(" (%f,%f,%f)\n", orto.vertice1.x, orto.vertice2.y, orto.vertice1.z);
	printf(" (%f,%f,%f)\n", orto.vertice1.x, orto.vertice2.y, orto.vertice2.z);

	printf(" (%f,%f,%f)\n", orto.vertice2.x, orto.vertice1.y, orto.vertice1.z);
	printf(" (%f,%f,%f)\n", orto.vertice2.x, orto.vertice1.y, orto.vertice2.z);

	printf(" (%f,%f,%f)\n", orto.vertice2.x, orto.vertice2.y, orto.vertice1.z);
	printf(" (%f,%f,%f)\n\n", orto.vertice2.x, orto.vertice2.y, orto.vertice2.z);	
}
