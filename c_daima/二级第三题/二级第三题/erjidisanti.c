#include <stdio.h>

int main()
{
	int f1=0,f2=1,f=0;

	while(f1<=100)
	{
		f = f1 + f2;
		f1 = f2;
		f2 = f;
	}
	printf("斐波那契额数列数列中，大于100的最小数是%d\n",f1);
}

