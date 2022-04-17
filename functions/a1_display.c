#include <stdio.h> 
#include<stdlib.h>
 
 int multiply( int a, int b);

 int main(){
     int a,b,c;
     printf("enter the value to multiply \n");
     scanf("%d \n %d",&a,&b);
     c=multiply(a,b);
     printf("The product of these numbers :%d",c);
     
      return 0;
 }  

int multiply( int a,int b){
    int c=a*b;
    printf(" the value of multiplication is %d \n",c);
    return c;
}