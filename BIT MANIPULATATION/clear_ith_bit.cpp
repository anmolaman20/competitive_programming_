#include <bits/stdc++.h>
using namespace std;
//if ith bit is setbit(1) change to not set (0) otherwise left as a tease;
//11,2--->1011 ==> after clear 2nd bit ==> 1011(that is 11 itself because 2nd bit is already clear)
//13,2--->1101 ==> after clear 2nd bit ==> 1001(that is 9)
int main()
{
   int x,i;
   cout<<"Enter a NUmber : "<<endl;
   cin>>x;
   cout<<"Enter the position you want to clear :"<<endl;
   cin>>i;
   bitset<8U>b(x);
   cout<<"Entered Nummber was : "<<x<<" that is "<<b<<endl;
   int y = x & ~(1<<i);
   bitset<8U>b1(y);
   cout<<"Number becomes after clearing "<<i<<" bit "<<y<<" that is "<<b1<<endl;

return 0;
}