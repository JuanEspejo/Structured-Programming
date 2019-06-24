 #include <stdio.h>

bool esPrimo (int n);

int main()
{
	int i, num, cprimos = 0, primoMayor = 2;
	printf("Ingrese numero hasta donde se va calcular los primos: ");
	scanf("%d", &num);
	for(i = 2; i <= num; i++)
	{
		if(esPrimo(i))
		{
			cprimos++;//contador de primos
			if(i > primoMayor)
				primoMayor = i;
		}
	}
	printf("La cantidad de primos es :%d\n",cprimos);
	printf("El mayor primo encontrado en este rango es :%d\n",primoMayor);
	return 0;
}

bool esPrimo (int n)
{
	for (int j = 2; j < n; j++)
	{
		if (n % j == 0)
			return false;
	} 
	return true;
}
