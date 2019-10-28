#include <stdio.h>

int main()
{
	int a,x,c=0;
	
	for(x=2;x<1000;x++)
	{
		for(a=2;a<x;a++)
		{
			if(x%a==0)
			{
				c++;
			}
		}
		if(c==0)
		{
		printf("%d\n",x);
			}
				}
return 0;
 } 
