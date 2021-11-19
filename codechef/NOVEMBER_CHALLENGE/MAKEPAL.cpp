#include <iostream>
#include <bits/stdc++.h>
#define endl "\n"
using namespace std;

int main() {
    int T;cin>>T;
    while(T--)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
           cin>>arr[i];  //4
        int count_odd=0;
        for(int i=0;i<n;i++)
        {
            if(arr[i]&1)   count_odd++;
        }
        if(count_odd == 0)
            cout<<0<<endl;
        else
        {
            if(count_odd & 1)   cout<<(count_odd - 1)/2<<endl;
            else   cout<<count_odd/2<<endl;
        }
    }
	// your code goes here
	return 0;
}
