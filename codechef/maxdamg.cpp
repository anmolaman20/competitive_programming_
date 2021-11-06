#include <iostream>
#include <bits/stdc++.h>
#define endl "\n"
using namespace std;

int main() {
   
    int count=0;
       string ch = "10010000";
       for(int i=0;i<ch.length()-1;i++)
       {
           if(ch[i]==ch[i+1])  continue;
           else count++;
       }
        count++;
        cout<<count<<endl;
           if(count&1) cout<<"SAHID"<<endl;
        else cout<<"RAMADHIR"<<endl;
	return 0;
}
