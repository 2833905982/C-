#include <stdio.h>

int main()
{
	int a,b,c;
	scanf("%d %d %d",&a,&b,&c);
		
	if(b*b-4*a*c>0)
	{
		printf("������������ͬ��ʵ������");
	}
	else if(b*b-4*a*c==0)
	{
	printf("��������ͬ��ʵ��") ; 
	}else if(b*b-4*a*c<0)
	{
		printf("������ʵ����");
	}
	else{
		printf("����������"); 
	}
	return 0;
}
