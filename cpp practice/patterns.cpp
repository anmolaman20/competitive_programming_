/* pattern num1
n=5   // row no

1 2 3 4 5
1 2 3 4
1 2 3 
1 2 
1


pattern 2

1
0 1
1 0 1
0 1 0 1
1 0 1 0 1
n = 5

concept -->(i+j) is even then 1 else 0


pattern 3

_ _ _ _ * * * * *
_ _ _ * * * * * 
_ _ * * * * *
_ * * * * *
* * * * *

n=5;

pattern 4
n=4

_ _ _ * _ _ _ 
_ _ * * * _ _ 
_ * * * * * _
* * * * * * *
first print half 
concept j 1 to n-1 then j = end to 2*i-1

* * * * * * *
_ * * * * * _
_ _ * * * _ _
_ _ _ * _ _ _
second half -
j to 1 to i-1   then j = end  to 2*(n-i) + 1 + j
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;cin>>n;
    cout<<"\tPattern 1: \n"<<endl;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(j<=n+1-i) cout<<j<<"  ";
        }
        cout<<endl;
    }


     cout<<"\tPattern 2: \n"<<endl;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(j<=n+1-i) {
                if((i+j)&1)
                   cout<<"0 "<<" ";
                else
                   cout<<"1 "<<" ";
            }
        }
        cout<<endl;
         for(int j=1;j<=n;j++)
        {
            if(j<=n+1-i) {
                if((i+j)&1)
                   cout<<"0 "<<" ";
                else
                   cout<<"1 "<<" ";
            }
        }
        cout<<endl;
    }



     cout<<"\tPattern 3: \n"<<endl;
     int j;
    for(int i=1;i<=n;i++)
    {
        for( j=1;j<=n-i;j++)
        {
            cout<<"  "<<" ";
        }
        for(int k = j;k<=j+n-1;k++) cout<<"* "<<" ";
        cout<<endl;
    }

    n =4;
     cout<<"\tPattern 4: \n"<<endl;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n-i;j++)
        {
           cout<<"  "<<" ";
        }
        for(int k = j;k<2*i-1 + j;k++)  cout<<"* "<<" ";
        cout<<endl;
    }



return 0;
}