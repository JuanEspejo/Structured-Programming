#include<stdio.h>

void main()
{
	int n,x,y,h;
	printf("n = ");
	scanf("%d",&n);
	h = (n-1)/2;
	
	for (y=-h; y <= h ; y++)
	{
		for (x=h; x >= -h; x--)
		    if ( (abs(x) + abs(y)) <= h ) printf("*"); else printf(" ");
		printf("\n");
	}
}
