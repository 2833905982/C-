#include <stdio.h>

int main()
{
	int a;
	int year,month,day,hour,minute;
	int c,f,g,i;
	printf("请输入一个时间段；\n");
	scanf("%d",&a);
	
	year=a/(60*60*24*30*12);//折算为多少年 
	c=a%(60*60*24*30*12);//取余后的数字 
	month=c/(60*60*24*30);//折算为多少月 
	f=c%(60*60*24*30);//第二次取余
	day=f/(60*60*24);//折算为多少天 
	g=f%(60*60*24);//第三次取余
	hour=g/(60*60);//折算为多少小时
	i=g%(60*60);//第四次取余
	minute= i/60;//折算为多少分钟 
	 
	 printf("这有%d年%d月%d天%d小时%d分钟",year,month,day,hour,minute); 
	 return 0; 
 } 
