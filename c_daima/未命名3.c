#include <stdio.h>
 main()
 {
	int grade;
	printf("���������ǵĳɼ���");
	scanf("%d",&grade);
	if(grade>=60&&grade<80)
	{
		printf("��ϲ����ĳɼ�������\n");
	}
    else if (grade>=90&&grade<=100)
	{
		printf("��ϲ����ĳɼ��ﵽ������\n");
	}
	else if(grade>=80&&grade<90);
	{
		printf("��ϲ����ĳɼ��ﵽ������\n");
	}
	else 
	{
		printf("�������\n");
	}
	return 0;

}
