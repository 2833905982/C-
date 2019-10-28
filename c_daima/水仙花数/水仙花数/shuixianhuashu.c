#include <stdio.h>

int main()
{
	int tongle,a,b,c;
	printf("请输入一个整数\n		");
	scanf("%d",&tongle);
	a = tongle/100;
	b = tongle/10%10;
	c = tongle % 10;
	if(tongle == a*a*a+b*b*b+c*c*c)
	{
		printf("这个整数:%d是水仙花数",tongle);
	}
}