#include <stdio.h>

	int xiangjia(int ,int);
	int xiangjian(int ,int);
	int xiangchu(int ,int);
	int xiangcheng(int,int);
	void airthmetic(int,int,int (*fun)(int,int));

int main()
{

	int a,b;
	printf("input a and b.\n");
	scanf("%d %d",&a,&b);
	printf("sum=");
	airthmetic(a,b,xiangjia);
	printf("difference=");
	airthmetic(a,b,xiangjian);
	printf("product=");
	airthmetic(a,b,xiangchu);
	printf("chenghao=");
	airthmetic(a,b,xiangcheng);
}
int xiangjia(int x, int y)
{
	int z;
	z=x+y;
	return(z);
}
int xiangjian(int x,int y)
{
	int z;
	z=x-y;
	return(z);
}
int xiangchu(int x, int y)
{
	int z;
	z=x/y;
	return(z);
}
int xiangcheng(int x, int y)
{
	int z;
	z=x*y;
	return(z);
}
void airthmetic(int x,int y,int(*fun)(int,int))
{
	int result;
	result=(*fun)(x,y);
	printf("%d\n",result);
}