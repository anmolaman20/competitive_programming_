#include <bits/stdc++.h>
using namespace std;
// if ith bit is 0 then change to 1 and if it is 1 then change to 0;
int main()
{
   int x,i;
   cout<<"Enter the Number : "<<endl;cin>>x;
   cout<<"Enter the position you want to change the bit : "<<endl;cin>>i;
   bitset<8U>b(x);
   cout<<"Entered Number was : "<<x<<" that is "<<b<<endl;
   int y = x ^ (1<<i);
   bitset<8U>b1(y);
   cout<<"Number  after changed ith bit is "<<y<<" that is "<<b1<<endl;

return  0;
}