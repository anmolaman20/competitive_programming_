/*
  
*/
#include <bits/stdc++.h>
using namespace std;
string encrypt(string str,int shift)
{
    string result = "";
     for(int i=0;i<str.length();i++)
    { 
        string result;
        if(isupper(str[i]))
            result += char(int(str[i]+shift-65)%26 + 65);
        else 
            result += char(int(str[i]+shift-97)%26 + 97);
    } 
    return result;
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