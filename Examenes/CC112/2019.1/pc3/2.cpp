#include <iostream>
#include <cstdlib>
#include <iomanip>

using namespace std;

int main() {
	int dado1, dado2, valor[13];
	#define VECES 20000
	srand(time(NULL));
	
	for(int j = 2; j < 13; j++) valor[j] = 0;
	
   for(int j = 0; j < VECES; j++) {
   	dado1 = 1 + rand()%6;
   	dado2 = 1 + rand()%6;
   	valor[dado1 + dado2] += 1;		            
	}
        
	for(int j = 2; j < 13; j++){
		cout << setw(3) << j << " salió:";						// setw(3) establece el ancho (wide) a 3 para j.
		cout << setw(9) << valor[j] << " veces." << endl; 
	}
}
