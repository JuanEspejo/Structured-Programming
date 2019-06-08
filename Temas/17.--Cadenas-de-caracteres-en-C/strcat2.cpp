#include<iostream>
#include<cstring>
#include<cstdlib>

using namespace std;

int main(){
	char estudiante[50] = "Juan Carlos ";
	char aprobo[50] = "aprobo BIC01 con ";
	char desaprobo[50] = "desaprobo BIC01 con ";
	int nota;
	
	srand(time(NULL));    
    nota = rand()%21;
    if (nota < 10)
        strcat(estudiante, desaprobo);
    else
        strcat(estudiante, aprobo);

    cout << estudiante << nota << endl;   
}
