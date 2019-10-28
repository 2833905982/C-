#include <stdio.h>

int main()
{
	int *p,i,a[5];
	p=a;

	for(i=0;i<5;i++)
	{
	scanf("%d",p++);
	}
	p=a;
	for(i=0;i<5;i++,p++)
	{
	printf("a[%d]=%d ",i,*p);
	}

	return 0;
}