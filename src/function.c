#include "function.h"
#include "strings.h"
#include <stdio.h>

int input(char str[MAX_LENGHT])
{
	int i = 0;

    printf("Введите строку: ");
    while(scanf("%c", &str[i]) == 1 && i < MAX_LENGHT - 1) {
        if(str[i] == '\n') {
            str[i] = '\0';
            break;
        } else {
            i++;
        }
    }

    if(i < 1) {
        return 0;
    } else if(i >= MAX_LENGHT - 1) {
        str[MAX_LENGHT] = '\0';
    }

    return 1;
}

int process(char *string, int code)
{
    int token = 0;
    char **a = malloc((slen(string) + 1) * sizeof(char *));
    int max = -100;

    for (int i = 0; string[i] != '\0'; ++i) {
        if ((string[i] == '/') || (string[i] == '\\')) {
            token++;
        }
    }
    printf("Depth: %d\n", token);

    if (code == 1) {
        int i = 0;
        a[i++] = sstok(string, "/\0");
        while(a[i - 1] != NULL) {
            a[i++] = sstok(NULL, "/\0");
        }
        
        for(int k = 0; k < i - 3; ++k) {
            if (max < slen(a[k])) {
                max = slen(a[k + 1]);
            }
        }
        
        printf("Max dir name: ");

        for (int k = 0; k < i - 1; ++k) {
            if (slen(a[k]) == max) {
                printf(CYN "%s" RESET "; ", a[k]);
            }
        }
        printf("\nMax dir lenght: %d\n", max);
    } else if (code == 0) {
        int i = 0;
        a[i++] = sstok(string, ":\\\0");

        while(a[i - 1] != NULL) {
            a[i++] = sstok(NULL, ":\\\0");
        }

        for(int k = 0; k < i - 3; ++k) {
            if (max < slen(a[k])) {
                max = slen(a[k + 1]);
            }
        }
        printf("Max dir name: ");

        for (int k = 0; k < i - 1 ; ++k) {
            if (slen(a[k]) == max) {
                printf( MAG "%s" RESET "; ", a[k]);
            }
        }
        printf("\nMax dir lenght: %d\n", max);
    }
    free(a);

    return 0;
}

int check(char *string)
{   
    if (slen(string) > MAX_LENGHT) {
        return 1;
    } else if (sspn(string) > 0) {
        return sspn(string);
    } else if (sspn_l(string) < 0) {
        return sspn_l(string);
    }

    return 0; 
}

int systems(char *string)
{
	int i = 0;

	if((string[i] >= 65 && string[i] <= 90) || (string[i] >= 97 && string[i] <= 122)) {
		if (string[i]  == '/') {
			return 1;
		}
        return 0;
    }

    return 1;
}

int output(char *string, int error)
{
    if(error == 0) {
        if(systems(string) == 0) {
            printf("OS: " BLU "Windows" RESET "\n");
            process(string, 0);
        }else {
            printf("OS: " GRN "Linux" RESET "\n");
            process(string, 1);
        }
    }

    return 0;
}