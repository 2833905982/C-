//�ж�λ��������
#include <stdio.h>

int main()
{
	int a,b,c=1,d,e=0,f;
	printf("������һ�����֡�\n");
	scanf("%d",&a);
	f=a;
	while(a>=10)
	{
		a=a/10;
		e++;
		c=c*10;
	}
	printf("%d\n",c);
	d=f%c;
	printf("λ����%d\n",e+1);
	printf("������%d\n",d);
}