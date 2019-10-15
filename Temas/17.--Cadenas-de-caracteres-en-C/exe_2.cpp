#include<iostream>
#include<cstdio>

using namespace std;

int main ()
{
	char ch;
	for (int i=33 ; i < 127 ; i++)
	{
		cout << " al elemento " << i;
    	cout << " le corresponde el caracter "  << (char)i << endl;
		if (i%30 == 0)
		{
			cout << " presione enter para continuar...";
			cout << " getchar(): " << getchar() << endl;
		}
	}
}
