#include <stdio.h> 
int star4(int z, char ch);

 int main() 
{
  
 
    //left shifted triangle
        int r1;
        char c;
        printf("enter the number of row you want to print\t");
        scanf("%d", &r1);
        printf("give the character or write a word you want to print\t");
        scanf("%c", &c);
        printf(star4(r1, c));

    return 0;
}

// to print right shifted triangle
 star4(int z, char ch)
{
    int i, j;
    scanf("%c", &ch);
    for (i = z; i >=0; i--)
    {
        for (j = i; j >=i; j--)
        {
            printf(" %c ", ch);
        }
        printf("\n");
    }
}