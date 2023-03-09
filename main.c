#include <stdio.h>
#include "extraperry_lib.h"

int main(void){

    printf("Hello World!\n\n");

    int number;
    printf("Pick a number\n ->");
    scanf("%d", &number);
    char* str = fuzbiz(number);
    printf("%s", str);

    return 0;
}