// program to print different pattern using functions
#include <stdio.h>
int star1(int z, int y, char ch);
int star2(int z, char ch);
int star3(int z, char ch);
int star4(int z, int y, char ch);
int star5(int z, int y, char ch);
int star6(int z, int y, char ch);
int star7(int z, int y, char ch);
int star8(int z, int y, char ch);
int star9(int z, int y, char ch);
int star10(int z,  char ch);

int main()
{
    int n;
    printf("choose 1 for printing simple ractangle with any character\n");
    printf("choose 2 for printing square with any character\n");
    printf("choose 3 for printing left shifted triangle with any character\n");
    printf("choose 4 for printing hollow square with any character\n");
    printf("choose 5 for printing invert  Z with any character\n");
    printf("choose 6 for printing  Z with any chracter\n");
    printf("choose 7 for parallel vertical lines  with any character\n");
    printf("choose 8 for parallel vertical lines  with any character\n");
    printf("choose 9 for cross lines  with any character\n");
    printf("choose 10 for hollow square cross with any character\n");
    printf("choose here \t ");
    scanf("%d", &n);

    if (n == 1) //simple ractangle
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
    }
    else if (n == 2)
    { //square
        int r1;
        char c;
        printf("enter the number lines you want to print\t");
        scanf("%d", &r1);
        printf("give the character or write a word you want to print\t");
        scanf("%c", &c);
        printf(star2(r1, c));
    }
    else if (n == 3)
    { //left shifted triangle
        int r1;
        char c;
        printf("enter the number of row you want to print\t");
        scanf("%d", &r1);
        printf("give the character or write a word you want to print\t");
        scanf("%c", &c);
        printf(star3(r1, c));
    }
    else if (n == 4)
    { //hollow square
        int r1, c1;
        char c;
        printf("enter the number of row you want to print\t");
        scanf("%d", &r1);
        printf("enter the number of column you want to print\t");
        scanf("%d", &c1);
        printf("give the character or write a word you want to print\t");
        scanf("%c", &c);
        printf(star4(r1, c1, c));
    }
    else if (n == 5)
    { // printing invert Z
        int r1, c1;
        char c;
        printf("enter the number of row you want to print\t");
        scanf("%d", &r1);
        printf("enter the number of column you want to print\t");
        scanf("%d", &c1);
        printf("give the character or write a word you want to print\t");
        scanf("%c", &c);
        printf(star5(r1, c1, c));
    }
    else if (n == 6)
    { // printing  Z
        int r1, c1;
        char c;
        printf("enter the number of row you want to print\t");
        scanf("%d", &r1);
        printf("enter the number of column you want to print\t");
        scanf("%d", &c1);
        printf("give the character or write a word you want to print\t");
        scanf("%c", &c);
        printf(star6(r1, c1, c));
    }
    else if (n == 7)
    { // printing  vertical parallel lines
        int r1, c1;
        char c;
        printf("enter the number of row you want to print\t");
        scanf("%d", &r1);
        printf("enter the number of column you want to print\t");
        scanf("%d", &c1);
        printf("give the character or write a word you want to print\t");
        scanf("%c", &c);
        printf(star7(r1, c1, c));
    }
    else if (n == 8)
    { // printing  horizontal parallel lines
        int r1, c1;
        char c;
        printf("enter the number of row you want to print\t");
        scanf("%d", &r1);
        printf("enter the number of column you want to print\t");
        scanf("%d", &c1);
        printf("give the character or write a word you want to print\t");
        scanf("%c", &c);
        printf(star8(r1, c1, c));
    }
    else if (n == 9)
    { // printing cross lines
        int r1, c1;
        char c;
        printf("enter the number of row you want to print\t");
        scanf("%d", &r1);
        printf("enter the number of column you want to print\t");
        scanf("%d", &c1);
        printf("give the character or write a word you want to print\t");
        scanf("%c", &c);
        printf(star9(r1, c1, c));
    }
     else if (n == 10)
    { // printing hollow square cross
        int r1, c1;
        char c;
        printf("enter the number of row you want to print\t");
        scanf("%d", &r1);
        printf("give the character or write a word you want to print\t");
        scanf("%c", &c);
        printf(star10(r1,c));
    }
    
    
    
    
     return 0;
}

// all functions are here
// to print ractangle
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
//  to print square
star2(int z, char ch)
{
    int i, j;
    scanf("%c", &ch);
    for (i = 0; i <= (z - 1); i++)
    {
        for (j = 0; j <= (z - 1); j++)
        {
            printf(" %c", ch);
        }
        printf("\n");
    }
}
// to print left shifted triangle
star3(int z, char ch)
{
    int i, j;
    scanf("%c", &ch);
    for (i = 1; i <= z; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf(" %c ", ch);
        }
        printf("\n");
    }
}
// to print hollow square
star4(int z, int y, char ch)
{
    int i, j;
    scanf("%c", &ch);

    for (i = 1; i <= z; i++)
    {
        for (j = 1; j <= y; j++)
        {
            if (i == 1 || i == z || j == 1 || j == y)
            {
                printf("%c", ch);
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}
// to print invert z
star5(int z, int y, char ch)
{
    int i, j;
    scanf("%c", &ch);

    for (i = 1; i <= z; i++)
    {
        for (j = 1; j <= y; j++)
        {
            if (i == 1 || i == j || i == z )
            {
                printf("%c", ch);
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}
// to print  Z
star6(int z, int y, char ch)
{
    int i, j;
    scanf("%c", &ch);

    for (i = 1; i <= z; i++)
    {
        for (j = 1; j <= y; j++)
        {
            if (i == 1 || i == 5 || i+j == (z+1) )
            {
                printf("%c", ch);
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}
// to print  vertical parallel lines
star7(int z, int y, char ch)
{
    int i, j;
    scanf("%c", &ch);

    for (i = 1; i <= z; i++)
    {
        for (j = 1; j <= y; j++)
        {
            if (i == 1 || i == z )
            {
                printf("%c", ch);
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}
// to print horizontal parallel lines
star8(int z, int y, char ch)
{
    int i, j;
    scanf("%c", &ch);

    for (i = 1; i <= z; i++)
    {
        for (j = 1; j <= y; j++)
        {
            if (j == 1 || j == z )
            {
                printf("%c", ch);
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}
// to print cross lines
star9(int z, int y, char ch)
{
    int i, j;
    scanf("%c", &ch);

    for (i = 1; i <= z; i++)
    {
        for (j = 1; j <= y; j++)
        {
            if (j == i || i+j == (z+1) )
            {
                printf("%c", ch);
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}
// to print hollow square cross 
star10(int z,  char ch)
{
    int i, j;
    scanf("%c", &ch);

    for (i = 1; i <= z; i++)
    {
        for (j = 1; j<=z ; j++)
        {
            if ( i == 1 || i == z || j == 1 || j == z ||j == i || i+j == (z+1) )
            {
                printf("%c", ch);
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}







