#include<iostream>
using namespace std;

int main(){
	int notas[4] = {20, 18, 17, 16};
	int edades[6] = {16,17,18,19,20,21}, max;
	
	max = maximo(notas, 4);
	cout << " la nota maxima es " << max << endl;

	max = maximo(edades, 6);
	cout << " la edad maxima es " << max << endl;

}

int maximo(int * p, int lon)
{
	max = p[0];
	for(int j = 1; j < lon; j++) {
		if(p[j] > max)	
			max = p[j];
	}
	return max;
}
