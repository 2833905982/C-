#include <stdio.h>

void output(int x);
int main()
{
	int n;
	printf("请输入一个整数\n");
	scanf("%d",&n);
	output(n);
 } 
 void output(int x)
 {
 	if(x<10)
 	{
 		printf("%d",x);
	 }
	 else
	 {
	 	printf("%d",x%10);
	 	output(x/10);
	 }
	 
 }
