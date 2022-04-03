#include <stdio.h> 

 int main() 
{
     int a;

     printf("program to check wether given number is even or odd");
     printf("enter a number to check : \t");
     scanf("%d",&a);

     if (a%2==0)
     {
       printf(" the given number is even %d",a);
     }

     else {
         printf("the given number is odd %d",a);
     }
    return 0;
}