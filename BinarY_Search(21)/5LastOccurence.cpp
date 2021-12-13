#include <bits/stdc++.h>
using namespace std;
int BS(int arr[],int n,int ele)
{ 
     int start = 0;
     int end = n-1;
     int res = -1;
     while(start<=end)
     {
         int mid = start + (end - start)/2;
         if(arr[mid] == ele)
         {
             res = mid;
             start = mid + 1;
         }
         else if(arr[mid]>ele)
             end = mid -1;
         else if(arr[mid]<ele)
            start = mid + 1;
     }
return res;
}
int main()
{
   int arr[] = {12,22,25,25,25,25,36,36,58};
   int n = sizeof(arr)/sizeof(arr[0]);
   int ele;
   cout<<"Enter Element : ";
   cin>>ele;
   int x = BS(arr,n,ele);
   if(x!=-1)
      cout<<"Last Occurence of element is at index "<<x<<endl;
   else 
      cout<<"Element Not Found "<<endl; 
return 0;
}