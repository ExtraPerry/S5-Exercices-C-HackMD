#pragma once
#include <stdio.h>

//Structures
typedef struct { 
    char* name;
    int age;
} Person;

//Methodes
int isPositiveNumber(int number);

char* fuzbiz(int number);

void all_evens_to(int number);

int is_prime(int number);

<<<<<<< HEAD
int count_char(char* str, char character);

void draw_rectangle(int height, int width, char border, char corner, char inside);

void show_multiple_tables();

void print_person(Person s_person);

int count_me();
=======
int count_char(char sentence[256], char character);
>>>>>>> ecefc7bf4ad4793c2c19d3e57941af26b33e2883
