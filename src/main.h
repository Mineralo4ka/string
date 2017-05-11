#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>

enum {
    MAX_LENGHT = 255
};

int input(char str[MAX_LENGHT]);
int check(char ch[MAX_LENGHT]);
int process(char ch[MAX_LENGHT], char string[MAX_LENGHT]);

#endif