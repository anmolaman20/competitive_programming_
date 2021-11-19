/* 
 it is a program to encrpyt the data used in earliest time 
 anmol - > 1 14 13 15 12 and for space i am using tab"    ";
*/
#include <bits/stdc++.h>
using namespace std;
void latin_alpha_cipher(string str)
{
    int len = str.length();
    for(int i=0;i<len;i++)
    {
        if(isalpha(str[i])==0 && str[i]!=' ')
        {
            cout<<"Enter only alphbates and space : ";
            break;
        }
    }
    for(int i=0;i<len;i++)
    {
        if(isupper(str[i]))
            cout<<(str[i] - 65 + 1)<<" ";
        else if(islower(str[i])) 
            cout<<(str[i] - 97 +1)<<" ";
        else 
           cout<<"\t"<<" ";
    }
}
int main()
{
   string str;
   getline(cin,str);
   latin_alpha_cipher(str);
return 0;
}