#include <iostream>
#include <cstdlib>

using namespace std;

int main() {
	int dice[20];
	int frequency[7] = {0,0,0,0,0,0,0};
	
	for(int j=0; j<20; j++) {
		*(dice + j) = 1 + rand()%6;
		*(frequency + *(dice + j)) += 1;
	}	

	for(int j=1; j<7; j++){
		cout << " frecuency["<<j<<"] : "<< dice[j] << endl;
	}	
}
