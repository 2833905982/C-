#include <stdio.h>
//main()
//{}
//ͨ������ṹ�壬�γɹ������ͣ����ؽṹ��ʵ�ַ��ض������

typedef struct stuct_st
{
	int c;
	int d;
	int e;
}stu;
stu fun (stu s)
{
	s.c = 4;
	s.d = 5;
	s.e = 6;
	return s;
}
main()
{
	stu s;
	s.c = 1;
	s.d = 2;
	s.e = 3;
	s = fun (s);
	printf("%d\n",s.c);
	printf("%d\n",s.d);
	printf("%d\n",s.e);
}

//ͨ������ȫ�ֱ����������ú����ı�ȫ�ֱ�����ֵ
/*
int c = 0;
int d = 1;
int e = 5;
void fun(void)
{
	c = 9;
	d = 10;
	e = 11;
}
main()
{
	printf("%d\n",c);
	printf("%d\n",d);
	printf("%d\n",e);
	fun();
	printf("%d\n",c);
	printf("%d\n",d);
	printf("%d\n",e);
}
*/



//�����ú���ͨ��ָ������ı���ú������ֵ
/*
void fun(int *a)
{
	int i;
	for(i = 0;i < 9;i++)
		a[i] = i;
}
main()
{
	int a[9]={0,};
	int i = 0;
	fun(a);
	for(i = 0;i < 9;i++)
		printf("%d\n",a[i]);
}*/