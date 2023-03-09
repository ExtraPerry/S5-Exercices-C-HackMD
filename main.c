#include <stdio.h>
#include "extraperry_lib.h"

int main(void){

    printf("\n--------------------Start--------------------\n");
    //Hello-World-:D
    printf("Hello World!\n");

    printf("\n---------------------Ex1---------------------\n");
    //Exo-1
    int number;
    printf("Pick a number\n-> ");
    scanf("%d", &number);
    char* str = fuzbiz(number);
    printf("%s", str);
    printf("\n");

    printf("\n---------------------Ex2---------------------\n");
    //Exo-2
    fflush(stdin);
    int nb;
    printf("Pick a number\n-> ");
    scanf("%d", &number);
    all_evens_to(number);
    printf("\n");

    printf("\n---------------------Ex3---------------------\n");
    //Exo-3
    fflush(stdin);
    printf("Pick a number\n-> ");
    scanf("%d", &number);
    nb = is_prime(number);
    if (nb != 0 && nb != -1) {
        printf("Return value is \"%d\", which means that the number isn't a prime number.\nIt is also the lowest divider of %d.", nb, number);
    } else {
        printf("Return value is \"%d\", which means it's a prime number.", nb);
    }
    printf("\n");

    printf("\n---------------------Ex4---------------------\n");
    //Exo-4
    char sentence[256];
    fflush(stdin);
    printf("Write a short sentence (max 60 char long)\n-> ");
    scanf("%s", sentence);
    char character;
    fflush(stdin);
    printf("Give a character that should be searched for inside of the sentence\n-> ");
    scanf("%c", &character);
    printf("Inside \"%s\" there is \"%d\" occurence(s) of the \'%c\' char.", sentence, count_char(sentence, character), character);
    printf("\n");

    printf("\n---------------------Ex5---------------------\n");

    return 0;
}