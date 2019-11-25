// Mostrando la operación de inserción en el fin de la LES 

#include <stdlib.h>
#include <stdio.h>

// Definiendo la estructura para la lista enlazada y un puntero a este
typedef struct plantilla_persona 
{
	char nombre[40];
	struct plantilla_persona * sgte;
} persona ;
typedef persona *  enlace;

// Prototipos de funciones
int mostrar_lista (enlace cab);
enlace insertar_fin (enlace cab);
void ingresar_nombre (char * p_ch);

void main()
{
	enlace cabeza = NULL; // creando LES
	mostrar_lista (cabeza);
	
	cabeza = insertar_fin (cabeza);
	mostrar_lista (cabeza);
	
	cabeza = insertar_fin (cabeza);
	mostrar_lista (cabeza);
	
	cabeza = insertar_fin (cabeza);
	mostrar_lista (cabeza);
}

enlace insertar_fin (enlace cab)
{
	enlace nuevo, act;	
	nuevo = malloc ( sizeof(persona) );
	if (nuevo == NULL)
	{
		printf("\n Mensaje: No se pudo asignar memoria.\n\n");
		return cab;
	}
	if (cab == NULL)
		cab = nuevo;
	else
	{
		act = cab;
		while (act->sgte != NULL)
			act = act->sgte;
		act->sgte = nuevo;
	}
	nuevo->sgte = NULL;	 
	ingresar_nombre (nuevo->nombre);	
	return cab;
}

int mostrar_lista (enlace cab)
{
	enlace act = cab; // act: actual
	if (act == NULL)
	{
		printf("\n Mensaje: La lista está vacía.\n\n");
		return 0;
	}
	printf("\n================ Imprimiendo datos de la lista enlazada ");
	printf("=================\n\n");		
	do
	{
		printf(" %s\n", act->nombre);
		act = act->sgte;
	} while (act != NULL);
	printf("=================================================");
	printf("========================\n\n");
}

void ingresar_nombre (char * p_ch)
{
	char ch;
	int i = 0;
	printf(" Ingrese el nombre: ");
	ch = fgetc(stdin);
	while ( (ch != '\n') || (i==39) )
	{
		*(p_ch + i) = ch;
		ch = fgetc(stdin);
		//ch = getchar();
		i += 1;
	}
	*(p_ch + i) = '\0';
}
