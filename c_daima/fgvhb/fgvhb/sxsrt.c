#include <stdio.h>

int main()
{
	int x=2,i,cnt=1;
	int isprime=1;

	while(cnt<50)
	{
		isprime=1;
	for(i=2;i<x;i++)
	{
	if(x%i==0)
	{
		
		isprime=0;
		break;
	}
	}
	if(isprime==1)
	{
		cnt++;
	printf("%3d\t",x);
	
	if(cnt % 5==0)
	{
	printf("\n");
	}
	}
	x++;
	}
	return 0;
}