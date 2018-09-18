#include<stdio.h>

void main ()
{
      int a, b, c;
      do
      {
      printf("Ingrese los numeros enteros positvos de menor a mayor: ");
            scanf("%d %d %d", &a, &b, &c);
      }
      while(!(a <= b && b <= c && 0 < a));
            
      for(;a*a + b*b != c*c;)
      {
            if((b-a) <= c && c <= (a+b) && (c-a) <= b && b <= (c+a) && (b-c) <= a && c <= (c+b))
                  printf("%d %d %d : es un triangulo \n", a, b, c);
            else if(!((b-a) <= c && c <= (a+b) && (c-a) <= b && b <= (c+a) && (b-c) <= a && c <= (c+b)))
                  printf("%d %d %d : no es un triangulo \n", a, b, c);
            
            printf("Ingrese los numeros enteros positvos de mayor a menor: ");
                  scanf("%d %d %d", &a, &b, &c);
      }
      printf("%d %d %d : es un triangulo rectangulo \n", a, b, c);
}