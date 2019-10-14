// Programa que muestra el código ASCII de algunos caracteres
#include<iostream>
#include<cstring>

using namespace std;

int main ()
{
	char ch;
	for (int i=33 ; i < 127 ; i++)
	{
        cout << "Al ASCII " << i;
    	cout << " le corresponde: " << (char)i << endl;
    	if (i%20 == 0)
		{
			cout << "Presione enter para continuar...";
			cg = getchar(); 
			cout << "ch = " << ch << endl;
	    }
	}
}
