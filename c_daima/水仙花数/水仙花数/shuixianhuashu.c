#include <stdio.h>

int main()
{
	int tongle,a,b,c;
	printf("������һ������\n		");
	scanf("%d",&tongle);
	a = tongle/100;
	b = tongle/10%10;
	c = tongle % 10;
	if(tongle == a*a*a+b*b*b+c*c*c)
	{
		printf("�������:%d��ˮ�ɻ���",tongle);
	}
}