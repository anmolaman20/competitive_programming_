#include <bits/stdc++.h>
using namespace std;
int main()
{
    /* we want to change last set bit that is 1
    13 ---> 1101 and we want 1100    concept is 13 & 12(n-1)  ===> 1101 & 1100 ==>1100 equal to desired ans 
    if 12 ----> 1100  then we want 1000 same concept 12 & 11(n-1)  ==> 1100 & 1011  ==> 1000 equal to desired ans
    */
   int x;
   cin>>x;
   bitset<8U>b(x);
   cout<<"Initial Number was : "<<x<<" that is "<<b<<endl;
   int y = x&(x-1);
   bitset<8U>b1(y);
   cout<<"Final Number after changing last set bit  : "<<y<<" that is "<<b1<<endl;


return 0;
}