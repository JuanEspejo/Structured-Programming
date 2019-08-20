#include<iostream>

using namespace std;

int main() {
	
	float far, cel;

	cout << "Ingrese la temperatura en °C" << endl;
	cin >> cel;

	far = ((float)cel * 9) / 5 + 32;
	
	cout << "La temperatura en farenheit es " << far << endl;
}
