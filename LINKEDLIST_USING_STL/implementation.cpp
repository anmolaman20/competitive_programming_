#include <bits/stdc++.h>
using namespace std;
bool comp(int first,int second)
{
    return first>second;
}
int main()
{
    list<int> l1,l2,l3;
    l1 = {1,7,8,5,45,58,74,0};
    cout<<"front is "<<l1.front()<<endl;
    cout<<"back is "<<l1.back()<<endl;
    cout<<"push back five :"<<endl;
    l1.push_back(54);
    l1.push_front(88);
    cout<<"size "<<l1.size()<<endl;
    // l2 = {3,5,9};
    // l3 = {2,4,7,8};
    // l3.merge(l2,comp);
    // l1.sort();
    for(auto it = l1.rbegin();it!=l1.rend();++it)  //
    {
        cout<<' '<<*it;
    }
    // cout<<endl;
    // for(auto it = l3.begin();it!=l3.end();++it)
    // {
    //     cout<<' '<<*it;
    // }

    return 0;
}