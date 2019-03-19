#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main(void){
	int n=3, i, largo = 0;
	char *p[3] = {"Texto corto: 12", "Texto medio: 12345", "Texto largo: 123456789"}, *pdin, *pp;
	
	for(i = 0; i < n; i++) largo += strlen(p[i]) + 1;
	pdin = (char*) malloc(largo * sizeof(char));
	
	pp = pdin;
	for(i = 0; i<n; i++) {
		strcpy(pp, p[i]);
		pp += strlen(p[i]) + 1;
	}
	
	pp = pdin;
	for(i = 0; i < n; i++)
	{
		printf("  %s\n", pp);
		pp += strlen(pp) + 1;
	}
}

