# include <stdio.h>
int main(void)
{
    int n = 0;  //�洢1!+2!+3!+��+n!��n��ֵ
    int i = 0, j = 0;  //ѭ������
    int m = 1;  //���ڼ���ÿ�����Ľ׳�
    unsigned long sum=0;  /*�׳˵�ֵ�����ܴ�, �����long�͡���Ȼ���, ���������n��ֵҲ����̫��, ��ȻlongҲ�Ų���*/
    printf("������n��ֵ:");
    scanf("%d", &n);
    for (i=1; i<=n; ++i)
    {
        for (j=1; j<=i; ++j)  //��һ�����Ľ׳�
        {
            m = m*j;
        }
        sum = sum + m;  //����֮������������ӵ�sum��
        m = 1;
    }
    printf ("sum = %ld\n", sum);
    return 0;
}