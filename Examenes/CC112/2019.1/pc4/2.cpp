//2.c
#include <iostream>
using namespace std;
void reversa(int n, int *arr) {
	int *primer = arr, *ultimo = arr+n-1, temp;
	while(primer < ultimo){
		temp = *primer;
		*primer++ = *ultimo;
		*ultimo-- = temp;
    }
}
int main() {
	int arr[] = {2, 5, 6, 9, 10, 12}, n, i;
	n = sizeof(arr)/sizeof(int);
	for(i=0; i<n; i++) cout << arr[i] << "  ";
	cout << endl << endl;
	reversa(n, arr);
	for(i=0; i<n; i++) cout << arr[i] << "  ";
	cout << endl;
}
