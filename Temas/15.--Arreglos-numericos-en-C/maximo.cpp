#include<iostream>
using namespace std;

int main(){
	int notas[4], max;

	for(int j = 0; j < 4; j++) {
		cout << " ingrese la pc" << j + 1 << ": ";
		cin >> notas[j];	
	}

	max = notas[0];
	for(int j = 1; j < 4; j++) {
		if(notas[j] > max)	
			max = notas[j];
	}
	
	cout << " la nota maxima es " << max << endl;
}
