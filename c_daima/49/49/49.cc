#include <stdio.h>

int main()
{
	char str[]="string arry",*p1="string pointeer.",*ps2;
	ps2=str;
	ps2[0]='S',ps2[1]='T';
	printf("%s\n",ps2);
	p1[0]='S',p1[1]='T';
	printf("%s\n",p1);
	return 0; 
}