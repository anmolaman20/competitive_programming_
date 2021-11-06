#include <iostream>
using namespace std;
int main()
{
   string s;
   cin>>s;
   int sum =0;
   for(int i=0;i<s.size();i++)
   {
         int x = int(s[i]-96);
         sum+=(i+1)*x;       
   }
return 0;
}