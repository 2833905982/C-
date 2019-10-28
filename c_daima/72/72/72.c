#include <stdio.h>

int max(int a,int b);
int main()
{
	int (*pmax)(int,int);
	int x,y,z;
	pmax=max;
	printf("input two numbers.\n");
	scanf("%d %d",&x,&y);
	z=(*max)(x,y);
	printf("maxnumber=%d",z);
}
int max(int a,int b)
{
	if(a>b)
	{
		return a;
	}
	else 
	{
		return b;
	}
}