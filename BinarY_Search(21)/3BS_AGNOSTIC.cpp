#include <bits/stdc++.h>
using namespace std;
int BS_Descending(int arr[],int n,int  ele)
{
    int start = 0;
    int end = n-1;
    while(start<=end)
    {
    int mid = start + (end-start)/2;  //u can write (start+end)/2  but if value is large it overflow so write in this way prevent u from from overflow
    if(arr[mid] == ele)
        return mid;
    else if(arr[mid]<ele) 
        end = mid -1;
    else if(arr[mid]>ele)
        start = mid + 1;
    }      
return -1;
}
int BS_Ascending(int arr[],int n,int  ele)
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
    int n;
    cout<<"Enter Number of Elements of The array : ";
    cin>>n;
    cout<<"Enter Elements : "<<endl;
    int arr[n];
    for(int i=0;i<n;i++)  
          cin>>arr[i];
    cout<<"Enter Key You Want to Search"<<" ";
    int ele;
    cin>>ele;
    if(n==1)
    {
        if(arr[0]==ele)
            cout<<"Element Found at Index "<<0<<endl;
        else
           cout<<"Element Not found : "<<endl;
    }
    else{
       if(arr[0]>arr[1])
       {
           int x = BS_Descending(arr,n,ele);
           if(x!=-1)
              cout<<"Element Found At index "<<x;
           else 
              cout<<"Element Not Found "<<endl;
       }
            
       else 
       {
           int x = BS_Ascending(arr,n,ele);
           if(x!=-1)
              cout<<"Elment Found At index "<<x;
            else 
               cout<<"Element Not Found "<<endl;
       }
            
    }     
return 0;
}