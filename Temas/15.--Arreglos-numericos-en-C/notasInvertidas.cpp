#include<iostream>
using namespace std;

int main(){
	int notas[6], max;

	for(int j = 0; j < 6; j++) {
	    cout << " ingrese la pc" << j + 1 << ": ";
	    cin >> notas[j];	
	}

	for(int j = 5; j >= 0; j--) {
		cout << notas[j] << endl;
	}
	
}
