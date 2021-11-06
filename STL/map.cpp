#include <bits/stdc++.h>
using namespace std;
int main()
{
    map<string,int>Map;
    Map.insert(make_pair("raman",56));
    cout<<Map["raman"]<<endl;

    for(auto &ele:Map)
       cout<<ele.first<<" "<<ele.second<<endl;
return 0;
}