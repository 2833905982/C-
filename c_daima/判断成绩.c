#include <stdio.h>

int main()
{
    int score; 
	int pass=60;
	
	printf("请输入你的成绩；");
	
	scanf("%d", &score);
	
	if (score>=pass) {
		printf("祝贺你，及格了。\n");
	}
	else printf("很遗憾，没有及格。\n");
    return 0;
	 
}
