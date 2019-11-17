#include<stdio.h>
int main()
{
	int m = 0,n = 0,i = 0;
	int num=0,a=0,b ;

	scanf("%d%d",&m,&n) ;
	if(m<n)
	{
		for(num=m;num<=n;num++)
		{
			a = 0 ;
		for(i=2;i<num;i++)
		{
			
		  if(num%i==0)
		  {
			  a = 0 ;
			  a++; 
		  }
		}
		if(a==0)
		{
		printf("%d是素数。\n",num);
		}
		else
		{
			printf("%d不是素数。\n",num);
		}
		}
	}
      if(m>n){
		  b = m ;
		  m = n ;
		  n = b ;
		  
	
	for(num=m;num<=n;num++)
	{

			a = 0 ;	
	

		for( i=2;i<num;i++)
		{
		  if(num%i==0)
		  {
			  a = 0 ;
			  a++;

		  }
		}
		if(a==0)
		{
		printf("%d是素数。\n",num);
		}
		else{
			printf("%d不是素数。\n",num);
		}
		 
	}	
	
	   

	  }
	  		return 0;
}

