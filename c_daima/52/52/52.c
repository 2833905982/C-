#include <stdio.h>

int fun(int n);
int main()
{
	int i,n;
	printf("����������Ҫ�����еĸ���.\n");
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