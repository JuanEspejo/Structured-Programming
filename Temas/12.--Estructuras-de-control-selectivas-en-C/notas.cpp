#include <iostream>

using namespace std;

main()
{
	int nota;

	cout << " Ingrese la nota de su examen: ";
	cin >> nota;
	
	if(18 <= nota && nota <= 20) cout << " ¡Excelente!" << endl;
	if(13 <= nota && nota <= 17) cout << " ¡Muy bien!" << endl;
	if(10 <= nota && nota <= 12) cout << " ¡Bien, ahora vamos por más!" << endl;
	if(1 <= nota && nota <= 9) cout << " ¡Vamos, la constancia nos llevará a los resultados esperados!" << endl;
	
}





