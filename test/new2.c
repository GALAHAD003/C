#include <stdio.h>
void printNamestey();
void printBonjor();

int main() 
{
    char c ;
    printf("enter I for INDIAN & F for FRENCH\t");
    scanf("%c", &c);


     if (c == 'I'){
         printNamestey();
     }

    else{
        printBonjor();

    }
    return 0;
}

void printNamestey()
{
    printf("nmaestey");
}
void printBonjor() 
{
    printf("bonjor");
}
