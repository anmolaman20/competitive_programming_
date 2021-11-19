#include <bits/stdc++.h>
using namespace std;
string remove_allchar_other_than_alphabets(string str)
{
    string temp="";
    for(int i=0;i<str.length();i++)
    {
        // if(isupper(str[i])==1 || islower(str[i]))
        //      temp += str[i];
        /*another method*/
        if(isalpha(str[i]))  temp+= str[i];
    }
    return temp;
}
int main()
{
  string str;
  cout<<"Enter the string : ";
//   cin>>str;
    getline(cin,str);
  cout<<"STring after removing all char other than alphabets : "<<endl;
  cout<<remove_allchar_other_than_alphabets(str)<<endl;
return 0;
}