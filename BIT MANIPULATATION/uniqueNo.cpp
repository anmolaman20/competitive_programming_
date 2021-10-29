#include <iostream>
using namespace std;
int main()
{
    int arr[]={1,2,2,1,4,5,6,5,6},x=arr[0];
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i=1;i<n;i++){
          x = x^arr[i];
          cout<<x<<" ";}
    cout<<"Unique number is :"<<x<<endl;
return 0;
}