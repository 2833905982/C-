#include <stdio.h>

int main()
{
	int i,a=0,x;
	for(x=2;x<1000;x++)
	{
		for(i=2;i<x;i++)
		{
			if(x%i==0)
			{
				a++;
			}
		}
		if(a==0)
		{
			printf("%d\n",x);
		}
	 } 
	return 0;
}