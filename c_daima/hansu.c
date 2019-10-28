#include <stdio.h>

long f1(int a);
main()
{
	int i; 
	long sum;
	for(i=2;i<=3;i++)
	{
		sum=sum+f1(i);
	}
	printf("\ns=%ld\n",sum);
	return 0;
}
long f1(int a)
{
	int k;
	long r;
	long f2(int);
	k=a*a;
	r=f2(k);
	return r;
}
long f2(int b)
{
	long c=1;
	int i;
	for(i=1;i<=b;i++)
	{
	c=c*i;
	}
	return c;
}
