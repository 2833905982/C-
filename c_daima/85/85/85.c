#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	
	int number = rand()%100+1;
	
	int count = 0;
	int a = 0;
	srand(time(0));
	printf("我已经想好了一个1到100之间的数了。\n");
	printf("请你猜猜，我想到的数是几。\n");
	printf("如果你在7次之内，猜对，那么你一定智力超人。");
	do
	{
		printf("请猜一个1到100的数；\n"); 
		scanf("%d", &a);
		count++;
	if(a>number)
	{
		printf("猜的数大了\n");
	} else if (a<number)
	{
		printf("你猜的数小了\n");
	}
	}while (a!=number);
	printf ("太好了，你用了%d次，就猜对了。！\n",count);

	if(count<7)
	{
		printf("你太厉害了！\n");
	}
	else
	{
		printf("你还需要加油啊，小伙子！！！\n");
	}
	 
	getchar();
	return 0;
	
		
	 } 
