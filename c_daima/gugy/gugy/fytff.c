#include <stdio.h>

int main()
{
	int a[4];
	int i,j,n;
	printf("请输入几个数字。");
	scanf("%d",&n);
		
	for(i=0;i<n;i++)
	{
	scanf("%d",&a[i]);
	}
	for(j=1;j<=n-1;j++)
	{
	for(i=0;i<=n-j-1;i++)
	{
		if(a[i]>a[i+1])
		{
		 int t=a[i];
		a[i]=a[i+1];
		a[i+1]=t;
		}
	}
	}
	for(i=0;i<4;i++)
	{
	printf("%4d\n",a[i]);
	}

	return 0;
}