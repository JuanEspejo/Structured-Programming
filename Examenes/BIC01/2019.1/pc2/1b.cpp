#include <iostream>

using namespace std;

int main()
{
    int n, d, u;
    cout << " ingrese un año: ";
    cin >> n;
    cout << " el año ingresado "
    if(n%400 != 0 && (n%4 != 0 || n%100 == 0))
        cout << "no ";
    cout << "es bisiesto." << endl;
}