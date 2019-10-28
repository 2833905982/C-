#include "stdio.h"


typedef int myDataType;
myDataType src_ary[50] = {49,48,47,46,45,44,43,42,41,2,39,38,37,36,35,34,33,32,31,30,29,28,27,26,25,24,23,22,21,20,19,18,17,16,15,14,13,12,11,10,9,8,7,6,5,4,3,40,1,0};

void prt_ary(myDataType *ary,int len)
{
    int i=0;
    while(i < len)
    {
        printf(" %d ",ary[i++]);
    }
    printf("\n");
}
void shellSort(myDataType *ary,int len)
{
    int i,j;
    int increment = len;//����
    myDataType key;
    while(increment > 1)//���������Ϊ1������ִ���������ֹͣ��
    {
        increment = increment/3 + 1;//���ݹ�ʽ
        //printf("increment:%d\n",increment);
        for (i=increment;i<len;i++)//��[0]��ʼ�����������������Ԫ�ؼ��Ͻ����޸ġ�
        {
            key = ary[i];
            //���º�ֱ�Ӳ����������ơ�
            j=i-increment;
            while(j >= 0)
            {
                if (key < ary[j] )
                {
                    myDataType temp = ary[j];
                    ary[j] = key;
                    ary[j+increment] = temp;
                }
                j=j-increment;
            }
        }
    }
}


int main()
{
    printf("before sort:\n");
    prt_ary(src_ary,50);

    //bubble_sort(src_ary,10);
    //bubble_sort_modify1(src_ary,10);
    //bubble_sort_opt(src_ary,10);
    //selectionSort(src_ary,10);
    //insertionSort(src_ary,10);
    shellSort(src_ary,50);
    
    printf("after sort:\n");
    prt_ary(src_ary,50);
    return 0;
}