#include <stdio.h>

int main()
{
	int a,b,c,d,e,f,g;
	printf("������������λ����������\n");
	scanf("%d %d",&a,&b);
	c=a/10;
	d=a%10;
	e=b/10;
	f=b%10;
	g=f*1000+e*100+d*10+c;
	printf("�����λ����%d",g);
}