#include<stdio.h>
#include<conio.h>

void main()
{
int a,b;
printf("swapping of a and b");
scanf("%d%d",&a,&b);
a=a+b;
b=a-b;
a=a-b;
printf("swap1 %d\n",a);
printf("swap2 %d\n",b);


}