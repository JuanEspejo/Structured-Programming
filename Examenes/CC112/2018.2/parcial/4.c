#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void generar();
int ganoUno();
int ganoCero();

int A[3][3];

int main(){
	srand(time(NULL));
	generar();
	if(ganoUno() && !ganoCero())		 printf(" Ganó jugador UNO.\n");
	else if(!ganoUno() && ganoCero()) printf(" Ganó jugador CERO.\n");
		  else								 printf(" Ambos jugadores empataron.\n");
	return 0;
}

void generar(){
	int i,j;
	printf(" Se generó el tablero:\n\n");
	for(i = 0; i < 3; i++){
		for(j = 0; j < 3; j++){
			A[i][j] = rand()%2;
			printf("%3d", A[i][j]);
		}
		printf("\n");
	}
	printf("\n");
}

int ganoUno(){
	if( (A[0][0] == 1 && A[0][1] == 1 && A[0][2] == 1) ||
		 (A[1][0] == 1 && A[1][1] == 1 && A[1][2] == 1) ||
		 (A[2][0] == 1 && A[2][1] == 1 && A[2][2] == 1) ||
		 (A[0][0] == 1 && A[1][0] == 1 && A[2][0] == 1) ||
		 (A[0][1] == 1 && A[1][1] == 1 && A[2][1] == 1) ||
		 (A[0][2] == 1 && A[1][2] == 1 && A[2][2] == 1) ||
		 (A[0][0] == 1 && A[1][1] == 1 && A[2][2] == 1) ||
		 (A[0][2] == 1 && A[1][1] == 1 && A[2][0] == 1)   ) return 1;
	else return 0;
}

int ganoCero(){
	if( (A[0][0] == 0 && A[0][1] == 0 && A[0][2] == 0) ||
		 (A[1][0] == 0 && A[1][1] == 0 && A[1][2] == 0) ||
		 (A[2][0] == 0 && A[2][1] == 0 && A[2][2] == 0) ||
		 (A[0][0] == 0 && A[1][0] == 0 && A[2][0] == 0) ||
		 (A[0][1] == 0 && A[1][1] == 0 && A[2][1] == 0) ||
		 (A[0][2] == 0 && A[1][2] == 0 && A[2][2] == 0) ||
		 (A[0][0] == 0 && A[1][1] == 0 && A[2][2] == 0) ||
		 (A[0][2] == 0 && A[1][1] == 0 && A[2][0] == 0)   ) return 1;
	else return 0;
}