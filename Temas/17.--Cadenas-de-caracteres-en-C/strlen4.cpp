#include<iostream>
#include<cstring>

using namespace std;

int main(){
	char saludo[50];
    cout << "saludo: ";
    cin >> saludo;   
    cout << "strlen(saludo): " << strlen(saludo) << endl;

    for (int j = strlen(saludo) - 1; j >= 0; j--) {
        cout << saludo[j];
    }
    cout << endl;
}
