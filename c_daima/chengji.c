#include <stdio.h>

int main()
{
	int a;
	printf("��������ķ�����\n");
	scanf("%d",&a);
	
	if(a<=100&&a>=90)
	{
		printf("��ϲ���õ������㣻"); 
	}
	else if(a>=80&&a<90)
	{
		printf("��ϲ���õ������ã�"); 
	}
	else if(a>60&&a<=80)
	{
		printf("��ϲ���Ѿ������ˣ�");
	}
	else if(a<60)
	{
		printf("������˼����û����");
	}
	else{
		printf("������ķ�������");
	} 
	return 0;
 } 
