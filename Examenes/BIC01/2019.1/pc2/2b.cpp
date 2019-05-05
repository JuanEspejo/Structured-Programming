#include <iostream>

using namespace std;

int main()
{
    int n, d, u;
    cout << " ingrese un numero (1-12): ";
    cin >> n;
    switch(n)
    {
        case 12: cout << " diciembre" << endl;
        case 11: cout << " moviembre" << endl;
        case 10: cout << "octubre" << endl;
        case 9: cout << " septiembre" << endl;
        case 8: cout << " agosto" << endl;
        case 7: cout << " julio" << endl;
        case 6: cout << " junio" << endl;
        case 5: cout << " mayo" << endl;
        case 4: cout << " abril" << endl;
        case 3: cout << " marzo" << endl;
        case 2: cout << " febrero" << endl;
        case 1: cout << " enero" << endl;
    }
}