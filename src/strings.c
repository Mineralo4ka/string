#include "strings.h"
#include <stdio.h>

int slen(char *string)
{   
   	int i = 0;

    while(*string && *string != '\0') {
        i++;
        string++;
    }
    
    return i;
}

int sspn(const char *string)
{
    char arr[] = {':', '*', '?', '"', '<', '>', '|'};
    int i, j;

    for (i = 0; string[i] != '\0'; i++) {
        for (j = 0; j < slen(arr); j++) {
            if ((string[i] == arr[0]) && ((string[i + 1] == '/') || (string[i + 1] == '\\'))) {
                continue;
            }
            if (string[i] == arr[j]) {
                return i;
            }
        }
    }
    
    return 0;
}

int sspn_l(const char *string)
{
    char arr[] = {':', '*', '?', '"', '<', '>', '|'};
    
    for(int i = 0; string[i] != '\0'; i++) {
        for(int k = 0; k < slen(arr); k++) {
            if(string[i] == arr[k] || ((string[i] == '/') && (string[i + 1] == '/'))) {
                return -1;
            }
        }
    }

    return 0;
}

char *schr(const char *str, const char item)
{
    while(*str && *str != item) {
        ++str;
    }
    return (*str) ? (char *) str : NULL;
}

char *sstok(char *str, const char *delim) 
{
    static char *buffer;
    
    if(str) {
        buffer = str;
        while(*buffer && schr(delim, *buffer)) {
            *buffer++ = '\0';
        }
    }
    
    if(! *buffer) {
        return NULL;
    }
    
    str = buffer;
     
    while(*buffer && ! schr(delim, *buffer)) {
        ++buffer;
    }
    while(*buffer && schr(delim, *buffer)) {
        *buffer++ = '\0';
    }
    
    return str;
}