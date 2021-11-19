#include <bits/stdc++.h>
#define lli long long int
using namespace std;
int countsetsbits(int n)
{
    int count=0;
    while(n>0)
    {
        count+=(n&1);
        n = n>>1;
    }
    return count;
}
int main()
{
    ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    string s;
    cin>>s;
    lli a =  stol(s, nullptr, 2);
    int count_set = countsetsbits(a);
    int count_unset = s.length() - count_set;
    if(count_set >= count_unset)
    {
        int same_zeroes = 0;
        for(int i=0;i<s.length()-1;i++)
        {
            if(s[i] == s[i+1])
                same_zeroes++;
        }
        same_zeroes++;
        int diff_zero = count_unset - same_zeroes ;
    }
    else
    {

    }
return 0;
}