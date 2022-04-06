#include <stdio.h>
int diamond(int n, char ch);

int main()
{
    int n;
    char c;

    printf("enter number of rows\n");
    scanf("%d", &n);
    printf("enter the character you want to print\n");
    scanf("%c",&c);
    diamond(n, c);

    return 0;
}


 diamond(int n, char ch) 

{
    int i,k;

    scanf("%c", &ch);

    for (k = 1; k <= n; k++)
    {
        for (i = 1; i <= n - k; i++)
        {
            printf(" ");
        }
        for (i = 1; i <= 2 * k - 1; i++)
        {
            printf("%c", ch);
        }   
        printf("\n");
    }
    for (k = 1; k <= n - 1; k++)
    {
        for (i = 1; i <= k;i++)
        {
            printf(" ");
        }
         for (i = 1; i <= 2 * (n - k) - 1; i++)
        {
            printf("%c",ch);
        }
        printf("\n");
        }
        
}