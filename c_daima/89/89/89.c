//判断位数并求余
#include <stdio.h>

int main()
{
	int a,b,c=1,d,e=0,f;
	printf("请输入一个数字。\n");
	scanf("%d",&a);
	f=a;
	while(a>=10)
	{
		a=a/10;
		e++;
		c=c*10;
	}
	printf("%d\n",c);
	d=f%c;
	printf("位数是%d\n",e+1);
	printf("余数是%d\n",d);
}