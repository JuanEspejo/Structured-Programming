//CD3.c
#include <stdio.h>
#include <stdlib.h>
#define DIM 3
typedef struct {
        int dia;
        int mes;
} Fecha;
typedef struct {
        char nombre[30];
        Fecha cumple;
} Amigo;
void Inicializar (Amigo amigos[], int l);
void Mostrar (Amigo amigos[], int l);
Fecha Solicitar_Fecha(void);
void Buscar_Amigos(Amigo amigos[], int l, Fecha f);
main(){
    Amigo amigos[DIM];
    Fecha fecha;
    Inicializar(amigos, DIM);
    Mostrar(amigos, DIM);
    fecha=Solicitar_Fecha();
    Buscar_Amigos(amigos, DIM, fecha);
}
void Inicializar (Amigo amigos[], int l){
	int i;
	for (i=0; i<l; i++){
		printf ("Introduzca el nombre, dia, mes del amigo %i de la lista: ", i+1);
		scanf ( "%s" "%i" "%i", amigos[i].nombre, &amigos[i].cumple.dia, &amigos[i].cumple.mes);
	}
}
void Mostrar(Amigo amigos[], int l){
	int i;
	printf ("amigos cumpleaños\n"); 
	for (i=0; i<l; i++) printf("%s\t %d/%d\n", amigos[i].nombre, amigos[i].cumple.dia, amigos[i].cumple.mes);
	printf (" ------------------ \n"); 
}
Fecha Solicitar_Fecha(void){
    Fecha f;
    printf ("Introduzca dia y mes: ");
    scanf ("%i", &f.dia);
    scanf ("%i", &f.mes);
    return (f);
}
void Buscar_Amigos(Amigo amigos[], int l, Fecha f){
	int i, contador=0;
	for (i=0; i<l; i++)
		if (amigos[i].cumple.dia==f.dia && amigos[i].cumple.mes==f.mes){
          printf ("%s cumple años el día indicado\n", amigos[i].nombre);
          contador++;
      }
   if (contador==0) printf ("No hay amigo que cumpla años el %2d/%2d\n", f.dia, f.mes);
}
