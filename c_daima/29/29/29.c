#include <stdio.h>

void f1();
void f2();
int main()
{
	int i;
	for(i=0;i<5;i++)
	{
		f1();
		f2();
	}
}
void f1()
{
	static int j=0;
	j++;
	printf("j=%d\n",j);
}
void f2()
{
	int k=0;
	printf("k=%d\n",k);
}