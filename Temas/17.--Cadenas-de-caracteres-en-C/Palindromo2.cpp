#include<iostream>
#include<cstring>
#include<cstdio>

using namespace std;

int main(){
	char frase[50];
	char palabra[50];
	int k = 0;
	
    cout << "ingrese una palabra: ";
	fgets(frase,50,stdin);   
	cout << "frase: " << frase << endl;
    int iFinal = strlen(frase) - 2; 
	cout << "iFinal: " << iFinal << endl; // amad a la dama
    // iFinal: 13
    // frase: "amadal"

    for (int j = 0; j <= iFinal; j++) {
        if (frase[j] != ' ') {
            palabra[k] = frase[j];
            k++;
        }    
    }
    palabra[k] = 0;

	cout << "palabra: " << palabra << endl;    
    iFinal = strlen(palabra) - 1;
	for (int j = 0; j <= iFinal/2; j++) {
        if (palabra[j] != palabra[iFinal - j]) {
			cout << "NO es palindromo!" << endl;
			return 0;
		}
    }
    cout << "Es palindromo!" << endl;

}
