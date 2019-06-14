#include<iostream>
#include<cstring>

using namespace std;

int main(){
	char palabra1[50];
	char palabra2[50];

    cout << "palabra1: ";
	cin >> palabra1;   
    cout << "palabra2: ";
	cin >> palabra2;   

	strcpy(palabra1, palabra2);
    cout << "palabra1: " << palabra1 << endl;
}
