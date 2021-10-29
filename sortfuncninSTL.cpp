#include <bits/stdc++.h>
using namespace std;
struct Interval
{
    int start,end;
};
bool compatator(Interval l1,Interval l2)
{
    return (l1.end > l2.end);
    //l1.start<l2.start------sort based on 1st argument in ascending order
    //l1.start>l2.start------sort based on 1st argument in decending order
    //l1.end<l2.end-------sort based on 2nd argument in ascending order
    //l1.end>l2.end-------sort based on 2nd argument in decending order
}
int main()
{
    Interval arr[] = {{8,2},{1,6},{2,5},{4,9}};
    int n = sizeof(arr)/sizeof(arr[0]);
    sort(arr,arr+n,compatator);//complexity --- o(nlogn)
    for(int i=0;i<n;i++)
    {
        cout<<"["<<arr[i].start<<","<<arr[i].end<<"]"<<",";
    }
return 0;
}