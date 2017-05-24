#include "function.h"
#include "strings.h"

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
        str[MAX_LENGHT - 1] = '\0';
    }

    return 1;
}

int process(char *string)
{
    int token = 0;

    for (int i = 0; string[i] != '\0'; ++i) {
        if ((string[i] == '/') || (string[i] == '\\')) {
            token++;
        }
    }

    printf("Depth: %d\n", token);

    return 0;
}

int check(char *string)
{   
    if (slen(string) > MAX_LENGHT) {
        return -1;
    } else if (sspn(string) > 0) {
        return sspn(string);
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
            printf("OS: Windows\n");
        }else {
            printf("OS: Linux\n");
        }
    }

    return 0;
}