#include <stdio.h>
#include <string.h>														//冒泡排序法也挺好用的，即使是关于字符串的。

int main()
{
	static char *name[]={"zhang","wang","li","zhao","wu"};	
	char *p;
	int i,j;
	for(i=0;i<=4;i++)
	{
		for(j=0;j<4-i;j++)
		{
		if(strcmp(name[j],name[j+1])>0)
		{
			p=name[j];
			name[j]=name[j+1];
			name[j+1]=p;
		}
		}
	}
	for(i=0;i<5;i++)
	{
		printf("%s\n",name[i]);
	}
}