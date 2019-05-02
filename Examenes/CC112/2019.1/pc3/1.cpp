#include <iostream>
#include <iomanip>

using namespace std;

int main() {
  	int num[5], j = 0, aux;
	bool nuevo;
	
	for(int l = 0; l < 5; l++) {
		while(true) {
			cout << " Ingresar un nro (10-100): ";
  			cin >> aux;
  			if(10 <= aux && aux <= 100) break;
  			cout << " Error!" << endl;
  		}
  		nuevo = true;
  		for(int k = 0; k < j; k++)
  			if(num[k] == aux) {nuevo = false; break;}
  		if(nuevo) {
  			num[j] = aux;		
  			for(int k = 0; k <= j; k++)
  				cout << setw(6) << num[k];
  			cout << endl;
  			j++;
  		}
  	}	
}
