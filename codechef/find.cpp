#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int  main()
{
    // ios::sync_with_stdio(false);
    // cin.tie(0);cout.tie(0);
    int t;cin>>t;
    while(t--)
    {
        string str="";
        int n;cin>>n;
        char arr[n];
        for(int i=0;i<n;i++) 
        {
            cin>>arr[i];
            str += arr[i];
        }
        while(str.find("01")<n || str.find("12")<n || str.find("23")<n || str.find("34") || str.find("45")<n || str.find("56")<n || str.find("67")<n ||str.find("78")<n ||str.find("89")<n || str.find("90")<n )
        {
            if(str.find("01") < n)
            {
                int x = str.find("01");
                str.replace(x, 2, "2");
                continue;
            }
             else if(str.find("12") < n)
            {
                int x = str.find("12");
                 str.replace(x, 2, "3");
                continue;
            }
             else if(str.find("23") < n)
            {
                int x = str.find("23");
               str.replace(x, 2, "4");
                continue;
            }
             else if(str.find("34") < n)
            {
                int x = str.find("34");
                str.replace(x, 2, "5");
                continue;
            }
             else if(str.find("45") < n)
            {
                int x = str.find("45");
                str.replace(x, 2, "6");
                continue;
            }
             else if(str.find("56") < n)
            {
                int x = str.find("56");
               str.replace(x, 2, "7");
                continue;
            }
             else if(str.find("67") < n)
            {
                int x = str.find("67");
                str.replace(x, 2, "8");
                continue;
            }
             else if(str.find("78") < n)
            {
                int x = str.find("78");
                str.replace(x, 2, "9");
                continue;
            }
             else if(str.find("89") < n)
            {
                int x = str.find("89");
                str.replace(x,2,0);
                continue;
            }
             else if(str.find("90") < n)
            {
                int x = str.find("90");
                str.replace(x, 2, "1");
                continue;
            }
        }
        cout<<str<<endl;
    
        
    }
return 0;
}