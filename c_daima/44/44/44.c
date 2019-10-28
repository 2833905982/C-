#include <stdio.h>

int main()
{
	int a=1,b=99;
	int *p;
	p=&a;
	printf("%d\n",p);
	*p=a;
	printf("%d\n",p);
	*p=b;
	printf("%d\n",p);
	
	printf("%d %d %d\n",a,b,*p);
	return 0;
}