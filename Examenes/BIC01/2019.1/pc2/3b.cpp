#include <iostream>

using namespace std;

int main()
{
    int n, sum = 0;
    cout << " ingrese un numero positivo: ";
    cin >> n;
    for(int j = 1; j < n; j++)
    {
        if(n%j == 0)
            sum += j;
    }
    cout <<  " el número ingresado ";
    if(sum != n)
        cout << "no ";
    cout << "es un número perfecto." << endl;
}