#ifndef FUNCTION_H
#define FUNCTION_H
#include <stdlib.h>

enum {
    MAX_LENGHT = 260
};

#define RED   "\x1B[31m"
#define GRN   "\x1B[32m"
#define YEL   "\x1B[33m"
#define BLU   "\x1B[34m"
#define MAG   "\x1B[35m"
#define CYN   "\x1B[36m"
#define WHT   "\x1B[37m"
#define RESET "\x1B[0m"

int input(char str[MAX_LENGHT]);
int process(char *string, int code);
int output(char *string, int error);
int systems(char *string);
int check(char *string);
char *sstok(char *str, const char *delim);
char *schr(const char *str, const char item);

#endif