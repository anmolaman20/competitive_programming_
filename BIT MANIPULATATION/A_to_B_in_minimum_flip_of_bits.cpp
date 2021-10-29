#include <iostream>
using namespace std;
/*idea of this code is 5 ---> 5&4 ==101 & 100 ==> 100
now 100 & 011(n-1=4-1=3)  ==> 000  now loop stop ans would be 2;
int countsetbits(int n)
{
    int count=0;
    while(n>0)
    {
        count++;
        n &= (n-1);
    }
    return count;
}  */


/*this is also perfect code because n&1  --> last bit one then ans will be 1  and shift right by 1 bits until number become zero*/
int countsetsbits(int n)
{
    int count=0;
    while(n>0)
    {
        count+=(n&1);
        n = n>>1;
    }
    return count;
}
int main()
{
    ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int a,b;
    cout<<"Enter two Number :"<<endl;
    cin>>a>>b;
    // int a = 11,b = 15;  //11-->1011 and 15 = 1111 so 1 bit required (2nd) to flip in a ;
    cout<<"Minimum no of bits required to flip A to B"<<endl;
    cout<<countsetsbits(a^b)<<endl;
return 0;
}