// to  add , substract , multiply , divide two numbers
 #include <stdio.h> 
 
 // function header
 int sum(int a, int b);
 int multiply( int a, int b);
 float divide(float a, float b);
 int sub(int a , int b);

// main body
 int main() 
{
    int x,z;
    printf("enter the value for addition , multiplication , division , substraction \n");
    scanf("%d\n",&x);
    scanf("%d",&z);

    sum(x,z);
    printf("\n");

    multiply(x,z);
    printf("\n");

    divide(x,z);
    printf("\n");

    sub(x,z);
     
    return 0;
}
 
 // main function started
 int sum(int a, int b){
    printf(" sum is %d", a+b);
   }
 int multiply( int a, int b){
     printf("multiplication is %d",a*b);
 }
 float divide(float a, float b){
     printf("division is %f",a/b);
 }
 int sub(int a , int b){
     printf(" the substraction is %d",a-b);
 }
 