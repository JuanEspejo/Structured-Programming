#include<iostream>
#include<cstring>

using namespace std;

int main(){
	char palabra[50];
    cout << "ingrese una palabra: ";
	cin >> palabra;   
    int iFinal = strlen(palabra) - 1; 
	cout << "iFinal: " << iFinal << endl;

	for (int j = 0; j <= iFinal/2; j++) {
        if (palabra[j] != palabra[iFinal - j]) {
			cout << "NO es palindromo!" << endl;
			return 0;
		}
    }
    cout << "Es palindromo!" << endl;
}
