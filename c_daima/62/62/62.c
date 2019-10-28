#include <stdio.h>
#include <stdlib.h>

int main()
{
	FILE *fp;
	char ch;
	if((fp=fopen("t.txt","w"))==NULL)
	{
		printf("can't open file!");
		exit(0);
	}
	ch=getchar();
	while(ch!='\n')
	{
		fputc(ch, fp);
		ch=getchar();
	}
	fclose(fp);
}