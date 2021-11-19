/* i/p  -- 7 10 4 3 20 15
o/p -- 20 15 10 or 10 15 20 or --- order doesn't matter

logic 
naive approach -- sort 3 4 7 10 15 20  and print up to k elements  --> o(nlogn)

optimized code -- use max heap --> o(nlogk) -- don't sort unnecessary elements 

*/


#include <bits/stdc++.h>
using namespace std ;
int main()
{
    stack<int>st;
    int arr[] = {7,10,4,3,20,15};
    int k =3;
    int n = sizeof(arr)/sizeof(arr[0]);
    sort(arr,arr+n,greater<int>());
    cout<<"\t NAIVE APPROACH\n";
    for(int i=0;i<k;i++)  cout<<arr[i]<<" ";

    cout<<"\n\n\tUSING HEAP\n";
    priority_queue<int,vector<int>,greater<int>>minh;
    for(int i=0;i<n;i++)
    {
        minh.push(arr[i]);
        if(minh.size()>k)  minh.pop();
    }
    while(minh.size())
    {
      
       cout<<minh.top()<<" ";
       minh.pop();

    }

return 0;
}