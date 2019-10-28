#include<stdio.h>
int main()
{
    float a,b,c,d,e,f;
    printf("请输入两个数:\n");
    scanf("%f%f",&a,&b);
    c=a+b;
    d=a-b;
    e=a*b;
    f=a/b;  
    printf("%f+%f=%f,\n",a,b,c);
    printf("%f-%f=%f,\n",a,b,d);
    printf("%f*%f=%f,\n",a,b,e);
    printf("%f/%f=%f,\n",a,b,f);
    return 0;
    }

