/* 
we have to calucate the sum of ASCII value of all characters of a given string and check 
wheather it is a perfect square or not
for ex = aba == 97+98+97 = 292 and it is not a perfect sqaure
*/
#include <bits/stdc++.h>
using namespace std;
bool isperfectsquare(string str)
{
    int n = str.length();
    cout<<"Length of string : "<<n<<endl;
    int sum =0;
    for(int i=0;i<n;i++)
    {
        sum += (int)str[i];
    }
    cout<<"total sum of ascii value of all character is : "<<sum<<endl;
    long double square_root = sqrt(sum);
    cout<<"square root of sum value is : "<<square_root<<endl;
    return ((square_root - floor(square_root))==0);
}
int main()
{
   string str;
   cout<<"Enter a string : ";
   cin>>str;
   if(isperfectsquare(str))
      cout<<"YES, IT IS PERFECT SQUARE";
   else  cout<<"NO, IT IS NOT A PERFECT SQUARE";
return 0;
}