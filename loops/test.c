#include <stdio.h> 

 int main() 
{
    int ng=0;
    for(;;){
        if (ng==5){
            break;
            printf("%d",++ng);
        }
    }
     
    return 0;
}