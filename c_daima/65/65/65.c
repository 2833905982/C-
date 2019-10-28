#include <stdio.h>
#include <stdlib.h>

int main()
{
	FILE *fp;
	char ch;
	if((fp=fopen("z.txt","w"))== NULL);
	{
		printf("can't open file!\n");
		exit(0);
	}
	ch=getchar();
	while(ch != '\n')
	{
		fputc(ch,fp);
		ch=getchar();
	}
	fclose(fp);
	return 0;
}