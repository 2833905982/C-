#include <stdio.h>

int main()
{
	int x,a,b;
	printf("请输入你的成绩；\n");
	scanf("%d",&x);

	switch(x/10)
{
	case 10:  printf("恭喜你获得优秀。");break;
	case 9:   printf("恭喜你获得优秀。");break;
	case 8:   printf("恭喜你获得良好。");break;
	case 7:   printf("恭喜你获得良好。");break;
	case 6:   printf("恭喜你获得及格。");break;
	case 5:   printf("不好意思，你的成绩不及格。");break;
	case 4:   printf("不好意思，你的成绩不及格。");break;
	case 3:   printf("不好意思，你的成绩不及格。。");break;
	case 2:   printf("不好意思，你的成绩不及格。。");break;
	case 1:   printf("不好意思，你的成绩不及格。");break;
	case 0:   printf("不好意思，你的成绩不及格。");break;
	default:  printf("不好意思，你输入的成绩无效，请检查数字格式是否正确。");break;
	return 0;
}
 } 
