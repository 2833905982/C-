#include <stdio.h>

int main()
{
	int a[4];
	int i=0,n,j=1,t;
	printf("请输入一个数字；\n");
	scanf("%d",&n);
	printf("请输入%d个数字\n",n);
	
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
}
	for(j=1;j<=n;j++)
	{
		for(i=0;i<=n-j-1;i++)
		{
			if(a[i]>a[i+1])
			{
				t=a[i];
				a[i]=a[i+1];
				a[i+1]=t;
			}
		}
	}
	for(i=0;i<n;i++)
	{
		printf("%4d",a[i]);
	}
	return 0;
 } 
