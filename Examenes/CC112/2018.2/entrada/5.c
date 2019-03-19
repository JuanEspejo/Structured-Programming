#include<stdio.h>
#include<math.h>

void realesDiferentes(float a, float b, float delta);
void realesIguales(float a, float b);
void complejas(float a, float b, float delta);

void main(){
	float a, b, c, delta;
	
	printf("Sea una funcion de segundo grado, donde a es el coeficiente de x cuadrado, b el coeficiente de x, y c el valor independiente, ingrese en orden a, b, c: ");
	scanf("%f %f %f", &a, &b, &c);
	
	if(a<0){a=a*(-1); b=b*(-1); c=c*(-1);}
	/*Este if nos facilita el codigo para mostrar las raices complejas sin alterar el resto del metodo para resolver ecuaciones*/
	delta=pow(b, 2)-4*a*c;
	if(delta>0)
		realesDiferentes(a, b, delta);
	else if(delta==0)
		realesIguales(a, b);
	else complejas(a, b, delta);
}
	
void realesDiferentes(float a, float b, float delta){
	printf("x1=%f\n", (-b+sqrt(delta))/(2*a));
	printf("x2=%f\n", (-b-sqrt(delta))/(2*a));
}
	 
void realesIguales(float a, float b){
	printf("x=%f\n", (-b)/(2*a));
}
	
void complejas(float a, float b, float delta){
	printf("x1=%f+%fi\n", (-b)/(2*a), sqrt(fabs(delta))/(2*a));
	printf("x2=%f-%fi\n", (-b)/(2*a), sqrt(fabs(delta))/(2*a));
}
