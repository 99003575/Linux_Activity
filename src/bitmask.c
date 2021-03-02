#include "bitmask.h"

//Function to set bit
int set(int a, int u) 
{ 
    return (a | (1 << (u - 1))); 
} 
  
// Function to reset the uth bit of a 
int reset(int a, int u) 
{ 
    return (a & (~(1 << (u - 1)))); 
} 
  
// Function to toggle the uth bit of a
int flip(int a, int u)
{ 
    return (a ^ (1 << (u - 1))); 
} 

int query(number)
{
    if((number & 1)==1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
