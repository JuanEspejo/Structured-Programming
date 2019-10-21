#include<iostream>
#include<cstring>

using namespace std;

void eliminar_espacios(char * des, char * ori);

int main(){
    char frase[50] = "Anita lava la tina";
    char palabra[50];

    eliminar_espacios(palabra, frase);
    cout << "palabra: " << palabra << endl;

    int iFinal = strlen(palabra) - 1;
    for (int j = 0; j <= iFinal/2; j++) {
        if ((palabra[j] - palabra[iFinal - j])%32 != 0) {
            cout << "NO es palindromo!" << endl;
            return 0;
        }
    }
    cout << "Es palindromo!" << endl;

}

void eliminar_espacios(char * des, char * ori)
{
    int k = 0;
    int iFinal = strlen(ori) - 1;
    for (int j = 0; j <= iFinal; j++) {
        if (ori[j] != ' ') {
            des[k] = ori[j];
            k++;
        }
    }
    des[k] = 0;
}
