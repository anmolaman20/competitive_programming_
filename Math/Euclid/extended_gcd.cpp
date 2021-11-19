/*
we have to find pair of x,y such that ax + by = gcd(a,b);
prcedure is : - simple maths 
we all know that a%b(remainder) = a(dividend) - a/b(quotient)*b(divisor);
and ax + by = gcd(b,a%b) = bx2 + (a%b)y2  
ax + by = bx2 +(a-(a/b)*b)y2 = bx2 + ay2 - (a/b)*by2 =  ay2 + b(x2-(a/b)y2);
so overall conclusion is x = y2 and y = x2 - (a/b)y2
*/
#include <bits/stdc++.h>
using namespace std;
pair<int ,int> extended_gcd(int a ,int b)
{
   if(b==0)
      return {1,1};
      auto [x2,y2]= extended_gcd(b,a%b);
    int x = y2, y = x2 - (a/b) * y2;
    return {x,y};
  
   
}
int main()
{
    int a,b;
    cin>>a>>b;
   auto [x,y] = extended_gcd(a,b);
   cout<<x<<' '<<y<<endl;
return 0;
}