#ifndef STRINGS_H
#define STRINGS_H

int slen(char *string);
int sspn(const char *string);
char *schr(const char *str, const char item);
char *sstok(char *str, const char *delim);
int sspn_l(const char *string);

#endif