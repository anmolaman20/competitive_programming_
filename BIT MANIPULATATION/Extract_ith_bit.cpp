#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x,i;
    cout<<"Enter a Number :"<<endl;
    cin>>x;
    cout<<"Enter postion of that bit you want to extract :"<<endl;
    cin>>i;
    bitset<8U>b(x);
    cout<<"Initial entered NUmber was :"<<x<<" that is "<<b<<endl;
    int res = x & (1<<i);
    bitset<8U>b1(res);
    cout<<i<<"th position is :"<<b1[i]<<endl;

return 0;
}