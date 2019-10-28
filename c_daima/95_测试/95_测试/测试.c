#include <stdio.h>

int transfer(int x)
{  
	int p=1,y=0,yushu; 
	printf("woyouyigemengxiang");
	while(1)  
	{      
		yushu=x%2;   
		x/=2;       
		y+=yushu*p;   
		p*=10;     
		if(x<2)     
		{         
			y+=x*p;  
			break;   
		}    
	}   
	return y;
}


void main()
{    
	int x;
	//进制转换函数的声明    int transfer(int x);    int x;    printf("请输入一个十进制数:");    
	scanf("%d",&x);   
	//printf("转换成二进制数是:%d\n",transfer(x));
	printf("%c\n",236);
	printf("%c\n",237);

printf("%c\n",238);
printf("%c\n",239);
printf("%c\n",220);

printf("%c\n",221);
printf("%c\n",211);
printf("%c\n",232);
printf("%c\n",223);
printf("%c\n",224);
printf("%c\n",225);
printf("%c\n",226);printf("%c\n",227);
printf("%c\n",228);
printf("%c\n",212);
printf("%c\n",213);
printf("%c\n",214);
printf("%c\n",215);
printf("%c\n",216);
printf("%c\n",245);
	printf("%c\n",244);
}
