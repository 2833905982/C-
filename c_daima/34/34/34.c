#include <stdio.h>

int main()
{
	int a[10],i,*p;
	printf("please shuru yi ge shuzu\n");
	for(i=0;i<10;i++)
	{
	scanf("%d",&a[i]);
	}
	for(p=a,i=0;i<10;i++)
	{
		printf("%d\n",p[i]);
	}
	return 0;
}