#include <stdio.h>

int fun(int n);
int main()
{
	int i,n;
	printf("请输入你想要的数列的个数.\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("%d\n",fun(i+1 ));
	}

}
int fun(int n)
{
	if(n==1||n==2)
	{
		return 1;
	}
	else 
	{
		return fun(n-1)+fun(n-2);
	}
}