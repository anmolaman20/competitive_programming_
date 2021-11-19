/*
arr[] = {5,6,7,8,9}
int k =3 
x = 7
we have to find the 3 closest number of 7 in that array
so 
o/p  -->  7,6,8 (order may be different)


approach 
first subtract 7 from all elements of that array (absolute difference)
arr becomes --> 2,1,0,1,9
sort them --> 0,1,1,2,9
create heap --> put values in pair -->  x(key value difference) and the other one is value
key value should be lower so we have remove larger key value--->max heap
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[] = {5,6,7,8,9};
    int k = 3,x =7;
    int n =  sizeof(arr)/sizeof(arr[0]);
     priority_queue<pair<int,int>>maxh;
    for(int i =0;i<n;i++)
    {
         maxh.push({abs(arr[i]-x),arr[i]}); //{x,y}  use when push in heap
         if(maxh.size()>k) maxh.pop();
    }
    while(maxh.size())
    {
        cout<<maxh.top().second<<" ";
        maxh.pop();
    }
return 0;
}