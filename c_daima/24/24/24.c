#include <stdio.h>

void swap(int *a,int *b)
{
	int p;
	p=*a;
	*a=*b;
	*b=p;
	
} 
int main()
{
	int a,b;
	int *x,*y;
	printf("please input two shuzi\n");
	scanf("%d %d",&a,&b);
	x=&a;
	y=&b;
	swap(x,y);
	printf("%d %d\n",a,b);
	return 0;
}