#include <stdio.h>

int main()
{
	char string[81];
	int i,number = 0,word = 0;
	char c;
	gets(string);
	for(i=0;(c=string[i])!='\0';i++)
	{
	if(c == ' ')
	{
	word=0;
	}
	else if(word==0)
	{
	word=1;
	number++;
	}
	}
	printf("there are %d words in line .\n",number);
	return 0;

}