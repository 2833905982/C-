#include <stdio.h>


int main()
{
	int x,y,z;
	for(x=0;x<=20;x++)
	{
	for(y=0;y<=34;y++)
	{
	for(z=0;z<100;z+=3)
	{
	if((x+y+z==100)&&(5*x+3*y+z/3==100))
		printf("可以买%d只鸡翁%d只鸡母%d只鸡雏\n",x,y,z);
	}
	}
	}
	return 0;

}