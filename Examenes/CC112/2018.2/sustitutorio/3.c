//3.c
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int fin(char *s, char *t){
	int s_len=strlen(s), t_len=strlen(t);
	if(t_len <= s_len){
		s += s_len - t_len;
		if(0 == strcmp(s, t)) return 1;
	}
	return 0;
}
main() {
  char *s = "El fundador de la red social Badoo es el ruso Andrey Andreev.";
  char *s1 = "eev.", *s2 = "eev";
  if(fin(s, s1)) printf("La cadena (%s) tiene (%s) al final.\n", s, s1);
  else   		  printf("La cadena (%s) no tiene (%s) al final.\n", s, s1);
  if(fin(s, s2)) printf("La cadena (%s) tiene (%s) al final.\n", s, s2);
  else			  printf("La cadena (%s) no tiene (%s) al final.\n", s, s2);
}
