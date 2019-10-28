#include <stdio.h>

int fun(int *a[5]);

int main()
{
	int i=0,k,m;
	int p[5];
	printf("please input five shuzi\n");
	for(i=0;i<5;i++)
	{
		scanf("%d",&p[i]);
	}
	k=fun(p);
	printf("%d\n",k);

	return 0;

}
int fun(int a[5])
{
	int i,max=a[0];
	for(i=1;i<5;i++)
	{
		if(a[i]>=max)
		{
			max=a[i];
		
		}
	}
	return max;

}
