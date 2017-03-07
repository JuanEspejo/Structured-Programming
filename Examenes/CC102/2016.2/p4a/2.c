#include<stdio.h>
#include<stdlib.h>


void main()
{
int i,p,n,*alumnos,m;

do
	{
		printf("\n Ingrese el numero de alumnos: "); 
		scanf("%d",&n);
		alumnos = (int*)malloc( n*sizeof(int) );
		if (alumnos != NULL) 
			p = 1;
		else printf("\n no hay memoria \n");
	}
while (p == 0);
for(i=0;i<n;i++)
{
printf("ingrese la nota del alumno %d:",i+1);
scanf("%d",&alumnos[i]);
}
printf("**********Alumno************ponderado************\n");
for(i=0;i<n;i++)
{
printf("            %d                  %d         \n",i+1,alumnos[i]);
}
printf ("\n");

do
	{
		printf("\n Ingrese el numero de alumnos a adicionar: "); 
		scanf("%d",&m);
		alumnos = realloc(alumnos,(m+n)*sizeof(int) );
		if (alumnos != NULL) 
			p = 1;
		else printf("\n no hay memoria \n");
	}
while (p == 0);

for(i=0;i<m;i++)
{
printf("ingrese la nota del alumno %d:",i+n+1);
scanf("%d",&alumnos[i+n]);
}
printf("**********Alumno************ponderado************\n");
for(i=0;i<n+m;i++)
{
printf("            %d                  %d         \n",i+1,alumnos[i]);
}
printf ("\n");

free(alumnos);
	
}	

// (Y)

	
	
	
	
	
	
	
