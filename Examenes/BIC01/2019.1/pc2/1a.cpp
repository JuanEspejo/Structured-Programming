#include <iostream>

using namespace std;

int main()
{
    int n, d, u;
    cout << " ingrese un numero de dos cifras: ";
    cin >> n;
    if(n < 10 || 99 < n)
        cout << " el nro ingresado no es de dos cifras.";
    else
        cout << " nro invertido: " << 10*(n%10) + n/10;
    cout << endl;
}