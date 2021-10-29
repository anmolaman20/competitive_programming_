#include <iostream>
#define endl "\n"
using namespace std;
int GCD(int a,int b)
{
    if(a==0)   return b;
    if(b==0)   return a;
    return GCD(b,a%b);
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int a,b;
    cin>>a>>b;
    cout<<GCD(a,b)<<endl;
return 0;
}