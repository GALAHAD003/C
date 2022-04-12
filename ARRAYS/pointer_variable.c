 // program to check wether the address of variable is same in function or not!

#include <stdio.h>
void printadd(int a){
    printf("the adddress of variable a is %u\n ",&a);
}

 int main() 
{
     int i;
     printf("enter the value for i\t");
     scanf("%d",&i);

     printf("the value of variable i is %d\n",i);

     printadd(i);

     printf("the address of variable i is %u\n",&i);

    return 0;
}