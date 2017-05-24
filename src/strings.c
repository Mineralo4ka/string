#include "strings.h"

int slen(char *string)
{   
   	int i = 0;

    while(*string != '\0') {
        i++;
        string++;
    }
    
    return i;
}

int sspn(const char *string)
{
    char arr[] = {'*', '?', '"', '<', '>', '|'};
    int i, j;

    for (i = 0; string[i] != '\0'; i++) {
        for (j = 0; j < slen(arr); j++) {
            if ((string[i] == arr[0]) && (string[i + 1] == '/')) {
                continue;
            }
            if (string[i] == arr[j]) {
                return i;
            }
        }
    }
    
    return 0;
}