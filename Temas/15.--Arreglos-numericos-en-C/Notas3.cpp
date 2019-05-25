#include<iostream>
#include<cstdlib>
using namespace std;

int main()
{
    int notas[5][4];

    srand(time(NULL)); 
    for(int j = 0; j < 5; j++)
    {
        for(int k = 0; k < 4; k++)
        {
            notas[j][k] = rand()%21;
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
