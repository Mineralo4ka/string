#ifndef FUNCTION_H
#define FUNCTION_H
#include <stdio.h>

enum {
    MAX_LENGHT = 260
};

int input(char str[MAX_LENGHT]);
int process(char *string);
int output(char *string, int error);
int systems(char *string);
int check(char *string);

#endif