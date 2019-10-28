#include <stdio.h>

void swap(int *a,int *b);
int main()
{
	int *p1,*p2;
	int a,b;
	printf("please input two shuzi\n");
	scanf("%d %d",&a,&b);
	p1=&a;
	p2=&b;
	swap(p1,p2);
	printf("%d %d",*p1,*p2);
	return 0;
}
void swap(int *a,int *b)
{
	int c;
	c=*a;
	*a=*b;
	*b=c;
}