#include <stdio.h>

int *fun(int n);						//ָ�뺯���Ķ���
int main()
{
	int i,n = 5;
	int *p;
	p=fun(n);
	for(i=0;i<n;i++)
	{
		printf("%4d",p[i]);
	}
}
int *fun(int n)
{
	int i;
	static int a[100];					//����һ����̬ȫ��ָ�����
	for(i=0;i<n;i++)
	{
		a[i]=i;
	}
	return &a[0];

}