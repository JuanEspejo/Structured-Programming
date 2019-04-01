#include <iostream>
#include <iomanip>

using namespace std;

int main () {

	int n, aux, fibo1 = 1, fibo2 = 1;

	cout << " Ingrese el termino de Fibonacci: ";
	cin >> n;
	
	for(int j = 1; j <= n; j++){
		if(j > 2){
			aux = fibo2;
			fibo2 = fibo1 + fibo2;
			fibo1 = aux;
		}  
		cout << setw(5) << fibo2 << endl;
	}
}
