/*
 here some set of (x,y) are given and we'll have to find the closet pt fro origin
 concept make dist as key heap and find out(sqrt(x^2+y^2))  = (x^2+y^2);
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
   int arr[4][2]= {{1,3},{-2,2},{5,8},{0,1}};
   int k =2;  //may order will different(doesn't matter)
   priority_queue<pair<int,pair<int,int>>>maxh;
   for(int i=0;i<4;i++)
   {
       maxh.push({arr[i][0]*arr[i][0] + arr[i][1]*arr[i][1],{arr[i][0],arr[i][1]}});
       if(maxh.size()>k) maxh.pop();
   }
   while(maxh.size())
   {
       cout<<"(x,y) = ("<<maxh.top().second.first<<","<<maxh.top().second.second<<")"<<endl;
       maxh.pop();
   }
   cout<<"\n";

return 0;
}