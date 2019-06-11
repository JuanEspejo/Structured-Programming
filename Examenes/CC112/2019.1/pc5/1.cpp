//1.c
#include<cstdio>
main(){  
	int j,k,a=0,nl,nc=40;
	char A[20][nc];
	printf("Ingrese el numero de lineas a aescribir): ");
	scanf("%d",&nl);
	getchar();
	printf("Ingrese %d lineas de texto (max.40 caracteres por linea):\n",nl);
	for(j=0;j<nl;j++) fgets(A[j], nc-1, stdin);
	for(j=0;j<nl;j++){
		for(k=0;k<nc;k++){
			if(A[j][k]=='\0') break;
         if(A[j][k]=='a' || A[j][k]=='e' || A[j][k]=='i' || A[j][k]=='o' || A[j][k]=='u') a++;
      }
		printf("La %d° linea tiene %d vocales\n",j+1,a); 
		a=0;  
	}
}  
