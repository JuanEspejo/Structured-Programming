//AB4.c
#include<cstdio>
#include<ctype.h>
#include<cstring>
main(){
	char cc[30]= "CBazanC5@hotmail.com";
	int nn, narr=0, ss, npun=0, notro=0, n=strlen(cc), i=0;
	for(;i<n ; i++) {
		cc[i] = tolower(cc[i]);
		if(!isalnum(cc[i])) {
			if(cc[i]=='@') 					{narr++, nn = i;}
			if(cc[i]=='.') 					{npun++, ss = i;}
			if(cc[i]!='@' && cc[i]!='.') 	 notro++;
		}
	}
	if(notro==0 && narr==1 && npun==1 && nn>=3 && ss-nn>=7 && n-ss>=4)
		  printf("Correo correcto: %s\n", cc);
	else printf("Correo errado: %s\n", cc);
}
