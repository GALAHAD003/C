// to  add , substract , multiply , divide two numbers
 #include <stdio.h> 
 
 // function header
 float sum(float a, float b);
 float multiply( float c,float d);
 float divide(float e, float f);
 float sub(float g, float h);

// main body
 float main() 
{    
     int n1;
     
     printf("enter the number of values you have to take \n");
     scanf("%d",&n1);

     for(n1;n1>=0;n1--);
     {

        float a;
        printf("enter the value \n 1 for multiplication \n 2 for division \n 3 for substraction \n 4 for addition \n");
        scanf("%f",&a);

        if  (a==1){
            float m,n;
            printf("enter the value for multiplication \n");
            scanf("%f\n",&m);
            scanf("%f",&n);
            multiply(m,n);
            printf("\n");
        }
        
        else if (a==2){
            float j,k;
            printf("enter the value for division \n");
            scanf("%f\n",&j);
            scanf("%f",&k);
            divide(j,k);
            printf("\n");
        }
        
        else if (a==3){
            float o,p;
            printf("enter the value for substraction \n");
            scanf("%f\n",&o);
            scanf("%f",&p);
            sub(o,p);
        }
        
        else if (a==4){
            float x,y;
            printf("enter the value for addition \n");
            scanf("%f\n",&x);
            scanf("%f",&y);
            sum(x,y);
            printf("\n");
        }
        
        else{
            printf("invalid");
        }
        
     }  
     return 0;
}
 
 // main function started
 float sum(float a,float b){
    printf(" sum is %f", a+b);
   }
 float multiply( float c, float d){
     printf("multiplication is %f",c*d);

 }
 float divide(float e, float f){
     printf("division is %f",e/f);
 }
 float sub(float g , float h){
     printf(" the substraction is %f",g-h);
 }
 