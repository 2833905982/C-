
#include <stdio.h>

int main()
{
    int score;
    printf("��������ķ���:");
    scanf("%d",&score);
    if(score>90 & score<=100)
{
    printf("��ϲ���õ�������\n");
 }
else if(score<90 & score>=80)
{
    printf("��ϲ���õ�������\n");
 }
else if(score<80 & score>=60)
{
    printf("��ϲ�㼰����\n");
 }
else if(score<60 & score>=0)
{
    printf("������˼��û�м������ٽ�����\n");
 }
else 
{
    printf("������ķ�������\n");
 }
 
    return 0;
}

