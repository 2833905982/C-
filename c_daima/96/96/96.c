#include<stdio.h>
int f(int n);
void main(void)
{
int n,sum=0;
scanf("%d",&n);
for(int i=1;i<=n;i++)
sum=sum+f(i);
printf("the sum is:%d\n",sum);
}
int f(int n)
{
int k;
if(n==1)
k=1;
else if(n==2)
k=1;
else
k=f(n-1)+f(n-2);
return k;
} 