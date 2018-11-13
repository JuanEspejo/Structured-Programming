//CD4.c
#include<cstdio>
#include<ctype.h>
#include<cstring>
main(){
	char cc[30]= "Fiore19*83", *pcc= cc;
	int nMay=0, nMin=0, nAst=0, nNum=0, nOtro=0, n = strlen(pcc);
	while(*pcc) {
		if(isupper(*pcc))  nMay++;
		if(islower(*pcc))  nMin++;
		if(*pcc=='*')		 nAst++;
		if(isdigit(*pcc))  nNum++;
		pcc++;
	}
	nOtro = n- nMay - nMin - nAst - nNum;
	if(1<=nMay && nMay<=2 && 3<=nMin && nAst==1 && nNum>=4 && nOtro==0)
		  printf("Clave correcta: %s\n", cc);
	else printf("Clave errada: %s\n", cc);
}
