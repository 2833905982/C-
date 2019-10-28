#include <stdio.h>

int main()
{
	int i,a,b,c;
	printf("请输入一个整数\n");
	scanf("%d",&i);
	if(i>=100&&i<=999)
	{
		a=i%10;
		b=i/100;
		c=i%100/10;
		printf("%d%d%d",a,c,b);
	}
	else
	{
		printf("不好意思，你输入的数字不在范围内。\n");
	}
	return 0;
}