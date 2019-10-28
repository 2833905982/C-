#include <stdio.h>
int main()
{
    int x,y;
    for(x=2; x<=100; x++)
    {
		for(y=2; y<x; y++)
        {
            if(    x%y==0   )       
              break;               
		}	
        if(x == y)
            printf("%d  ", x);
	}
	return 0;    
}
