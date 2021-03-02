#include "myutils.h"

//Function for factorial of a number
int factorial(int k)
{
  if (k == 0) 
    return 1;
  else
    return (k*factorial(k-1));
}

//Function to check prime number
int isPrime(int m)
{
   int x;
 
   for ( x = 2 ; x <= m - 1 ; x++ )
   { 
      if ( m % x == 0 )
     return 0;
   }
   return 1;
}
 
//Function for palindrome
int isPalindrome(int n){
    int r,sum=0,temp;
    temp=n;
    while(n>0)    
    {    
        r=n%10;    
        sum=(sum*10)+r;    
        n=n/10;    
    }    
    if(temp==sum)    
       return 1; 
    else     
       return 0;  

}
