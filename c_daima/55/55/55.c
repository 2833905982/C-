#include <stdio.h>

int main()
{
	int i,a,b,c;
	printf("������һ������\n");
	scanf("%d",&i);
	if(i>=100&&i<=999)
	{
		a=i%10;
		b=i/100;
		c=i%100/10;
		printf("%d%d%d",a,c,b);
	}
	else
	{
		printf("������˼������������ֲ��ڷ�Χ�ڡ�\n");
	}
	return 0;
}