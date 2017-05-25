#include "main.h"

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