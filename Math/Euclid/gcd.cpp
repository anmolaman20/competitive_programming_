//gcd is stands for greatest common divisor its another name is HCF that is highest
//common factor.
/*
  algo is : - 
   gcd(a,b) = gcd(b,a%b)
   gcd(a,0) = a
   gcd(10,25)  -> gcd(25,10)  -> gcd(10,5)  -> gcd(5,0) -> 5
basically original theroem was like 
   gcd(a,b)  -> gcd(b,a-b)  ex- 10,25 -> 25,15 -> 15,10 -> 10,5 -> 5,5 -> 5,0 = 5
*/
#include<bits/stdc++.h>
using namespace std;
int gcd(int a,int b)
{
    return b==0?a:gcd(b,a%b);
}
int main()
{
    int a,b;
    cin>>a>>b;
    cout<<"GCD with my defined function : "<<gcd(a,b)<<endl;
    cout<<"GCD with inbulit function is : "<<__gcd(a,b)<<endl;
}