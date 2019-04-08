// Completar...

// hipotesis: x0 < x1

int min(int a, int b, int c, int x0, int x1) {
	int xMin = -b/(2*a), aux, delta;
	if(a > 0) {
		if(x1 <= xMin) aux = x1;
		else if(x0 < xMin) aux = xMin;
		else aux = x0;
	}
	if(a < 0) {
		if(x1 <= xMin) aux = x0;
		else if(x0 >= xMin) aux = x1;
		else {
			delta =	x1 - 2*xMin + x0;		
			if(delta > 0) aux = x0;
			else if(delta < 0) aux = x1;
			else {printf("...dos ptos\n"); return 1;}
		}
	}
	printf("...un pto\n");
}
