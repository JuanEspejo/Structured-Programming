#include <stdio.h>
#include <stdlib.h>


struct pais
{
	char * nombre;
	int poblacion;
};


void ingresar_pais (struct pais * ptr);
void insertar_pais (struct pais * rank, struct pais * ptr, int cant);
void mostrar_ranking (struct pais * rank, int cant);


int main()
{
	struct pais * lista = NULL, temp;

	int opc, N = 1, n;
	do
	{
		printf("\n ¿Desea ingresar la población de un pais?\n 1.- Sí.\n 2.- No.\n Seleccione una de las opciones: ");
		scanf("%d", &opc); getchar();
        	switch(opc)
		{
            	case(1):
			lista = (struct pais*)realloc ( lista, N*sizeof(struct pais) );
			if (lista == NULL) 
			{
				printf ("\n No hay más espacio en la memoria.\n\n");
				opc = 2;
			}
			else 
			{
				ingresar_pais (&temp);
				insertar_pais (lista, &temp, N-1);
				mostrar_ranking (lista, N);
				N++;
			} 
			break; 
            	case(2): 
			printf ("\n Chau.\n\n"); 
			free (lista);
			break;
		default : 
			printf ("\n Ingreso incorrecto.\n\n"); break;
         	}

	} while(opc != 2);
}


void ingresar_pais (struct pais * ptr)
{
	int i = 0;
	char * nom = NULL, ch;
	printf ("\n Ingrese el nombre del pais: ");
	ch = getchar();
	while (ch != '\n')
	{
		nom = realloc ( nom, (i+2)*sizeof(char) );
		nom[i++] = ch;
		ch = getchar();
	}
	nom[i] = '\0';
	ptr->nombre = nom;
	printf (" Ingrese la poblacion de dicho pais: ");
	scanf ("%d", &(ptr->poblacion));
}


void insertar_pais (struct pais * rank, struct pais * ptr, int cant)
{
	int i = 0, j;
	while (ptr->poblacion <= rank[i].poblacion  &&  i < cant)
		i++;
	if (i < cant)
	{	
		for (j = cant ; i < j ; j--)
		{
			rank[j].nombre = rank[j-1].nombre;
			rank[j].poblacion = rank[j-1].poblacion;
		}
		
	}
	rank[i].nombre = ptr->nombre;
	rank[i].poblacion = ptr->poblacion;		
}


void mostrar_ranking (struct pais * rank, int cant)
{
	int i = 0;
	printf ("\n Ranking de las poblaciones:\n\n");
	for (; i < cant ; i++)
		printf ("%3d.- %s\t\t %d\n", i+1, rank[i].nombre, rank[i].poblacion);

}
