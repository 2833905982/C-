#include <stdio.h>

main()
{
	int i,flag;
	int compchar(char,char );
	char str1[80],str2[80];
	gets(str1);
	gets(str2);
	i=0;
	do
	{
		flag=compchar(str1[i],str2[i]);
		i++;
	}while((str1[i]!='\0'|| str2[i]='\0')
}