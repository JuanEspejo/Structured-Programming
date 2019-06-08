#include<iostream>
#include<cstring>

using namespace std;

int main(){
	char saludo[50]  = "Hola";
    cout << saludo << endl;   
    cout << "strlen(saludo): " << strlen(saludo) << endl;

	char saludo2[50] = {'H','o','l','a'};
    cout << saludo2 << endl;   
    cout << "strlen(saludo2): " << strlen(saludo2) << endl;
}
