#include <iostream>
#define endl "\n"
using namespace std;
int main()
{
    int n;
    cout<<"Enter a Number to Find the zeroes at End in Factorial of that Number "<<endl;
    cin>>n;
    int res = 0;
    for(int i = 5;i<=n;i*=5)
    {
        res+=n/i;
    }
    cout<<res<<endl;
return 0;
}