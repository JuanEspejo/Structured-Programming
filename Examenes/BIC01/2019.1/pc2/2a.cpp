#include <iostream>

using namespace std;

int main()
{
    int n, d, u;
    cout << " ingrese un numero (30-60): ";
    cin >> n;
    if(n % 10 == 0 || n < 30 || 60 < n)
        cout << " el nro ingresado no es correcto.";
    else
    {
        d = n/10;
        u = n%10;
        switch(d)
        {
            case 3: cout << " treinta y "; break;
            case 4: cout << " cuarenta y "; break;
            case 5: cout << " cincuenta y "; break;
        }
        switch(u)
        {
            case 1: cout << "uno"; break;
            case 2: cout << "dos"; break;
            case 3: cout << "tres"; break;
            case 4: cout << "cuatro"; break;
            case 5: cout << "cinco"; break;
            case 6: cout << "seis"; break;
            case 7: cout << "siete"; break;
            case 8: cout << "ocho"; break;
            case 9: cout << "nueve"; break;
        }
    }
    cout << endl;
}