#include <stdio.h>
#define MAX(a,b) (a>b)?a:b
int main()
{
	int x,y,max;
	printf("input two numbers(x,y):\n");
	scanf("%d %d",&x,&y);
	max=MAX(x,y);
	printf("max=%d",max);
	return 0;
}