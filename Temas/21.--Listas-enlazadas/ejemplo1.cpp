// Mostrando la operación de inserción en el inicio de la LES 

#include <stdlib.h>
#include <stdio.h>

// Definiendo la estructura para la lista enlazada y un puntero a este
typedef struct plantilla_persona 
{
	char nombre[40];
	struct plantilla_persona *sgte;
} persona ;
typedef persona *enlace; // enlace es sinónimo de persona *

// Prototipos de funciones
int mostrar_lista (enlace cab);
enlace insertar_inicio (enlace cab);
void ingresar_nombre (char * p_ch);

main()
{
	enlace cabeza = NULL; // creando LES
	mostrar_lista (cabeza);
	
	cabeza = insertar_inicio (cabeza);
	mostrar_lista (cabeza);
	
	cabeza = insertar_inicio (cabeza);
	mostrar_lista (cabeza);

	cabeza = insertar_inicio (cabeza);
	mostrar_lista (cabeza);
}

enlace insertar_inicio (enlace cab)
{
	enlace nuevo = (enlace) malloc ( sizeof(persona) );
	if (nuevo == NULL)
	{
		printf("\n Mensaje: No se pudo asignar memoria.\n\n");
		return cab;
	}
	ingresar_nombre (nuevo->nombre);
	nuevo->sgte = cab;
	return nuevo;
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

void ingresar_nombre (char *p)
{
	char ch;
	int i = 0;
	printf(" Ingrese el nombre: ");
	//ch = getchar();
	ch = fgetc(stdin); // stdin: STanDar INput
	while ( (ch != '\n') && (i < 39) )
	{
		*(p + i) = ch;
		ch = fgetc(stdin);
		//ch = getchar();
		++i;
	}
	*(p + i) = 0;
}
