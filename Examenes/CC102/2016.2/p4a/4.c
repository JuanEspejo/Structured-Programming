#include <stdio.h>
#include <string.h>


struct alumno
{
	int codigo;
	char *nombre;
	float nota1;
	float nota2;
};

void asignar (struct alumno* p1, struct alumno* p2);
void promediar (struct alumno* p1, struct alumno* p2, struct alumno* p3);


void main ()
{
	struct alumno al1, al2, promedio;
	
	asignar (&al1, &al2);
	promediar (&al1, &al2, &promedio);
}
		

void asignar (struct alumno* p1, struct alumno* p2)
{
	p1->codigo = 1234;
	p1->nombre = "Saul";
	p1->nota1 = 16;
	p1->nota2 = 18;

	p2->codigo = 5555;
	p2->nombre = "Daniel";
	p2->nota1 = 18;
	p2->nota2 = 20;
}	

			
void promediar (struct alumno* p1, struct alumno* p2, struct alumno* p3)
{
	p3->codigo = 0;
	p3->nombre = "Promedio";
	p3->nota1 = (p1->nota1 + p2->nota1)/2;
	p3->nota2 = (p1->nota2 + p2->nota2)/2;

	/* imprimiendo las estructuras */
	printf ("\n Alumno 1\n");
	printf (" codigo: %d\n", p1->codigo);
	printf (" nombre: %s\n", p1->nombre);
	printf (" nota1: %f\n", p1->nota1);
	printf (" nota2: %f\n\n", p1->nota2);

	printf ("\n Alumno 2\n");
	printf (" codigo: %d\n", p2->codigo);
	printf (" nombre: %s\n", p2->nombre);
	printf (" nota1: %f\n", p2->nota1);
	printf (" nota2: %f\n\n", p2->nota2);

	printf ("\n Alumno 3\n");
	printf (" codigo: %d\n", p3->codigo);
	printf (" nombre: %s\n", p3->nombre);
	printf (" nota1: %f\n", p3->nota1);
	printf (" nota2: %f\n\n", p3->nota2);
}
		
	
