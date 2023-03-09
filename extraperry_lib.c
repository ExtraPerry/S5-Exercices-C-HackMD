#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int isPositiveNumber(int number){
    if (number < 0) {
        printf("Error : Number should be positif (bigger than zero).");
        return -1;
    }
    return 0;
}

char* fuzbiz(int number){
    if (isPositiveNumber(number) != 0) {
        return "";
    }

    if (number%7 == 0 && number%13 == 0) {
        return "fuzbiz";
    }
    if (number%7 == 0) {
        return "fuz";
    }
    if (number%11 == 0) {
        return "biz";
    }
    return "none";
}

int all_evens_to(int number){
    if (isPositiveNumber(number) != 0) {
        return -1;
    }

    printf("Even numbers below %d : \n", number);
    int i;
    for (i = 0; i <= number; ++i) {
        if(i%2 == 0) {
            printf(" - %d", i);
        }
    }
    return 0;
}

int is_prime(int number) {
    if (isPositiveNumber(number) != 0) {
        return -1;
    }

    int i;
    for (i = 2; i < number; i++) {
        if (number%i == 0) {
            return i;
        }
    }
    return 0;
}