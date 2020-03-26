#include <stdio.h>

int main()
{
	int i,max=0;
	for(i=1;i<=100;i++)
	{
		max=max+i;
	}
	printf("前100项的和是%d\n",max);
}