#include <stdio.h>

int main()
{
    int i,a,b,c;
    printf("������һ����λ��������\n");
    scanf("%d",&i);
    if(i>=100&&i<=999)
    {
      a=i%10;
      b=i/100;
      c=i%100/10;
      printf("%03d",a*100+b*1+c*10);
    }
    else
    {
      printf("���������������\n");
      
    }
  return 0;
}