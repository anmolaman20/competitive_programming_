#include <stdio.h>
int main()
{
   int i,j;
   int n = 64;
   for(i=1;i<=5;i++)
   {
       if(i%2!=0) n++;
       for(j=1;j<=5;j++)
       {
           if(j>=i)
              {
                  if(i%2==0)
                     printf("* ");
                  else  
                     printf("%c ",n);
              }
           else 
              printf("  ");
       }
       printf("\n");
   }
return 0;
}