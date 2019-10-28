#include<stdio.h>
//#include<stdlib.h>
int main()
{   int a; 
	float grade;
     float price,taxes;
     printf("input price:");
     scanf("%f",&price);	
     grade = (price -1)/1000;
	 a = (int)grade;
    	switch(a)
    	{  
			case 0:break;	   
			case 1:
			case 2:		 
			case 3:		
			case 4:taxes=price*0.02;break;
			case 5:		
			case 6:		 
			case 7:		 
			case 8:		 
			case 9:taxes=price*0.03;		break;
			default:taxes=price*0.05;break;
    	}
    printf("taxes=%f",taxes);
//system("pause");
    return 0;
}