#include<iostream>
#include<cstring>

using namespace std;

int main(){
    char frase[50] = "Anita lava la tina";
    char palabra[50];

    int k = 0;
    int iFinal = strlen(frase) - 1;
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
        if ((palabra[j] - palabra[iFinal - j])%32 != 0) {
            cout << "NO es palindromo!" << endl;
            return 0;
        }
    }
    cout << "Es palindromo!" << endl;

}
