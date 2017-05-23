#include "function.h"

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

int process(char ch[MAX_LENGHT], char string[MAX_LENGHT])
{
    int token = 0;

    for (int i = 0; i < MAX_LENGHT; ++i) {
        if ((ch[i] == '/') || (ch[i] == '\\')) {
            token++;
        }
        if (ch[i] == '\0') {
            printf("Depth: %d\n", token);
            break;
        }
    }

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

int systems(char ch[MAX_LENGHT])
{
	int i = 0;

	while(i != 2) {
		if((ch[i] >= 65 && ch[i] <= 90) || (ch[i] >= 97 && ch[i] <= 122)) {
			if (ch[0] == '/') {
				return 0;
			}
			return 1;
		} else {
			i++;
		}
	}

	return 0;
}

int output(const char *string, int error, int code)
{

}