#include<iostream>
using namespace std;

int main(){
	int notas[5];

	for(int j = 0; j < 5; j++) {
		cout << " ingrese las notas" << j + 1 << ": ";
		cin >> notas[j];	
	}

    cout << " las nota aprobadas son " << endl;
	
	for(int j = 0; j < 5; j++) {
		if(notas[j] >=10)	
		    cout<< notas[j] << endl;
	}
}
