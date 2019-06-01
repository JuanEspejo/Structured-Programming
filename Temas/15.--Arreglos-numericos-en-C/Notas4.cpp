#include<iostream>
#include<cstdlib>
using namespace std;

int main() { 
    int notas[5][4],sum[5]; 
    srand(time(NULL));
    for( int j = 0; j < 5; j++) { 
        cout << " Estudiante " << j+1 << ": " << endl; 
        for(int k = 0; k < 4; k++) { 
        notas[j][k] = rand()%21;
        } 
    }
    cout << " Reporte de notas" << endl; 
    for(int j = 0; j < 5; j++) {
        cout << " Estudiante " << j+1 << ": " << endl;
        for(int k = 0; k < 4; k++) {
            cout << " " << notas[j][k]; 
        } 
        cout << endl;
    } 
    for(int j=0;j<5;j++) {
        sum[j]=0;
        for(int k=0;k<4;k++) {
            sum[j]=sum[j]+notas[j][k];
        }
        cout << "La suma de notas del alumno "<< j+1 <<" es: "<<sum[j]<<endl;
        cout << "El promedio de notas del alumno "<< j+1 <<" es: ";
        cout << (double)sum[j]/4<<endl;
    }
}
