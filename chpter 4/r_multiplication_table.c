// code to print multiplication table

#include <stdio.h> 

 int main() 
{
     int n1,n2;

     printf("enter the number whose table have to print");
     scanf("%d",&n1);

     n2=10;

     for ( n2 ; n2>=0 ; n2--){
         printf(" %d X %d = %d \n", n1 , n2 , n1*n2 );
         
     }
     

    return 0;
}