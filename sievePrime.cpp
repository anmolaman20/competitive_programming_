#include <iostream>
using namespace std;
void SievePrime(int *arr,int n)
{
     for(int i=3;i<=n;i+=2)
     {
          arr[i]=1;
     }
     for(long long i=3;i*i<=n;i+=2)
     {
         if(arr[i]==1)
         {
             for(long long j=i*i;j<=n;j+=i)
             {
                 arr[j]=0;
             }
         }
     }
     arr[2]=1;
     arr[1]=arr[0]=0;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    int arr[n+1]={0};
    SievePrime(arr,n);
    for(int i=0;i<=n;i++)
    {
        if(arr[i]==1)
           cout<<i<<" ";
    }
return 0;
}