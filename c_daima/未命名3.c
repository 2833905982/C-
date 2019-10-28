#include <stdio.h>
 main()
 {
	int grade;
	printf("请输入你们的成绩：");
	scanf("%d",&grade);
	if(grade>=60&&grade<80)
	{
		printf("恭喜，你的成绩及格了\n");
	}
    else if (grade>=90&&grade<=100)
	{
		printf("恭喜，你的成绩达到了优秀\n");
	}
	else if(grade>=80&&grade<90);
	{
		printf("恭喜，你的成绩达到了良好\n");
	}
	else 
	{
		printf("输入错误\n");
	}
	return 0;

}
