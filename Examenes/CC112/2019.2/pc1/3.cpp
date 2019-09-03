//3.cpp
#include<iostream>
#include<iomanip>
using namespace std;

float valorFuturo(int tiMes, float ahMes, float tasaMes);

int main()
{
	int anIni = 4, anFin = 2;
	float tasaIni = .05, tasaJ;
	
	cout << setw(34) << "Valor Futuro en soles" << endl; 
	cout << setw(6) << "Años" << setw(23) << "Tasa Anual" << endl; 
	
	tasaJ = tasaIni;
	for (int j = 0; j < 4; j++, tasaJ += .005)		
		cout << setw(10) << fixed << setprecision(1) << tasaJ*100 << "%";
	cout << endl;
	
	for (int j = anIni; j >= anFin; j--)
	{
		cout << setw(3) << j;
		tasaJ = tasaIni;
		for (int k = 0; k < 4; k++, tasaJ += .005)
		{
		    cout << setw(11) << fixed << setprecision(2);
			cout << valorFuturo(j*12, 100, tasaJ/12);
		}	
		cout << endl;
	}
}

float valorFuturo(int tiMes, float ahMes, float tasaMes)
{
	float vF = 0;
	for (int j = 1; j <= tiMes; j++) 
		vF = (vF + ahMes) * (1 + tasaMes);
	return vF;
}
