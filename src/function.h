#ifndef FUNCTION_H
#define FUNCTION_H
#include <stdio.h>

enum {
    MAX_LENGHT = 260
};

int input(char str[MAX_LENGHT]);
int systems(char ch[MAX_LENGHT]);
int process(char ch[MAX_LENGHT], char string[MAX_LENGHT]);

#endif