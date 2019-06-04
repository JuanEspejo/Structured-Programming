#include<iostream>
#include<cmath>
#include<iomanip>

using namespace std;			

int main(){
	int x[5] = {1,2,3,4,5};
	int y[5] = {1,4,9,16,25};
	cout << fixed << setprecision(2);
	for (int j = 0; j < 5; j++) {
		cout << " x'[" << j << "]: ";
		cout << setw(5) << right << 7 + (sqrt(3)/2)*x[j] + (-0.5)*y[j];
		cout << "\t\ty'[" << j << "]: ";
		cout << setw(5) << right << 11 + (0.5)*x[j] + (sqrt(3)/2)*y[j];
		cout << endl;
	}
}		
