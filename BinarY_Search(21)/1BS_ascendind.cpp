#include <bits/stdc++.h>
using namespace std;
int BS(int arr[],int n,int  ele)
{
    int start = 0;
    int end = n-1;
    while(start<=end)
    {
    int mid = start + (end-start)/2;  //u can write (start+end)/2  but if value is large it overflow so write in this way prevent u from from overflow
    if(arr[mid] == ele)
        return mid;
    else if(arr[mid]<ele) 
        start = mid + 1;
    else if(arr[mid]>ele)
        end = mid - 1;
    }      
return -1;
}
int main()
{
    cout<<"\t\tBinary Search\n\n";
    int arr[] = {1,4,13,25,36,96,100};
    cout<<"Enter Key You Want to Search"<<" ";
    int ele;
    cin>>ele;
    int n = sizeof(arr)/sizeof(arr[0]);
    int x = BS(arr,n,ele);
    if(x!= -1)
        cout<<"\nElement Found At Index : "<<x;
    else  
         cout<<"\nElement Not Found In Array\n";
      
return 0;
}