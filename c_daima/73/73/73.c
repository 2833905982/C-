#include <stdio.h>

int max(int a,int b);
int main()
{
	int z,x,y;
	printf("please input two numbers.\n");
	scanf("%d %d",&x,&y);
	z=max(x,y);
	printf("%d",z);
	return 0;
}
int max(int a,int b)
{
	if(a>b)
	{
		return a;
	}else
		return b;
}