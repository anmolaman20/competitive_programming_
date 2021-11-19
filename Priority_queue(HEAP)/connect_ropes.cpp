#include <bits/stdc++.h>
using namespace std ;
int main()
{
    int arr[]={1,2,3,4,5};
    int n =  sizeof(arr)/sizeof(arr[0]);
    priority_queue<int,vector<int>,greater<int>>maxh;
    for(int i=0;i<n;i++)
    {
         maxh.push(arr[i]);
    }
    int cost = 0;
    while(maxh.size()>1)
    {
         int first = maxh.top();
         maxh.pop();
         int second = maxh.top();
         maxh.pop();
         cost = cost + first + second;
         maxh.push(first+second);
    }
    cout<<"Total minimum cost will be : "<<cost<<endl;
return 0;
}