/* Sort a k sorted (nearly sorted array)  means a elements is sorted in its neary k elements 
means 6,5,3,2 --> definialtly min ele of array is one of these four if (k=3)
arr[] = {6,5,3,2,8,10,9}
k = 3 

approach naive write sort fn -->o(nlogn)

best is create a min heap coz we want to pop the min elements when it size >k
and store somewhere
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    priority_queue<int,vector<int>,greater<int>>minh;
    int arr[] = {6,5,3,2,8,10,9};
    int k =3;
    int n =  sizeof(arr)/sizeof(arr[0]);
    int temp[n];
    for(int i =0;i<n;i++)
    {
        minh.push(arr[i]);
        if(minh.size()>k)
        {
            cout<<minh.top()<<" ";
            minh.pop();
        }
    }
    while(minh.size())
    {
        cout<<minh.top()<<" ";
        minh.pop();
    }
return 0;
}