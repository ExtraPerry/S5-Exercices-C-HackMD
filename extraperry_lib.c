#include <stdio.h>

char* fuzbiz(int number){
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