#include <stdio.h>

int main()
{
    int num;
    int *ptr;

    printf("enter any number\t");
    scanf("%d", &num);
    ptr = &num;
    printf("%d", *ptr);

    return 0;
}