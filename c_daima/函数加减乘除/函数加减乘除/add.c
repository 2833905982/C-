#include <stdio.h>

int add(int a,int b);
int main()
{
	int a,b;
	printf("����������������\n");
	scanf("%d %d",&a,&b);
	printf("%d\n",add(a,b));
	
}
int add(int a,int b)
{
	int e;
	e=a+b;
	return e;
}
