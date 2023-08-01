#include<stdio.h>
void main()
{
   
   int num;
 
   printf("Enter an integer: ");
   scanf("%d",&num);
 
   // Modulus (%) returns remainder
   if ( num%2 == 0 )
      printf("%d is an even number", num);
   else if((num%2)!=0 && num>=0)
      printf("%d is a positive odd number", num);
   else
      printf("%d is a negative odd number", num);
}