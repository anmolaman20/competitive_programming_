#include <iostream>
#define endl "\n"
// #define mod le9+7  
using namespace std;
long fastpower(long a,long b,int n)
{
    long res=1;
    while(b>0)
    {
       if((b&1)!=0)
       {
           res = (res%n * a%n)%n;
       }
       a = (a%n * a%n)%n;
       b = b>>1;
    }
    return res;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    long a,b;
    cin>>a>>b;
    cout<<fastpower(a,b,100000007)<<endl;
return 0;
}