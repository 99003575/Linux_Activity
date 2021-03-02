#include "mystring.h"
#include "myutils.h"
#include "bitmask.h"
#include "stdarg.h"
#include <stdio.h>
int main() 
{
  char s[]="linux activity";
  char str1[20]="linux program";
  char str2[20];
  char str3[100]="This is ",str4[]="Harshitha";
  char str5[]="Harshitha",str6[]="HarshITha";
  int prime=5,palindrome=787,fact=8,num=2,k=1;
  
  printf("length of the string is %lu\n ",mystrlen(s));
  printf("coping of string is %lu\n ",mystrcpy(str2,str1));
  printf("concatenation of string is is %lu\n ",mystrcat(str3,str4));
  printf("comparison of string is %lu\n ",mystrcmp(str5,str6));
  

  if(isPrime(prime))
      printf("the number is prime\n");

  if(isPalindrome(palindrome))
      printf("the number is palindrome\n");

  printf("factorial of %d is %d \n",fact,factorial(fact));
  printf("setting %d th of %d is %d \n",k,num,set(num,k));
  printf("setting %d th of %d is %d \n",k,num,reset(num,k));
  printf("setting %d th of %d is %d \n",k,num,flip(num,k));

  return 0;
}