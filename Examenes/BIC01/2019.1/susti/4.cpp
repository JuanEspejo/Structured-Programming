/*  funcion de Ackerman  */
#include <iostream>

using namespace std;
double Ackerman(int m, int n);

int main(){
	for (int i = 1; i < 5; i++) {
		cout << "\n Ackerman(" << i-1 <<"," << i <<") = "<< Ackerman(i-1, i) << endl;
	}
	return 0;
}

double Ackerman(int m, int n){
	if (m == 0)
		return n + 1;
	else {
		if (n == 0)
			return Ackerman(m - 1, 1);
		else
			return Ackerman(m - 1, Ackerman(m, n - 1));
	}
}
