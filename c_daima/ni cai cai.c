 #include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	srand(time(0));
	int number = rand()%100+1;
	
	int count = 0;
	int a = 0;
	printf("我已经想好了一个1到100之间的数了。\n");
	do{
		printf("请猜一个1到100的数；\n");
		 
	scanf("%d", &a);
	count++;
	if(a>number){
		printf("猜的数大了\n");
	} else if (a<number){
	printf("你猜的数小了\n");
	}
	}while (a!=number);
	printf ("太好了，你用了%d次，就猜对了。！",count);
	 
	
	return 0;
	
		
	 } 
