/* i/p  -- 7 10 4 3 20 15 ,k=3
o/p -- 7

logic 
naive approach -- sort 3 4 7 10 15 20  and print arr[k-1]  --> o(nlogn)

optimized code -- use max heap --> o(nlogk) -- don't sort unnecessary elements 

*/
#include <bits/stdc++.h>
using namespace std ;
int main()
{
    
    int arr[] = {7,10,4,3,20,15};
    int k =3;
    int n = sizeof(arr)/sizeof(arr[0]);
    sort(arr,arr+n);
    cout<<"\t NAIVE APPROACH\n";
     cout<<arr[k-1]<<" ";

    cout<<"\n\n\tUSING HEAP\n";
    priority_queue<int>maxh;
    for(int i=0;i<n;i++)
    {
        maxh.push(arr[i]);
        if(maxh.size()>k)  maxh.pop();
    }
       cout<<maxh.top()<<" ";
       maxh.pop();

return 0;
}