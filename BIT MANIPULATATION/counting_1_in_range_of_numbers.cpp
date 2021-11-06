#include <bits/stdc++.h>
using namespace std;
int countset(int n)
{
    int count=0;
    while(n>0)
    {
        count+=(n&1);
        n = n>>1;
    }
    return count;
}
/*int main()
{
   int x,y,sum=0;
   cout<<"Enter two number :"<<endl;
   cin>>x>>y;
   for(int i=x;i<=y;i++)
       sum += countset(i);
   cout<<"Sum of all setbits in range of "<<x<<" to "<<y<<" is "<<sum<<endl;
return 0;
}*/

//below are more efficient code  by skipping odd no comes after even no coz both same setbit only one extra in odd one 
//so we can use formula like 2*count(even) + 1 ---->this is for two consecutive no first one is even and then followed by odd

int main()
{
    int x,y,count=0;
    cout<<"Enter two number :"<<endl;
    cin>>x>>y;
    for(int i=x;i<=y;i++)
    {
        if((i&1)==0 && i<y)
        {
            count += 2*countset(i) +1;i++;
            continue;
        }
        count+=countset(i);
    }
    cout<<"Total number of bit in range is : "<<count<<endl;
return 0;
}