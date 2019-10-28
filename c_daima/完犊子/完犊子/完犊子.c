#include     <stdio.h>
void fun(char  *s)
{  int  i, j, n;
   for(i=0; s[i]!='\0'; i++)
/**********found**********/
     if(s[i]>='0' && s[i]<='9')
     {  n=0;
/**********found**********/
        while(s[i+1+n]!= ___2___)  n++;
        for(j=i+n+1; j>i; j--)
/**********found**********/
           s[j+1]= ___3___;
        s[j+1]='*';
        i=i+1;
     }
}
main()
{  char  s[80]="def35adh3kjsdf7";
   printf("\nThe original string is :  %s\n",s);
   fun(s);
   printf("\nThe result is :  %s\n",s);
}

