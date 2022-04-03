#include <stdio.h> 

 int main() 
{
    int a,b,c,d,e;

    printf("enter the value of a \t");
    scanf("%d",&a);

    printf("enter the value of b \t");
    scanf("%d",&b);

    c = a+b;
    d = a-b;

    printf("1 or 2 \n");
    scanf("%d",&e);

    if (e==1)
    {
        printf("the value of a+b %d\t",c);
    }
    else {
        printf("the value of a-b %d\t", d);
    }


   
}