#include <stdio.h> 

 int main() 
{
     char ch;
     printf("enter any character :- \n ");
     scanf("%c",&ch);

     if (ch>=97 && ch<=122){
         printf("the given character is lower case %c",ch);
     }
     else if (ch>=65 && ch<=90){
         printf("the given character  is upper case %c",ch);
     }
      
     else if (ch>=49 && ch<=57){
         printf(" the given character  is a number %c",ch);
     }

     else {
         printf("the given character is special  %c",ch);
     }
     

     return 0;
}