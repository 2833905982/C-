#include <stdio.h>

int main()
{
	int a=0,b,c=0;
	printf("please input a shuzi!\n");
	scanf("%d",&a);
	b=a;
	while(a>0)
	{
		a=a/10;
		c++;
	}
	printf("数字的位数是%d\n",c);
}