/*
Input:  arr[] = {2, 5, 2, 8, 5, 6, 8, 8}
Output: arr[] = {8, 8, 8, 2, 2, 5, 5, 6}

Input: arr[] = {2, 5, 2, 6, -1, 9999999, 5, 8, 8, 8}
Output: arr[] = {8, 8, 8, 2, 2, 5, 5, 6, -1, 9999999}

other with the help of heap -->o(nlogk)

*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
   int arr[] = {2,5,2,8,5,6,8,8};   //o/p -> 8,8,8,2,2,5,5,6  or 8,8,8,5,5,2,2,6
   /*
   2-2
   5-2
   8-3
   6-1
   */
   int n =  sizeof(arr)/sizeof(arr[0]);
   map<int,int>mp;
   for(int i=0;i<n;i++)
   {
       mp[arr[i]]++;
   }
   priority_queue<pair<int,int>>maxh;
   for(auto i=mp.begin();i!=mp.end();i++)
   {
        maxh.push({i->second,i->first}); 
   }
   while(maxh.size())
   {
       int freq = maxh.top().first;
       for(int i = 0;i<freq;i++)
            cout<<maxh.top().second<<" ";
       maxh.pop();
   }
   
return 0;
}