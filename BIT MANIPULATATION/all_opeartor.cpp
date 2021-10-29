#include <iostream>
#define endl "\n"
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);cout.tie(NULL);
	//and operator 
	int a=5,b=7;
	cout<<"AND :"<<" ";
	cout<<(a&b)<<endl;
/* 5 = 101 and 7 = 111   result will be   101---->=  5;*/
  
    //or operator
	cout<<"OR :"<<" ";
	cout<<(a|b)<<endl;
/* 5=101 or 7 = 111 result will be 111----->=7;  */

    // << (left shift operator or mutliply by 2*) 
	cout<<"LEFT_SHIFT :"<<" ";
	cout<<(a<<2)<<endl;
/* a=5--00000101-->after left shift by 2 bit it becomes --00010100 ans will be 20;*/
// note the formula a<<b == a*2^b;--->5*2^2=5*4=20;

    // >> (right shift operator)
	cout<<"RIGHT_SHIFT :"<<" ";
    cout<<(a>>1)<<endl;
//5>>1 == 00000101 --- after right shift -->00000010==2
//it is also known as divided by 2 operator
//remember the formula a>>b == a/(2^b);

   //not (~) operator
   cout<<"NOT :"<<" ";
   cout<<(~a)<<endl;
/* a = 5 -->00000101  -->after not it becomes -->11111010  but this is a negative number
and it is in 2s complement in machine so ans would be the 2s of this 
2s of 11111010 is 00000110  --->  == 6  but this is -ve 
so final ans will be -6;*/
return 0;

}