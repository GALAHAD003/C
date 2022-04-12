#include <stdio.h> 

 int main() 
{
    int a=6;
    int *ptr;
    ptr=&a;
    printf("tne value of variable a is %d\n",a);
    printf("the address of variable a is %d\n",ptr);
    printf("the value of varible a is %d\n", *ptr);


     
    return 0;
}