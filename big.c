#include<stdio.h>
 
void big()
{
   int a, b, c;
   
   printf("Enter two numbers to add\n");
   scanf("%d%d", &a, &b);
   
   c = a + b;
   
   printf("Sum of the numbers = %d\n", c);
   
//   return 0;
}