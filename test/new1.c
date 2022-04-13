#include <stdio.h>
int printHello();
int printGoodbye();

int main() 
{
    printHello();
    printGoodbye();

    return 0;
}

int printHello(){
    printf("hello world\n");
}

int printGoodbye(){
    printf("Goodbye world\n");
}