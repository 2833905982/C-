#include <stdio.h>						//����������˼��

int main()
{
	int x=4;
	if(x++>5)
	{
		printf("%d\n",x);
	}

	else
	{
		x++;
		printf("%d\n",x++);				//printf������������ȸ�ֵ�����������Ȱ�x��ֵ��ӡ������Ȼ��������
	}
	
	return 0;
}