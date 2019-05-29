//4.c
#include<cstdio>
#include<cstdlib>
#include<ctime>
main(){
	printf("Regresión lineal: y = ax+b\n");
	int n=30, i;
	float x[n], y[n], *px, *py, mx, my, a, b, anum, aden;
	srand(time(NULL));
	for(i=0, px=x, py=y, mx=0, my=0; i<n; i++, px++, py++){
		*px = rand()%50+1;
		*py = 3 * *px + 2 + (rand()%1000+1)/2000-0.025;
		mx += *px;
		my += *py;
	}
	mx /=n;		// media de x
	my /=n;		// media de y

	for(i=0, px=x, py=y, anum=0, aden=0; i<n; i++){
		anum += (*px-mx)*(*py-my);
		aden += (*px-mx)*(*px-mx);
	}
	a = anum/aden;
	b = my - a*mx;
	printf("y = %.2fx + %.2f\n", a, b);
}
