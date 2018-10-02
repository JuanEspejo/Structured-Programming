// AB3.c
#include <cstdio>
int armstrong(int n);
main(){
	int arr[] = {371, 1234 , 8208}, i, nAr=0;
	printf("\nVefificación de números de Armstrong\n");
	printf("------------------------------------\n"); 	
	for(i=0; i<3; i++)
		if(armstrong(arr[i])) {
			printf(" %d es un número Armstrong.\n", arr[i]);
			nAr++;
		}
	printf(" Hay %d números de Armstrong.\n", nAr);
}
int armstrong(int nn) {
	int nTem=nn, n=1, d, dn, sum=0, i=1, j;
	while((nTem=nTem/10)>0) n++;  			// encuentra el número de dígitos = nn
	nTem=nn;
	while(i<=n) {
		d = nTem%10;								// d es un dígito de nn
		nTem = nTem/10;
		dn = d;
		for(j=1; j<n; j++) dn *= d;			// calcula d a la n
		sum += dn;
		i++;
	}
	return (nn==sum);
}
