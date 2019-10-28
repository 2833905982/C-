#include <stdio.h>

int main()
{
	int a,b,c,d,e,f,g;
	printf("请输入两个两位数的整数！\n");
	scanf("%d %d",&a,&b);
	c=a/10;
	d=a%10;
	e=b/10;
	f=b%10;
	g=f*1000+e*100+d*10+c;
	printf("这个四位数是%d",g);
}