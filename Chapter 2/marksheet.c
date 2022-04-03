/* program to calculate total marks of student , the percentage
   and also to find wether the student is failed or not.
*/

// program by ARPIT GUPTA (GALAHAD-ARPIT)
#include <stdio.h>  

 int main() 
{
    // taking input marks
     int a,b,c,d,e;

     printf("enter the marks of 1st subject \t");
     scanf("%d",&a);
 
     printf("enter the marks of 2nd subject \t");
     scanf("%d",&b);
     
     printf("enter the marks of 3rd subject \t");
     scanf("%d",&c);
     
     printf("enter the marks of 4th subject \t");
     scanf("%d",&d);
     
     printf("enter the marks of 5th subject \t");
     scanf("%d",&e);
     
     //calculating total marks and percentage
     int k = a+b+c+d+e;
     float per = (a+b+c+d+e)/5;
     

     printf("total marks = %d \n",k);
     printf("percentage = %f \n", per);

     //finding that student is passed with which division
     
     if (per >= 69.9 && per <=100)
         {
         printf("passed with 1st division \n");
         } 
     else if (per <=69.8 && per >= 40)
         {
         printf("passed with 2nd division \n");
         }
     else if (per < 39.9)
        {
            printf("failed this semester \n");
        }
     else
         {
         printf("nothing to say \n");
         }
      
      // finding that in how many subjects student is passed


     int z;


     if (a<40 )
         {
         printf("  back in 1st subject \n");
         z+=1;
         }
     else
         {printf(" ");}

    

     if (b<40 )
         {
         printf("   back in 2nd subject \n");
         z+=1;
         }
     else
         {printf(" ");}
     
     

     if (c<40 )
         {
         printf("   back in 3rd subject \n");
         z+=1;
         }
     else
         {printf(" ");}
    
     

     if (d<40 )
         {
         printf("   back in 4th subject \n");
         z+=1;
         }
     else
         {printf(" ");}
      
     

     if (e<40 )
         {
         printf("   back in 5th subject \n");
         z+=1;
         }
     else
         {printf(" ");}

     
     
    return 0;
}