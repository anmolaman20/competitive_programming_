#include <bits/stdc++.h>
#define endl "\n"
#define ll long long
using namespace std;
int main()
{
    // ios::sync_with_stdio(false);
    // cin.tie(NULL);cout.tie(NULL);
    int a,b;
    cout<<"Enter Two Number :"<<endl;   //10 15
    cin>>a>>b;
    int maxxor = 0;
    for(int i=a;i<=b;i++)
    {
        for(int j=i;j<=b;j++)
        {
           int currxor = (i^j);
           if(currxor>maxxor)
              maxxor = currxor;
        }
    }
    cout<<maxxor<<endl;
return 0;
}