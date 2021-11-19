/*
  it is an earliest and simple technique used for data encryption,it is simply a data substitution techniques 
 for ex - anmol - 114131512
 and if shift is given like 2
 then anmol becomes -> cpoqn .
*/
#include <bits/stdc++.h>
using namespace std;
string encrypt(string str,int shift)
{
    string res = "";
     for(int i=0;i<str.length();i++)
    { 
        if(isupper(str[i]))
            res = res + char(int(str[i]+shift-65)%26 + 65);
        else 
            res = res + char(int(str[i]+shift-97)%26 + 97);
    } 
    return res;
}
int main()
{
    string str;
    int shift;
    cout<<"Enter string and shift position : "<<endl;
    cin>>str>>shift;
    string s1 = encrypt(str,shift);
    cout<<"Encrypted string is : "<<s1<<endl;
return 0;
}