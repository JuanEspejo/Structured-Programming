//2.c
#include<iostream>
using namespace std;
main(){
	char l1='g', l2='a', l3='t', l4='o', l;
	int nl=4,    inte=0, nInte, nExito=0;
	cout << "El Ahorcado\n";
	cout << "Número de intentos (mayor o igual que 4): ";
	cin >> nInte;
	for(; inte<nInte; inte++){
		cout << "Ingrese una letra: ";
		cin >> l;
		if(l1==l)					 {l1=0; nExito++;}
		else if(l2==l)				 {l2=0; nExito++;}
			  else if(l3==l)		 {l3=0; nExito++;}
					 else if(l4==l) {l4=0; nExito++;}
	}
	if(nExito==nl) cout << "Ganó" << endl;
	else				cout << "Perdió" << endl;
}
