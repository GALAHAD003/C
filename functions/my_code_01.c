#include <stdio.h> 

 int main() 
{
    int a,i,j;
    printf("enter the value for 'a' \t");
    scanf("%d", &a);

    for (i =0 ; i <= a;i++ )
    {
        for (j = 0; j <= i;j++)
        {
            printf("e");

        }
        printf("\n");
    }
        return 0;
}