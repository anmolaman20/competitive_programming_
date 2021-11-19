#include <iostream>
using namespace std;
int isprime(int n)
{
    if(n==1) return 0;
    if(n==2) return n;
    for(int i=2;i<n;i++)
    {
        if(n%i==0)   return 0;
    }
    return n;
}
int main()
{
    int n;
    cout<<"Enter a Number :"<<"\n";
    cin>>n;
    for(int i=1;i<=n;i++)
    {
       int x = isprime(i);
       if(x!=0)
           cout<<x<<" ";
           
    }
   
return 0;
}