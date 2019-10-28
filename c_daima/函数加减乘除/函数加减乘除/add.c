#include <stdio.h>

int add(int a,int b);
int main()
{
	int a,b;
	printf("请输入两个整数！\n");
	scanf("%d %d",&a,&b);
	printf("%d\n",add(a,b));
	
}
int add(int a,int b)
{
	int e;
	e=a+b;
	return e;
}
