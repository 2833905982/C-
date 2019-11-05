#include <stdio.h>

int main()
{
	int a = 0,b = 0, c = 0,sum = 0,i = 0;
	for(i = 100;i <= 999;i++)
	{
		a = i/100;
		b = i/10%10;
		c = i%10;
		sum = a*a*a+b*b*b+c*c*c;
		if(sum == i)
		{
			printf("100到999之间的水仙花数有%d \n      ",i);
		}
	}
	return 0;
}
