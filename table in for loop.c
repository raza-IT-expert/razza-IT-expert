#include<stdio.h>
main()
{
	int a, b, c;
	a=100;
	for(b=1;b<=1000;b++)
	{
		c= a*b;
		printf( "%d*%d=%d\n",a,b,c);
	}
}
