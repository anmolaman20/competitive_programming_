#include<bits/stdc++.h>
using namespace std;
int knapsack(int wt[],int val[],int W,int n)
{
    //base condition
    if(n==0 || W==0)
         return 0;
    if(wt[n-1]>W)
         return knapsack(wt,val,W,n-1);
    else 
         return max(val[n-1]+knapsack(wt,val,W-wt[n-1],n-1),knapsack(wt,val,W,n-1));
}
int main()
{
    int wt[] = {7,6,5,1,2};
    int val[] = {28,22,18,1,6};
    int W = 11;
    int n = sizeof(wt)/sizeof(wt[0]);
    cout<<"Maximum profit of this Knapsack is :\t"<<knapsack(wt,val,W,n)<<endl;

return 0;
}