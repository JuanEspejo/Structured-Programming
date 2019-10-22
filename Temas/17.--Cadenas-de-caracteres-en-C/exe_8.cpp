#include <iostream>
#include <cstdlib>
#include <cstring>

#define FIL 3
#define COL 20

using namespace std;

void generar_saludo(char (*des)[COL], char (*ori)[COL], int filas);
void mostrar(char (*ptr)[COL], int filas);

int main()
{
	char pickachu[FIL][COL];
	char diccionario[FIL][COL] = {
		"picka",
		"picka picka",
		"pickachu"
		};
	cout << "diccionario:" << endl;
	mostrar(diccionario, FIL);
	generar_saludo(pickachu, diccionario, FIL);
	cout << "pickachu:" << endl;		
	mostrar(pickachu, FIL);
}

void generar_saludo(char (*des)[COL], char (*ori)[COL], int filas)
{
	for (int i = 0; i < filas; i++)
	{
		strcpy(des[i],ori[filas-1-i]);
	}	
}

void mostrar(char (*ptr)[COL], int filas)
{
	for (int i = 0; i < filas; i++)
	{
		cout << ptr[i] << endl;
	}
}
