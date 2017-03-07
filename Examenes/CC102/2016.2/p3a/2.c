#include <stdio.h>

void main(){
	int i,p;
	int k=0;
	int arr[2014];
	for(i=0;i<2014;i++){
		arr[i]=i+2;
	}
	for(p=2;p*p<=2016;p++){
		for(i=0;i<2014;i++){
			if(arr[i]%p==0 && arr[i]!=p){
				arr[i]=0;
			}
		}
	}
	do{
		if(arr[k]!=0)
			printf("%d esta en la direccion %p\n",arr[k],&arr[k]);
		k++;
	}while(k<2015);
}

// Bien hecho!
