#include <stdio.h>

int main()
{
	int a=1,b=2,c=4,d=8,e=0;
	e=a+b;
	printf("%d+%d=%d\n",a,b,e);
	e=a-b;
	printf("%d-%d=%d\n",a,b,e);
	e=a*b;
	printf("%d*%d=%d\n",a,b,e);
	e=b/a;
	printf("%d/%d=%d\n",b,a,e);
}