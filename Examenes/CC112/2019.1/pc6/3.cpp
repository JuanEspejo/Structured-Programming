#include<cstdio>
#include<cstring>

typedef struct {
	char codigo[3];
	int nr;
	float den, peso0, largo0, largo1, peso1;
} Rollo;

void ingreso(int n, Rollo *rol);
void venta  (int n, Rollo *rol);

int main()
{
	int n=3, nv=3, i;
	Rollo rol[n] = {"AA", 1, 1.1, 20, 0,0,0, "AA", 2, 1, 21, 0,0,0, "BB", 1, 1.1, 20, 0,0,0};
	printf("Tienda TelaLinda\n");
	ingreso(n, rol);
	for(i=0; i<nv; i++) venta(n, rol);
}

void ingreso(int n, Rollo *rol)
{
	int i;
	for(i=0; i<n; i++, rol++) {
		rol->largo0 = rol->peso0/rol->den;
		rol->peso1 =  rol->peso0;
		rol->largo1 = rol->largo0;
	}
}

void venta(int n, Rollo *rol)
{ 
	int i, m;
	char ct[3];			// código de tela
	printf("Codigo de tela: "); scanf("%s", ct);
	printf("Metros: "); scanf("%d", &m);
	for(i=0; i<n; i++, rol++) {
		if(strcmp(ct, rol->codigo) ==0 && m<=rol->largo1) {
			rol->largo1 -=m;
			rol->peso1 = rol->largo1 * rol->den;
			printf("Código Nr Largo Peso\n");
			printf("%s    %2d  %2.2f  %2.2f\n", rol->codigo, rol->nr, rol->largo1, rol->peso1);
			return;
		}
	}	
	printf("No se puede vender\n");
}
