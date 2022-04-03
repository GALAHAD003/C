//code to find income tax to pay

#include <stdio.h> 

 int main() 
{
     int income;
     // takiing income
     printf("to calculate your tax \n");
     printf(" please enter your income \t");
 
     scanf("%d",&income);
     float tax=0;

      if (income >= 250000 && income <= 500000){
          tax = ( tax + 0.05 * (income - 250000));
      }

      if (income >= 500000 && income <= 1000000){
          tax = ( tax + 0.2 * (income - 500000));
      }

      if (income > 1000000){
          tax = ( tax + 0.3 * (income - 1000000));
      }
     
     printf(" your total tax is\n");
     printf( "%f",tax);

     
    return 0;
}