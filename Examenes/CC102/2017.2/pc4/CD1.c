//CD1.c

#include <stdio.h>
#include <stdlib.h>

int main(){
	int f,c,i,j, *pm, *p;
	printf("Ingrese el número de filas: "); scanf("%d",&f);
	printf("Ingrese el número de columnas: "); scanf("%d",&c);
	pm=(int *)malloc(sizeof(int *)*f*c);
	if(!pm){
		printf("No hay espacio en memoria");
		return -1;
	}
	p = pm;
	for (i=0; i<f*c; i++) *p++ = i+1;
	p = pm;
	printf("Matriz:\n");
	for (i=0; i<f; i++) {
		for (j=0;j<c; j++) printf("%d\t", *p++);
		printf("\n");
	}
	free(pm);
}
