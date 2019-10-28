#include <stdio.h>						//关于自增的思考

int main()
{
	int x=4;
	if(x++>5)
	{
		printf("%d\n",x);
	}

	else
	{
		x++;
		printf("%d\n",x++);				//printf里面的自增，先赋值，后自增。先把x的值打印出来，然后自增。
	}
	
	return 0;
}