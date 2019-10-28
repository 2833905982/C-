#include <stdio.h>

int main()
{
	int i;
	int *p;
	int a[10];
	for(i=0;i<10;i++)
	{
	scanf("%d",&a[i]);
	}
	p=a;
	printf("%d",p);
	return 0;
}