#include <stdio.h>

int *fun(int n);						//指针函数的定义
int main()
{
	int i,n = 5;
	int *p;
	p=fun(n);
	for(i=0;i<n;i++)
	{
		printf("%4d",p[i]);
	}
}
int *fun(int n)
{
	int i;
	static int a[100];					//定义一个静态全局指针变量
	for(i=0;i<n;i++)
	{
		a[i]=i;
	}
	return &a[0];

}