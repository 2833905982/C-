#include <stdio.h>

int main()
{
	char *name[]={"zhang","wang"};
	char **p;												/* p是多级指针 */
	int i;
	for(i=0;i<2;i++)
	{
		p=name+i;
		printf("%c%c",**p,(*p)[1]);
		printf("%s\n",*p);
	}
}