/*
arr[]={1,1,1,3,2,2,4}
k=2 
here op is 1,2(order may differ) 
coz 1 has 3 frequency and 2 has 2 frequency

we are going to keep record of number with frequency (key) in heap
frequency can be find out with map function
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[] = {1,1,1,3,2,2,4};
    int k =2;
    int n = sizeof(arr)/sizeof(arr[0]);
    unordered_map<int,int> mp;
    for(int i=0;i<n;i++)
    {
        mp[arr[i]]++;
    }
    /*
    map will look like...
       1-3
       3-1
       2-2
       4-1
    */
    priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>minh;
    for(auto i=mp.begin();i!=mp.end();i++)
    {
         minh.push({i->second,i->first});
         if(minh.size()>k) minh.pop();
    }cout<<"\tTop Frequent Numbers are :\n\n";
    while(minh.size())
    {
        cout<<minh.top().second<<" "<<"with frequency of "<<minh.top().first<<endl;
        minh.pop();
    }
return 0;
}