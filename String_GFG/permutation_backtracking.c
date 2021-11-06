#include <stdio.h>
#include <string.h>
// T(n) = O(n*n!);
//T(n)=n*T(n-1)--> n*(n-1)*(n-2)*------*1 = n!  and at last for printf run n times so 
//overall T(n) = O(n*n!);
void swap(char *x,char *y)
{
    char ch = *x;
    *x = *y;
    *y = ch;
}
void permute(char *a,int l,int h)
{
    int i;
    if(l==h)
       printf("%s\n",a);
    else{
      for(int i=l;i<=h;i++)
      {
          swap((a+l),(a+i));
          permute(a,l+1,h);
          swap((a+l),(a+i));
      }  
    }
}
int main()
{
    char str[] = "ABC";
    int n = strlen(str);
    permute(str,0,n-1);
return 0;
}

//dry run
/*
permute("ABC",0,2)
    i=0
      swap(A,A)
      permute("ABC",1,2)
      swap(A,A)

    i=1
      swap(A,B)
      permute("BAC",1,2)
      swap(B,A)

    i=2
       swap(A,C)
       permute("CBA",1,2)
       swap(C,A)

permute("ABC",1,2)
    i=1
      swap(B,B)
      permute("ABC",2,2)    --> ABC
      swap(B,B)

    i=2
      swap(B,C)
      permute("ACB",2,2)   --->ACB
      swap(C,B)

permute("BAC",1,2)
    i=1
      swap(A,A)
      permute("BAC",2,2)   --->BAC
      swap(B,B)

    i=2
      swap(A,C)
      permute("BCA",2,2)   --->BCA
      swap(C,A)
      
permute("CBA",1,2)
    i=1
      swap(B,B)
      permute("CBA",2,2)  --->CBA
      swap(B,B)

    i=2
      swap(B,A)
      permute("CAB",2,2)  --->CAB
      swap(A,B)
*/