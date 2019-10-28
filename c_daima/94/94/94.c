#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{

	int number = rand() % 100 + 1;
	int a;
	int count = 0;
	printf("我已经想好了数。");
	srand(time(0));

	printf("number = %d",number);
	printf("请输入你的数字:\n");
	scanf("%d",&a);
	count++;
	if(a>number)
	{
		printf("你输入的数字大。");
	}
	else if(a<number)
	{
		printf("你输入的数字小。");
	}

}