#include <stdio.h>

int main()
{
	int x,i,isprime=1;
	
	for(x=2;x<1000;x++)
	{
		for(i=2;i<x;i++)
		{
			isprime=1;
			if(x%i==0)
			{
				isprime=0;
				break;
			}
		}
		if(isprime==1)
		{
			printf("%d\n",x);
		}
	}
	return 0;
 } 
