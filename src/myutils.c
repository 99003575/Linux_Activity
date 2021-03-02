#include "myutils.h"

//Function for factorial of a number
int Factorial(int k)
{
  if (k == 0) 
    return 1;
  else
    return (k*Factorial(k-1));
}

//Function to check prime number
int isPrime(int m)
{
   int h;
 
   for ( h = 2 ; h <= m - 1 ; h++ )
   { 
      if ( m % h == 0 )
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
