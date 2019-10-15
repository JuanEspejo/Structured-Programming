#include<iostream>
#include<cstdlib>
#include<iomanip>

using namespace std;

int main ()
{
    char ch[1000];
    int s,tam,aux;
    
    cout << "ingrese el tamaño "<<endl;
    cin >> tam;
    
    cout << "cadena1: ";
    for(int i=0; i<tam; i++)
    {
        s = rand()%52;
        if (s < 26)
       		ch[i] = s+65;
       	else 
       		ch[i] = s+71;
       	cout << setw(3) << ch[i];
    }
	ch[tam] = 0;
   	cout << endl;
 
  	cout << "cadena2: ";	 			   	 
    for(int j=0; j<tam; j++)
    {
    	if (ch[j] <= 90)
          ch[j] += 32;
        else
          ch[j] -= 32;
	    cout << setw(3) << ch[j];
	}
    cout << endl;
}
