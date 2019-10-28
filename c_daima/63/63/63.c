#include <stdio.h>
#include <stdlib.h>

int main()
{
	FILE *fp;
	char c,filename[30];
	printf("Enter a file name!");
	scanf("%s",&filename);
	if((fp=fopen(filename,"r"))==NULL)
	{
		printf("File %s can't opened.\n",filename);
		exit(0);
	}
	while((c=fgetc(fp))!=EOF)
	{
		putchar(c);
	}
	fclose(fp);
}