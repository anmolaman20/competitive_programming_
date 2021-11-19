/*
ASCII SENTENCE - it is the ascii value of all character of a string in thier respective positions
Enter a string : hello, world!
ASCII SENTENCE OF GIVEN STRING IS :  104101108108111443211911111410810033
*/

#include <bits/stdc++.h>
using namespace std;
void ascii_sentence(string str)
{
    int n = str.length();
    for(int i=0;i<n;i++)
    {
        int ascii_of_character = (int)str[i];
        cout<<ascii_of_character<<"";
    }
}
int main()
{
   string str;
   cout<<"Enter a string : ";
  getline(cin,str);
   cout<<"ASCII SENTENCE OF GIVEN STRING IS : "<<" ";
   ascii_sentence(str);
return 0;
}