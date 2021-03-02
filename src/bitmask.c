#include "bitmask.h"

//Function to set bit
int set(int a, int b) 
{ 
    return (a | (1 << (b - 1))); 
} 
  
// Function to reset the bth bit of a 
int reset(int a, int b) 
{ 
    return (a & (~(1 << (b - 1)))); 
} 
  
// Function to toggle the bth bit of a
int flip(int a, int b)
{ 
    return (a ^ (1 << (b - 1))); 
} 

int query(int a,int b)
{

}
