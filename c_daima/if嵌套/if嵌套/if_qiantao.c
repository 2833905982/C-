# include <stdio.h>
int main(void)
{
    int n = 0;  //存储1!+2!+3!+…+n!中n的值
    int i = 0, j = 0;  //循环变量
    int m = 1;  //用于计算每个数的阶乘
    unsigned long sum=0;  /*阶乘的值往往很大, 定义成long型。虽然如此, 下面输入的n的值也不能太大, 不然long也放不下*/
    printf("请输入n的值:");
    scanf("%d", &n);
    for (i=1; i<=n; ++i)
    {
        for (j=1; j<=i; ++j)  //求一个数的阶乘
        {
            m = m*j;
        }
        sum = sum + m;  //求完之后就立即把它加到sum中
        m = 1;
    }
    printf ("sum = %ld\n", sum);
    return 0;
}