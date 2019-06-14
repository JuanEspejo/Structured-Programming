#include<iostream>
#include<cstring>

using namespace std;

int main(){
	char saludo[50];
	char nombre[50];

    cout << "saludo: ";
	cin >> saludo;   
    cout << "nombre: ";
	cin >> nombre;   

	strcat(saludo, nombre);
    cout << "resultado: " << saludo << endl;
}
