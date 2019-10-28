
#include <stdio.h>

int main()
{
    int score;
    printf("请输入你的分数:");
    scanf("%d",&score);
    if(score>90 & score<=100)
{
    printf("恭喜你拿到了优秀\n");
 }
else if(score<90 & score>=80)
{
    printf("恭喜你拿到了良好\n");
 }
else if(score<80 & score>=60)
{
    printf("恭喜你及格了\n");
 }
else if(score<60 & score>=0)
{
    printf("不好意思你没有及格，请再接再厉\n");
 }
else 
{
    printf("你输入的分数有误\n");
 }
 
    return 0;
}

