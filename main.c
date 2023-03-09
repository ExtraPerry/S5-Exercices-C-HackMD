#include <stdio.h>
#include "extraperry_lib.h"

int main(void){

    printf("\n------Start------\n\n");
    //Hello-World-:D
    printf("Hello World!");
    printf("\n\n");


    printf("\n-------Ex1-------\n\n");
    //Exo-1

    int nb1;
    fflush(stdin);
    printf("Pick a number\n-> ");
    scanf("%d", &nb1);  //Number (nb1)
    printf("\n");
    char* str1 = fuzbiz(nb1);   //Result (str1)
    printf("%s", str1);
    printf("\n\n");


    printf("\n-------Ex2-------\n\n");
    //Exo-2
    fflush(stdin);
    printf("Pick a number\n-> ");
    scanf("%d", &nb1);  //Number (nb1)
    printf("\n");
    all_evens_to(nb1);
    printf("\n\n");


    printf("\n-------Ex3-------\n\n");
    //Exo-3
    int nb2;
    fflush(stdin);
    printf("Pick a number\n-> ");
    scanf("%d", &nb1);  //Number (nb1)
    printf("\n");
    nb2 = is_prime(nb1);    //Result (nb2)
    if (nb2 != -1) {
        if (nb2 != 0) {
        printf("Return value is \"%d\", which means that the number isn't a prime number. \nIt is also the lowest divider of %d.", nb2, nb1);
        } else {
        printf("Return value is \"%d\", which means it's a prime number.", nb2);
        }
    }
    printf("\n\n");


    printf("\n---------------------Ex4---------------------\n\n");
    //Exo-4
    char str2[256];
    fflush(stdin);
    printf("Write a short sentence (max 256 char long)\n-> ");
    scanf("%s", str2);  //Sentence (str2)
    printf("\n");
    char c1;
    fflush(stdin);
    printf("Give a character that should be searched for inside of the sentence\n-> ");
    scanf("%c", &c1);   //Character (c1)
    printf("\n");
    printf("Inside \"%s\" there is \"%d\" occurence(s) of the \'%c\' char.", str2, count_char(str2, c1), c1);
    printf("\n\n");


    printf("\n---------------------Ex5---------------------\n\n");
    //Exo-5
    fflush(stdin);
    printf("Give height (int) that the rectangle should be\n-> ");
    scanf("%d", &nb1);  //Height (nb1)
    printf("\n");
    fflush(stdin);
    printf("Give width (int) that the rectangle should be\n-> ");
    scanf("%d", &nb2);  //Width (nb2)
    printf("\n");
    fflush(stdin);
    printf("Give what the border (char) of the rectangle should be\n-> ");
    scanf("%c", &c1);   //Border (c1)
    printf("\n");
    char c2;
    fflush(stdin);
    printf("Give what the corner (char) of the rectangle should be\n-> ");
    scanf("%c", &c2);   //Corner (c2)
    printf("\n");
    char c3;
    fflush(stdin);
    printf("Give what the inside (char) of the rectangle should be\n-> ");
    scanf("%c", &c3);   //Inside (c3)
    printf("\n");
    draw_rectangle(nb1, nb2, c1, c2, c3);
    printf("\n");


    printf("\n---------------------Ex6---------------------\n\n");
    printf("Here is all the multiplication tables from 1 to 9\n-> ");
    printf("\n\n");
    show_multiple_tables();


    printf("\n---------------------Ex7---------------------\n\n");
    fflush(stdin);
    printf("Write the name of this person (max 256 char long)\n-> ");
    scanf("%s", str2);  //Name (str2)
    printf("\n");
    fflush(stdin);
    printf("Give the age (int) of that person\n-> ");
    scanf("%d", &nb1);  //Age (nb1)
    printf("\n");
    Person s_person;
    s_person.name = str2;
    s_person.age = nb1;
    print_person(s_person);
    printf("\n\n");


    printf("\n---------------------Ex8---------------------\n\n");
    fflush(stdin);
    printf("How many times (int) do you wanna count this function ?\n-> ");
    scanf("%d", &nb1);  //Count (nb1)
    printf("\n");
    for(int i = 0; i < nb1; i++) {
        printf("The function \"count_me\" has been called %d amount of time(s).\n", count_me());
    }
    printf("\n");


    printf("\n---------------------End---------------------\n\n");
    fflush(stdin);
    printf("Enter anything to exit the program\n-> ");
    scanf("%s", str2);
    printf("%s", str2);
    return 0;
}