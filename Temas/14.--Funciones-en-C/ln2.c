// programa que pida ingresar un margen de error (E>0) y muestre el valor de la primera suma parcial que con un margen de error de E se aproxime al valor de ln2

#include<stdio.h>
#include<math.h>

void calcular(float error);

void main(){
    float E;
	printf("ingrese un margen de error: ");
	scanf("%f",&E);
	calcular(E);
}

void calcular(float error)
{
    int n;
    const float ln2 = 0.6931;
	float sp = 1;
	
    for(n=1; fabs(ln2-sp) > error; ){
        printf (" s(%d) = %f\n", n, sp);
        printf (" fabs(ln2-sp) = %f\n", fabs(ln2-sp));
        n++;
        if(n%2==0)
		    sp = sp - 1/((float) n);
	    else
		    sp = sp + 1/((float) n);
	}
	printf(" Dicha primera suma parcial es %f\n\n", sp);
}
