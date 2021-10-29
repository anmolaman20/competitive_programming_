#include <bits/stdc++.h>
using namespace std;
int main()
{
   stack<int>st;
   st.push(5);
   st.push(7);
   st.push(9);
   st.pop();
   st.push(45);
   cout<<st.top()<<endl;
   cout<<"Elements of stack are : "<<endl;
   while(!st.empty())
   {
       cout<<st.top()<<" ";
        st.pop();
   }
return 0;
}