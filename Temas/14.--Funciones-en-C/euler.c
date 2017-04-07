#include<stdio.h>

const float pi = 3.14159; // constante global

void suma(float epsilon); // prototipo de la función suma
float entrada(void); // prototipo de la función entrada

void main()
{
	float epsilon;
	epsilon = entrada();
	suma(epsilon);
}

float entrada(void) // cabecera de la definición de la función entrada
{
	int ok = 0; 
	float epsilon; // variable donde almacenar\'e lo que voy a retornar
	do
	{
		printf("Ingrese el margen de error (>0): "); 
		scanf("%f",&epsilon);
		if (epsilon > 0) ok = 1; // en caso que epsilon sea mayor que cero, asignamos ok = 1 para salir del bucle
		else printf("Valor de entrada incorrecto!\n"); // ok sigue valiendo 0
	}
	while (ok == 0);
	return epsilon;	
}
	
void suma(float epsilon)
{
	float s = 0; // en la variable 's' almacenaremos las sumas parciales 
	int i = 0; 
	float euler = (pi*pi)/6; // asignamos a la variable euler el valor exacto a la cual la serie converge
	float cota = euler - epsilon; // asignamos a la variable cota el n\'umero que espera superar nuestra suma 's'
	do
	{
		i++;
		s = s + 1/((float) (i*i));
		printf(" s(%d) = %f\n", i, s);
	}
	while(s < cota); //cuando nuestra suma 's' supere cota, se sale del bucle 
	printf("A partir de n=%d s(n) se aproxima a s=%f con un margen de error de %f.\n", i, euler, epsilon);
}
