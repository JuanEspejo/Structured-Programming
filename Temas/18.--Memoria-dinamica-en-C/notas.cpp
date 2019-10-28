#include<iostream>
#include<cstdlib>
#include<iomanip>

using namespace std;

int main()
{
	int i,p,n,*alumnos,m;

	cout << "\n Ingrese el numero de alumnos: "; 
	cin >> n;
	alumnos = (int*)malloc( n*sizeof(int) );
	if (alumnos == NULL)
	{ 
		cout << "\n no hay memoria suficiente \n";
		return -1;
	}

	for (i=0; i<n; i++)
	{
		cout << " ingrese la nota del alumno " << i+1 << ": ";
		cin >> alumnos[i];
	}

	for (i=0; i<n; i++) 
		cout << setw(2) << i+1 << ":" << setw(4) << alumnos[i] << endl;

	cout << "\n Ingrese el numero de alumnos a adicionar: "; 
	cin >> m;
	alumnos = (int *)realloc(alumnos,(m+n)*sizeof(int) );
	if (alumnos == NULL){ 
		cout << "\n no hay memoria \n";
		return -1;
	}

	for(i=0;i<m;i++)
	{
		cout << " ingrese la nota del alumno " << i+n+1 << ": ";
		cin >> alumnos[i+n];
	}

	for (i=0; i<n+m; i++) 
		cout << setw(2) << i+1 << ":" << setw(4) << alumnos[i] << endl;

	free(alumnos);	
}
