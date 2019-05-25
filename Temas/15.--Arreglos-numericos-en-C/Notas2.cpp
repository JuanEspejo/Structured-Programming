#include<iostream>
using namespace std;

int main()
{
    int notas[5][4];
 
    for(int j = 0; j < 5; j++)
    {
        cout << " Estudiante " << j+1 << ": " << endl;
        for(int k = 0; k < 4; k++)
        {
            cout << "ingrese la nota " << k+1 << ": ";
            cin >> notas[j][k];
        }
    }
 
    cout << " Reporte de notas" << endl;
    
    for(int j = 0; j < 5; j++)
    {
        cout << " Estudiante " << j+1 << ": " << endl;
        for(int k = 0; k < 4; k++)
        {
            cout << "  " << notas[j][k];
        }
        cout << endl;
    }
    
}
