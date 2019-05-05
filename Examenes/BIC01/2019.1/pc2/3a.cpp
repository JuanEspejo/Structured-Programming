#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << " ingrese un numero positivo: ";
    cin >> n;
    cout << " sus divisores propios son:";
    for(int j = 1; j < n; j++)
    {
        if(n%j == 0)
            cout << "  " << j;
    }
}