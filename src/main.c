#include "main.h"

int main()
{
	char str[MAX_LENGHT];
	char string[MAX_LENGHT];

	if (input(str) != 0) {
		printf("Некорректный ввод\n");
	}

	printf("Строка: %s\n", str);

	if(check(str) != 0) {
		printf("OS: Windows\n");
		process(str, string);
	}else{
		printf("OS: Linux\n");
		process(str, string);
		printf("Max dir name: %s\n", string);
	}
		
	return 0;
}