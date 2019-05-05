#include <iostream>

using namespace std;

int main()
{
    int sum = 0, n = 0;
    do
    {
        sum += n;
        cout << " ingrese un numero positivo: ";
        cin >> n;
    }
    while(n > 0);
    cout << " la suma es: " << sum << endl;
}