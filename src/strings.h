#ifndef STRINGS_H
#define STRINGS_H
#include <stdio.h>

int slen(char *string);
int sspn(const char *string);
char *schr(const char *str, const char item);
char *sstok(char *str, const char *delim);

#endif