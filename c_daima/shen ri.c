#include <stdio.h>

int main()
{

	int year1,month1,day1;
	int year2,month2,day2;
	int t;
	
	scanf("%d %d %d %d %d %d",&year1,&month1,&day1,&year2,&month2,&day2);
	
	int t1=year1*360+month1*30+day1;
	int t2=year2*360+month2*30+day2;
	
	t=t2-t1;
	printf("你的年龄已有%d年%d月%d天",t/360,(t%360)/30,t%360%30);
	return 0;
} 
