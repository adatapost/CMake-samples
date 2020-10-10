#include <stdio.h>

int is_odd(int num) { return num%2!=0; }
int is_prime(int num)
{
  for(int i=2;i<=num/2;i++)
   if(num%i==0) return 0;
  return 1;
}