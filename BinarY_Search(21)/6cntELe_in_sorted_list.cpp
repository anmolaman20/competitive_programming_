#include <bits/stdc++.h>
using namespace std;
int BS_FirstOccurence(int arr[],int n,int ele)
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
             end = mid - 1;
         }
         else if(arr[mid]>ele)
             end = mid -1;
         else if(arr[mid]<ele)
            start = mid + 1;
     }
return res;
}
int BS_LastOccurence(int arr[],int n,int ele)
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
   int x = BS_LastOccurence(arr,n,ele);
   int y = BS_FirstOccurence(arr,n,ele);
   if(x!=-1 && y!=-1)
      cout<<"Total Occurence of element is  "<<(x-y+1)<<endl;
   else if(x==-1 && y==-1)
       cout<<"Total Count of an element is "<<0<<endl; 
   else if(x==y)
      cout<<"Total Count is : "<<1<<endl;
return 0;
}