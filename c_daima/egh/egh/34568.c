#include <stdio.h>

int main()
{
	int x,a,b,c;
	if(x>99 &x<=999)
	{
	a=x/100;
	b=x%10;
	c=x/10%10;
	}
	if(x==a*a*a+b*b*b+c*c*c)
	{
	printf("%d",x);
	}

return 0;
}