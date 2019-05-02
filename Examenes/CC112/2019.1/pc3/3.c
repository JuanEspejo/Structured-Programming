//3.c
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
float superficie(int l1, int l2, int l3);

int main() {
    int n=20, arr[20], n1=n-1, n2=n-2, i, j, k, l1, l2, l3;
    float max=0, super;
    printf("Las 20 barras miden:\n");
    for(i=0; i<n; i++) {
        arr[i] = 1+rand()%20;
        printf("%d  ", arr[i]);
    }
    for(i = 0; i < n2; i++)
        for(j=i+1; j < n1; j++)
            for(k=j+1; k < n; k++)
                if((arr[i]+arr[j])>=arr[k] && (arr[i]+arr[k])>=arr[j] &&
                (arr[j]+arr[k])>=arr[i]) {
                    super = superficie(arr[i], arr[j], arr[k]);
                    if(super>max){
                        max = super;
                        l1 = i;
                        l2 = j;
                        l3 = k;
                    }
                }
    printf("\nLa superficie máxima es: %.2f\nLas barras son barra(%d)=%d, barra(%d)=%d, barra(%d)=%d\n",
           max, l1, arr[l1], l2, arr[l2], l3, arr[l3]);
}

float superficie(int l1, int l2, int l3) {
    float s = (l1+l2+l3)/2.0;
    return sqrt(s*(s-l1)*(s-l2)*(s-l3));
}
