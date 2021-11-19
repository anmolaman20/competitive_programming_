#include <stdio.h>
int main()
{
    int x=100,y=10;
  int *ptr = &x;
/*
int *ptr   ------pointer to variable
case 1:---*/
    printf("%d\n",*ptr);
    *ptr = 50; //  valid
    printf("%d\n",*ptr);
    printf("%d\n",x);
    ptr = &y; // valid
    printf("%d\n",*ptr);  


/*pointer to constant
case 2:
int const *ptr = &x;  // can be declare also like this ---const int *ptr;
printf("%d\n",*ptr);
/*ptr = 50; */  //invalid
//but valid the below one 
// int *ptr = &y;     ---valid
// printf("%d\n",*ptr);   

/*
constant pointer to variable
case 2--
int *const ptr = &x;
printf("%d\n",*ptr);
*ptr = 100;   //valid
printf("%d\n",*ptr);
ptr = &y  //invalid
*/

/*
case 4:
constant pointer to constant
const int *const ptr = &x;
printf("%d\n",*ptr);
*ptr = 100  //invalid 
ptr = &y;  //invalid*/

return 0;
}