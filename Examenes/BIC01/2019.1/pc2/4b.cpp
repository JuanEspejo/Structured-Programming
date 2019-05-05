#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int sum = 0, n = 1;
    while(n < 10)
    {
        sum += pow(n,n);
        n += 2;
    }
    cout << " la suma es: " << sum << endl;
}