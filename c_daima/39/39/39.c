#include <stdio.h>

int main()
{
	int a;
	int b=7;
	int c=3;
	a=(b&=c);

	printf("%d",a);
}
