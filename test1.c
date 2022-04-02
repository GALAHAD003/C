#include <stdio.h>
int star1(int z, int y, char ch);

int main ()
{
    int r1, c1;
        char c;
        printf("enter the number of column you want to print\t");
        scanf("%d", &c1);
        printf("enter the number of row you want to print\t");
        scanf("%d", &r1);
        printf("give the character or write a word you want to print\t");
        scanf("%c", &c);
        printf(star1(r1, c1, c));

        return 0;
}

star1(int z, int y, char ch)
{
    int i, j;
    scanf("%c", &ch);
    for (i = 0; i <= (z - 1); i++)
    {
        for (j = 0; j <= (y - 1); j++)
        {
            printf("%c", ch);
        }
        printf("\n");
    }
}