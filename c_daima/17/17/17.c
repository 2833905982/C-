#include <stdio.h>

void swap(int a,int b)
{
	int i;
	printf("a=%d,b=%d\n",a,b);
	i=a;
	a=b;
	b=i;
	printf("a=%d,b=%d\n",a,b);
}
int main()
{
	int x=6,y=9;
	printf("x=%d,y=%d\n",x,y);
	swap(x,y);
	printf("x=%d,b=%d\n",x,y);

	return 0;
}
