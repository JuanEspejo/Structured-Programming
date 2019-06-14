#include<iostream>
#include<cstring>
#include<cstdio>

using namespace std;

int main(){
	char palabra[50];
    cout << "ingrese una palabra: ";
	fgets(palabra,50,stdin);   
    int lon = strlen(palabra);
	int iFinal = lon - 2; 
	cout << "iFinal: " << iFinal << endl;

	for (int j = 0; j <= iFinal/2; j++) {
        if (palabra[j] != palabra[iFinal - j]) {
			cout << "NO es palindromo!" << endl;
			return 0;
		}
    }
    cout << "Es palindromo!" << endl;
}
