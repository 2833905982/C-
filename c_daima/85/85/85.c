#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	
	int number = rand()%100+1;
	
	int count = 0;
	int a = 0;
	srand(time(0));
	printf("���Ѿ������һ��1��100֮������ˡ�\n");
	printf("����²£����뵽�����Ǽ���\n");
	printf("�������7��֮�ڣ��¶ԣ���ô��һ���������ˡ�");
	do
	{
		printf("���һ��1��100������\n"); 
		scanf("%d", &a);
		count++;
	if(a>number)
	{
		printf("�µ�������\n");
	} else if (a<number)
	{
		printf("��µ���С��\n");
	}
	}while (a!=number);
	printf ("̫���ˣ�������%d�Σ��Ͳ¶��ˡ���\n",count);

	if(count<7)
	{
		printf("��̫�����ˣ�\n");
	}
	else
	{
		printf("�㻹��Ҫ���Ͱ���С���ӣ�����\n");
	}
	 
	getchar();
	return 0;
	
		
	 } 
