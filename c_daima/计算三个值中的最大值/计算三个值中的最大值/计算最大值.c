#include <stdio.h>

int main()
{
	int a,b,c,max;

	printf("请输入三个数字（空格或者分隔）:\n");   //    ||或   &&和
    scanf("%d%d%d",&a,&b,&c);
    if((a>b)&&(a>c))
    {    
		max=a;
	}
    else if((b>a)&&(b>c))
	{
		max=b;
	} 
    else if((c>a)&&(c>b))
	{
		max=c;
	}
   printf("max=%d",max);
   return 0;


}