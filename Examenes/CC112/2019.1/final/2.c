//2.c
#include<cstdio>
#include<cstring>
main(){
	int mm=60, nn=80, n=0, i, j, imin;
	char cad[mm][80], min[80];
	do{ 
		printf("Ingrese la linea %d: ", n+1);
		fgets(cad[n], nn, stdin);
		if(strlen(cad[n])==1) break;
		n++;
	} while(n<mm); 
// ordenar cad[ ]
	for(i=0; i<n-1; i++){
		imin = i;
		for(j=i+1; j<n; j++) if(strlen(cad[imin])>strlen(cad[j])) imin = j;
		if(imin>i){
			strcpy(min,cad[imin]);
			strcpy(cad[imin],cad[i]);
			strcpy(cad[i], min);
		}
	}
// printf("Párrafo ordenado por longitud de línea");	
	for(i=0; i<n; i++) printf("%s", cad[i]);
}
