#include <bits/stdc++.h>
using namespace std;
int main()
{
   char str[100];
   cin>>str;
   int n = strlen(str);
   int noOfsubsequences = ((1<<n)-1);
   cout<<"{} :  1\n";
   int count = 1;
   for(int i=1;i<=noOfsubsequences;i++)
   {
       int temp = i,j=0;
       while(temp>0)
       {
           if(temp&1)  cout<<str[j];
           j++;
           temp = temp>>1;
       }
       count++;
       cout<<" : "<<count<<endl;
   }
   cout<<"Total Sequences Possibles are : "<<count<<endl;
return 0;
}