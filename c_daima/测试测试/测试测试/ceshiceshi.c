#include <stdio.h>

int main()
{
	int b,i,c,sum;
	int nums[1000],nums1[1000];
	for(i=0;i<1000;i++)
	{
		nums[i]=i+1;
	}
		
	for(i=0;i<1000;i++)
	{
		sum = 0 ,b = 0;
		for(c=2;c<nums[i];c++)
		{
			if(nums[i]%c==0)
			{			
				  nums1[b]=c;
				  sum+=nums1[b];
				  b++ ;
			 }
		}
	
		if(nums[i]==sum+1)
		{
            printf("%dÊÇÍêÊı\n",nums[i]);
		}		
									 
	}
	         return 0 ;	        
}