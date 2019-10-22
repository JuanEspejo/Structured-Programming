#include <iostream>
#include <cstdlib>
#include <cstring>

#define FIL 3
#define COL 20

using namespace std;

void generar_saludo(char (*des)[COL], char (*ori)[COL]);
void mostrar(char (*ptr)[COL], int filas);

int main()
{
	char pickachu[FIL][COL];
	char diccionario[FIL][COL] = {
		"picka",
		"picka picka",
		"pickachu"
		};
	mostrar(diccionario, FIL);
	generar_saludo(pickachu, diccionario)
	mostrar(pickachu, FIL);
}

void generar_saludo(char (*des)[COL], char (*ori)[COL])
{
	;
}

void mostrar(char (*ptr)[COL], int filas)
{
	for (int i = 0; i < filas; i++)
	{
		cout << ptr[i] << endl;
	}
}
