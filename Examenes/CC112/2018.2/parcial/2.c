#include<stdio.h>

void CuadranteSuma(int m[10][10],int n);

int main() {
    int matriz[10][10] = {
    {1,2,3,4,5,6},
    {1,2,3,4,5,6},
    {1,2,3,4,5,6},
    {1,2,3,1,1,1},
    {1,2,3,1,1,1},
    {1,2,3,1,1,1}};
    CuadranteSuma(matriz,6);
}

void CuadranteSuma(int m[10][10],int n) {
    int i,j,s=0;
    printf("El cuadrante 0 es conformado por:\n");
    for(i=0;i<n/2;i++) { 
        for(j=0;j<n/2;j++) {
           printf("%3d",m[i][j]);
           s = s+m[i][j];
        }
    }
    printf("\n Y suman %d\n\n",s);
    
    s = 0;
    printf("El cuadrante 1 es conformado por:\n");
    for(i=0;i<n/2;i++){ 
        for(j=n/2;j<n;j++) {
           printf("%3d",m[i][j]);
           s = s+m[i][j];
        }
    }
    printf("\n Y suman %d\n\n",s);
    
    s = 0;
    printf("El cuadrante 2 es conformado por:\n");
    for(i=n/2;i<n;i++) { 
        for(j=0;j<n/2;j++) {
           printf("%3d",m[i][j]);
           s = s+m[i][j];
        }
    }
    printf("\n Y suman %d\n\n",s);
    
    s = 0;
    printf("El cuadrante 3 es conformado por:\n");
    for(i=n/2;i<n;i++) { 
        for(j=n/2;j<n;j++) {
           printf("%3d",m[i][j]);
           s = s+m[i][j];
        }
    }
    printf("\n Y suman %d\n\n",s);
}