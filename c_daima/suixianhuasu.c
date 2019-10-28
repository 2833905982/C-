#include <stdio.h>

int main()
{
	int a,b,c,x;

	for(x=100;x<1000;x++)
	{
		a=x/100;
		b=(x/10)%10;
		c=x%10; 
	
	if(x==a*a*a+b*b*b+c*c*c)
	{
		printf("%d\n",x);
	}

	}
	return 0;
}
