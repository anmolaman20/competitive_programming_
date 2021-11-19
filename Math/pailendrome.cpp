#include<iostream>
using namespace std;
int main()
{
    int x;
    cout<<"enter the number";
    cin>> x;
    int temp = x;
    int sum=0;
    while (x!=0)
    {
       int r=x%10;
       sum=sum*10+r;
       x = x/10;

    }
    if(sum==temp)  
    cout<<"it is a palindrome ";
    else
    cout<<"it is not a palindrome";

}