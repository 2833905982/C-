#include <stdio.h>

int main()
{
	int x,a,b;
	printf("��������ĳɼ���\n");
	scanf("%d",&x);

	switch(x/10)
{
	case 10:  printf("��ϲ�������㡣");break;
	case 9:   printf("��ϲ�������㡣");break;
	case 8:   printf("��ϲ�������á�");break;
	case 7:   printf("��ϲ�������á�");break;
	case 6:   printf("��ϲ���ü���");break;
	case 5:   printf("������˼����ĳɼ�������");break;
	case 4:   printf("������˼����ĳɼ�������");break;
	case 3:   printf("������˼����ĳɼ������񡣡�");break;
	case 2:   printf("������˼����ĳɼ������񡣡�");break;
	case 1:   printf("������˼����ĳɼ�������");break;
	case 0:   printf("������˼����ĳɼ�������");break;
	default:  printf("������˼��������ĳɼ���Ч���������ָ�ʽ�Ƿ���ȷ��");break;
	return 0;
}
 } 
