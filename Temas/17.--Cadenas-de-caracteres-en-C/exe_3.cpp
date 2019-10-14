#include<iostream>
#include<string.h>
#include<stdlib.h>
#include<time.h>

using namespace std;

int main(){
	int n,num,cont,cp;//65-90
	char vec[21];
	do{
		cout << "Ingrese el tamaño de la cadena a usar (de 1-20): ";
		cin >> n;

	}while(n<1 || n>20);

	srand(time(NULL));

	for(int i = 0 ; i < n ; i++){
		num = 65 + rand()%(26);
		vec[i]= num;
		cout << vec[i] << " ";
	}
	vec[n]='\0';
	cout << endl;
	char m;
	for(int k = 65 ; k <= 90 ; k++){
		cont = 0;
		for(int i = 0 ; i < n ; i++){

			if( vec[i] == k ){
				cont++;
			}

		}
		m=k;
		if( cont > 0 ){
			cout << "\nVeces que se repite " << m << " : " << cont;
		}
	}
	cout<<endl;
}
