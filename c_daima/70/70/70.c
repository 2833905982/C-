#include <stdio.h>

int main()														//关于调用数组
{																//还是不能完美的输出自己想要的类																
	int (*p)[3],n,i;											
	int A,B,C;													//估计还得换，结构体可能好点
	int a[8][3]={
		{A=0,B=0,C=0},{A=0,B=0,C=1},{A=0,B=1,C=0},{A=1,B=0,C=0},
		{A=0,B=1,C=1},{A=1,B=0,C=1},{A=1,B=1,C=0},{A=1,B=1,C=1},
		};
	p=a;
	printf("请问，您想要第几组数据\n");
	scanf("%d",&n);
	for(i=0;i<3;i++)
	{
		printf("%d\n",*(*(p+n-1)+i));
	}
	return 0;
}