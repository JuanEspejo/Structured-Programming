#include<iostream>

using namespace std;

int main ()
{
	int nota[4] = {12,16,17,19};

	for (int j = 0; j < 4; j++)
	{
	    if (nota[j] == 17)
	    {
	        cout << "se encontró el 17 en el índice ";
	        cout << j << " del arreglo nota." << endl;
	        return 1;
	    }
	}
		
}
