#include <stdio.h>

int compchar(char c1,char c2);
int main()
{
	int i=0;
	int flag;
	char str1[80],str2[80];
	printf("please input the first shuzu\n");
	gets(str1);
	printf("please input the second shuzu\n");
	gets(str2);
	do
	{
		flag=compchar(str1[i],str2[i]);
		i++;
	}while((str1[i]!='\0'||str2[i]!='\0') && (flag==0));
	
	if(flag==0)
	{
		printf("%s=%s",str1,str2);
	}
	else if(flag>0)
	{
		printf("%s>%s",str1,str2);
	}
	else
	{
		printf("%s<%s",str1,str2);
	}
	return 0;

}
int compchar(char c1,char c2)
{
	int t;
	t=c1-c2;
	return t;
}