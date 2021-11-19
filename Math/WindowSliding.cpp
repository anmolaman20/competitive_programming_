#include <iostream>
#include <bits/stdc++.h>
#define endl "\n"
#define lli long long int;
using namespace std;
bool match(int l,int r,string text,string pattern)
{
    for(int i=0;i<pattern.size();i++)
    if(text[l+i]!=pattern[i])   return false;
    return true;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cout<<"Enter Test Cases :"<<" ";
    cin>>t;
    cin.ignore();  
    while(t--)
    {
      string text,pattern;
      getline(cin,text);
      getline(cin,pattern);
      int lt = text.size();
      int lp = pattern.size();
      for(int L = 0,R= lp-1;R<lt;L++,R++)
      {
          if(match(L,R,text,pattern))
              cout<<L<<" ";
      }
      cout<<endl;
    }
return 0;
}