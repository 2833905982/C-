#include <stdio.h>

int main()
{
	int a;
	int year,month,day,hour,minute;
	int c,f,g,i;
	printf("������һ��ʱ��Σ�\n");
	scanf("%d",&a);
	
	year=a/(60*60*24*30*12);//����Ϊ������ 
	c=a%(60*60*24*30*12);//ȡ�������� 
	month=c/(60*60*24*30);//����Ϊ������ 
	f=c%(60*60*24*30);//�ڶ���ȡ��
	day=f/(60*60*24);//����Ϊ������ 
	g=f%(60*60*24);//������ȡ��
	hour=g/(60*60);//����Ϊ����Сʱ
	i=g%(60*60);//���Ĵ�ȡ��
	minute= i/60;//����Ϊ���ٷ��� 
	 
	 printf("����%d��%d��%d��%dСʱ%d����",year,month,day,hour,minute); 
	 return 0; 
 } 
