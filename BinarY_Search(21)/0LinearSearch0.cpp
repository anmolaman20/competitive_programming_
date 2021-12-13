#include <bits/stdc++.h>
using namespace std;
int LinearSearch(int arr[],int n,int ele)
{
   for(int i=0;i<n;i++)
   {
       if(arr[i]==ele)  
           return i;
   }
return -1;
}
int main()
{
    int arr[] = {7,52,14,2,3,1,26};
    int n = sizeof(arr)/sizeof(arr[0]);
    int ele;
    cout<<"\nEnter the elemnet want to search : "<<"\t";
    cin>>ele;
    int x = LinearSearch(arr,n,ele);
    if(x != -1)
           cout<<"Entered Element at Index : "<<x;
    else 
           cout<<"Entered Element Not Found in ARRAY "<<endl;

return 0;
}