#include <stdio.h>

int main()
{
	int x,n;
	for(x=2;x<=1000;x++)
	{
	for(n=2;n<x;n++)
	{
	if(x%n!=0)
	break;
	printf("%d",x);
	}
	return 0;
}
}
