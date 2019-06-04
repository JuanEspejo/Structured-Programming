#include<iostream>
#include<cstdlib>
#include<iomanip>

using namespace std;			

int main() {
	srand(time(NULL));	
	int A[2][2] = {{1 + rand()%10, 1 + rand()%10}, 
		{1 + rand()%10, 1 + rand()%10}};
	cout << "Arreglo inicial:" << endl;
	cout << setw(3) << A[0][0] << setw(3) << A[0][1] << endl;
	cout << setw(3) << A[1][0] << setw(3) << A[1][1] << endl;
	
	while (A[0][1] == A[0][0]) {
		A[0][1] = 1 + rand()%10;  
	}
	while (A[1][0] == A[0][0] || A[1][0] == A[0][1]) {
		A[1][0] = 1 + rand()%10;  
	}
	while (A[1][1] == A[0][0] || A[1][1] == A[0][1] || A[1][1] == A[1][0]) {
		A[1][1] = 1 + rand()%10;  
	}
	cout << "Arreglo final:" << endl;
	cout << setw(3) << A[0][0] << setw(3) << A[0][1] << endl;
	cout << setw(3) << A[1][0] << setw(3) << A[1][1] << endl;	
}
