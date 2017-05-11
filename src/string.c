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

	int i = 0, k = 0;
	int j = 0, max = 0;

	while (ch[k] != '\0') {
		if(ch[i] == '/') {
			i++;
			while(ch[i] != '/') {
				string[j] = ch[i];
				j++;
				i++;
			}
			if (max < j) {
				max = j - 1;
			}
		}
		k++;
	}

	printf("Lenght: %d\n", max);

	return 0;
}