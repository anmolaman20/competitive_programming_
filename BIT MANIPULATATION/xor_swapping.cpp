#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x,y;
    cout<<"Enter Two Number :"<<endl;
    cin>>x>>y;
    cout<<"Initialy first no was "<<x<<" and second no was "<<y<<endl;
    x =x^y;
    y = y^x;
    x = x^y;
    cout<<"Finally first no is "<<x<<" and second no is "<<y<<endl;
return 0;
}