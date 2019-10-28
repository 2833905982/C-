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
    int increment = len;//增量
    myDataType key;
    while(increment > 1)//最后在增量为1并且是执行了情况下停止。
    {
        increment = increment/3 + 1;//根据公式
        //printf("increment:%d\n",increment);
        for (i=increment;i<len;i++)//从[0]开始，对相距增量步长的元素集合进行修改。
        {
            key = ary[i];
            //以下和直接插入排序类似。
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