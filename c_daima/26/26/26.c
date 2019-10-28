#include <stdio.h>

main()
{
	int i;
	void f1();
	void f2();
	for(i=1;i<=5;i++)
	{
		f1();
		f2();
	}
	return 0;
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
	++k;
	printf("k=%d\n",k);
}
	