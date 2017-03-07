#include<stdio.h>
#include<math.h>

void main(){
	int a,b,c;
	float p,q;
	printf("Ingrese los catetos de un triangulo: ");
	scanf("%d %d %d",&a,&b,&c);
	
	p=(a+b+c)/2;
	
	q=sqrt(p*(p-a)*(p-b)*(p-c));
	
	printf("El perímetro del triangulo es %d\n",a+b+c);
	printf("El área del triangulo es %.2f\n",q);
}
