#include <stdio.h>
double fun(int a,double x0);

int main()
{
	int x0=1,a=4;
	

	printf("%lf",fun(a,x0));
}
double fun(int a,double x0)
{
	double x1;
	x1=(x0+a/x0)/2;
	if(x1-x0 > 0.001 || x1-x0 < -0.001)
	{
		return fun(a,x1);
	}
	else 
	{
		return x1;
	}
}