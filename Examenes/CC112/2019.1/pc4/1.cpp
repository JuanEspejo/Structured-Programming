//1.c
#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
main(){
	int n;
	cout << "Geneerar un arreglo ordenado\n";
	cout << "Ingrese la cantidad de elementos: ";  cin >> n;
	int arr[n], *pfin=arr+n-1, *pi, *pj, *pmin, tem;
	srand(time(NULL));
	for(pi= arr; pi<=pfin; pi++) *pi=rand()%12+1;

// ordenar utilizando el método del mínimo
	for(pi= arr; pi<pfin; pi++){
		pmin = pi;
		for(pj= pi+1; pj<=pfin; pj++) if(*pmin>*pj) pmin = pj;
		if(pmin>pi){
			tem = *pmin;
			*pmin = *pi;
			*pi = tem;
		}
	}
	cout << "Arreglo ordenado: ";
	for(pi=arr; pi<=pfin; pi++) cout<< *pi << "  ";
	cout<< endl;
}
