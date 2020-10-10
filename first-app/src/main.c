#include <stdio.h>
#include "num.h"

int main()
{
 printf("Enter the no : ");
 int no;
 scanf("%d",&no);
 printf("\n%s", is_odd(no) ? "Odd Number" : "Even number");
 printf("\n%s", is_prime(no) ? "Prime" : "Not a prime");
 return 0;
}