#include<stdio.h>
typedef struct datos {
	char nombre[50];
	char apellido[50];
	int edad;                                   	
}DB;


int main(){
	char x;
	DB registro [100];
	int i=0;
	while(1){
		
		printf("Desea ingresar un registro nuevo (s/n) : ");
		
		scanf("%c",&x);
		
		if(x=='n' || x=='N') break;
		else if(x='s' || x=='S'){
		
		printf("Nombre : "); scanf("%s",registro[i].nombre);
		
		printf("Apellido : "); scanf("%s",registro[i].apellido);
		
		printf("Edad : "); scanf("%d",&registro[i].edad);
		

		printf("\n");
		//ojo: no lee el primer scanf por eso le puse este
		scanf("%c",&x);
		i++;
		
		}
			
	}
	
	printf("Nombre	Apellido	Edad\n");
	int j,cont=0;
	for(j=0;j<i;j++){
		printf("%s	%s	%d\n",registro[j].nombre,registro[j].apellido,registro[j].edad);
		cont+=registro[j].edad;
	}
	printf("Promedio de edad = %f",(float)cont/i);
	
}

