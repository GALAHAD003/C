#include <stdio.h> 

 int main() 
{
    int phy,math,che;
    printf("enter physics marks \n \t");
    scanf("%d",&phy);

    printf("enter chemistry marks \n \t");
    scanf("%d",&che);

    printf("enter maths marks  \n \t"); 
    scanf("%d",&math);

    int total = phy+math+che;
    if ((total/3 <= 33) || (phy<33) || (math<33) || (che<33)
    {
        printf(" you are failed with %d",total/3);
    }
     else if (total/3 >= 33){
         
        printf(" you are passed with %d ",total/3);
    }
    else {
        printf(" nothing");
    }
     
     
}