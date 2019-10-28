#include <stdio.h>

struct stu 
{
	int num;
	char name[20];
	char sex;
	float score;
}boy[5]=
{
	{101,"li ping",'m',45},
	{102,"zhang ping",'m',62.5},
	{103,"he fang",'m',92.5},
	{104,"cheng ling",'f',87},
	{105,"jia you",'n',100}
};
int main()
{
	float average=0;
	int i;
	struct stu *p;
	printf("NO\t name\t\t\t sex\t score\t \n");
	for(p=boy;p<boy+5;p++)
	{
		printf("%d\t %s\t\t\t %c\t %.2f\t \n",p->num,p->name,p->sex,p->score);
	}
	for(i=0;i<5;i++)
	{
		average+=boy[i].score;
	}
	printf("average=%.2f\n",average);
	printf("pinfjunshu=%.2f\n",average/i);
}