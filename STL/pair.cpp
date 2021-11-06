#include <bits/stdc++.h>
using namespace std;
void print(pair<int,int>&p){
    cout<<"["<<p.first<<","<<p.second<<"]"<<endl;
}
int main()
{
   pair<int,int>p(10,20);
   print(p);

   vector<pair<string,int>>list;
   list.push_back(make_pair("anmol",20));
   list.push_back(make_pair("ankit",21));
   list.push_back(make_pair("saurabh",19));
   list.push_back(make_pair("kanahiya",22));
   list.push_back(pair<string,int>("virat",48));
   list.push_back(pair<string,int>("roohit",34));

   for(auto &ele:list)
      cout<<"["<<ele.first<<","<<ele.second<<']'<<endl;
  
return 0;
}