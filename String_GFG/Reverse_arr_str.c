#include <stdio.h>
#include <string.h>
void swap(char *x,char *y)
{
    char ch = *x;
    *x = *y;
    *y = ch;
}
void reversestring(char *str,int start,int end)
{
    if(start>=end)
       return;
    swap(&str[start],&str[end]);
    reversestring(str,start+1,end-1);
}
int main()
{
    int i;
    char str[] = "ANMOL";
    int n = strlen(str);
    reversestring(str,0,n-1);
    for(i=0;i<n;i++)
       printf("%c",str[i]);
return 0;
}