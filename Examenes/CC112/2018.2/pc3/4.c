#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>

void main()
{	
	char cc[30]="BA5@hotmai.com";
	int nn=0, narr=0, ss=0, npun=0, notro=0, n=strlen(cc), i=0,j=0;
	
	for(;i<n;i++)
	{
		cc[i]=tolower(cc[i]);
		
		if(!isalnum(cc[i])) // para @ y .//
		{
			j++;
			
			if(cc[i]==64)
				narr++;
				
			if(cc[i]==46)
				npun++;
			
		}
		
		notro=j-narr-npun;
	}
	
	i=0;
	while(cc[i]!=64)
	{
		i++;
		nn++;
	}
	
		
	i=0;
	while(cc[i]!=46)
	{
		i++;
		ss++;
	}
	
	printf("\nnotro==%d && narr==%d && npun==%d && nn==%d && ss==%d && n==%d\n\n",notro,narr,npun,nn,ss,n);
	
	if (notro==0 && narr==1 && npun==1 && nn>=3 && ss-nn>=7 && n-ss>=4)
	{
		printf("\nCorreo correcto: ");
		puts(cc);
		printf("\n");
	}
		
	else
	{
		printf("Correo incorrecto \n\n");
	}	
		
}
