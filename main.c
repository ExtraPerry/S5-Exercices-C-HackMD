#include <stdio.h>
#include "extraperry_lib.h"

int main(void){

    printf("-----------------\n");
    //Hello-World-:D
    printf("Hello World!\n");

    printf("-----------------\n");
    //Exo-1
    int number;
    printf("Pick a number\n-> ");
    scanf("%d", &number);
    char* str = fuzbiz(number);
    printf("%s", str);
    printf("\n");

    printf("-----------------\n");
    //Exo-2
    fflush(stdin);
    int nb;
    printf("Pick a number\n-> ");
    scanf("%d", &number);
    all_evens_to(number);
    printf("\n");

    printf("-----------------\n");
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

    printf("-----------------\n");
    //Exo-4
    fflush(stdin);
    char sentence[60];
    printf("Write a short sentence (max 60 char long)\n-> ");
    fgets(sentence, 60, stdin);
    char character;
    printf("Give a character that should be searched for inside of the sentence\n-> ");
    fgets(character, 1, stdin);

    return 0;
}