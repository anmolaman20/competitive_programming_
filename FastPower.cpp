#include <iostream>
#define endl "\n"
using namespace std;
int fastpower(int a,int b)
{
    int res=1;
    while(b>0)
    {
       if((b&1)!=0)
       {
           res = res*a;
       }
       a = a*a;
       b = b>>1;
    }
    return res;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int a,b;
    cin>>a>>b;
    cout<<fastpower(a,b)<<endl;
return 0;
}