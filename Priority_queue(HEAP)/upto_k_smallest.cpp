/* i/p  -- 7 10 4 3 20 15
o/p -- 3 4 7 or 7 4 3 or --- order doesn't matter

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
    sort(arr,arr+n);
    cout<<"\t NAIVE APPROACH\n";
    for(int i=0;i<k;i++)  cout<<arr[i]<<" ";

    cout<<"\n\n\tUSING HEAP\n";
    priority_queue<int>maxh;
    for(int i=0;i<n;i++)
    {
        maxh.push(arr[i]);
        if(maxh.size()>k)  maxh.pop();
    }
    while(maxh.size())
    {
       st.push(maxh.top());
       cout<<maxh.top()<<" ";
       maxh.pop();

    }
    cout<<"\nif order matter : then use stack after using heap:  \n";
    while(st.size())
    {
        cout<<st.top()<<" ";
        st.pop();
    }

return 0;
}