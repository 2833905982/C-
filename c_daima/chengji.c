#include <stdio.h>

int main()
{
	int a;
	printf("请输入你的分数；\n");
	scanf("%d",&a);
	
	if(a<=100&&a>=90)
	{
		printf("恭喜你拿到了优秀；"); 
	}
	else if(a>=80&&a<90)
	{
		printf("恭喜你拿到了良好；"); 
	}
	else if(a>60&&a<=80)
	{
		printf("恭喜你已经及格了；");
	}
	else if(a<60)
	{
		printf("不好意思，你没及格；");
	}
	else{
		printf("你输入的分数有误；");
	} 
	return 0;
 } 
