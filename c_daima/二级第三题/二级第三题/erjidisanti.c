#include <stdio.h>

int main()
{
	int f1=0,f2=1,f=0;

	while(f1<=100)
	{
		f = f1 + f2;
		f1 = f2;
		f2 = f;
	}
	printf("쳲����������������У�����100����С����%d\n",f1);
}

