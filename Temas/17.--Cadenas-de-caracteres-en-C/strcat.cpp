#include<iostream>
#include<cstring>

using namespace std;

int main(){
	char saludo[50] = "Hola ";
	char nombre[10] = "Mundo";
    cout << saludo << endl;   
    cout << "strlen(saludo): " << strlen(saludo) << endl;
    strcat(saludo, nombre);
    cout << saludo << endl;   
    cout << "strlen(saludo): " << strlen(saludo) << endl;
}
