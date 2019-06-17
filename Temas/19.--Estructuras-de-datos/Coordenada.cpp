#include <iostream>

struct coordenada{
	int x;
	int y;
} punto;

int main(){
	/* asignando valores a las coordenadas de punto */
	punto.x = 5;
	punto.y = 12;
	printf("\nLas coordenadas son: (%d,%d).\n\n", punto.x, punto.y);
}
