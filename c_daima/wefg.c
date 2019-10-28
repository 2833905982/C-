#include <stdio.h>

int main()
{
	int a,b,c;
	scanf("%d %d %d",&a,&b,&c);
		
	if(b*b-4*a*c>0)
	{
		printf("函数有两个不同的实数根。");
	}
	else if(b*b-4*a*c==0)
	{
	printf("函数有相同的实根") ; 
	}else if(b*b-4*a*c<0)
	{
		printf("函数无实根。");
	}
	else{
		printf("你的输入错误"); 
	}
	return 0;
}
