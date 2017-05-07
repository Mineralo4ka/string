#include "main.h"

int main()
{
	char str[MAX_LENGHT];

	if (input(str) != 0) {
		printf("Некорректный ввод\n");
	}

	printf("Строка: %s\n", str);

	if(check(str) != 0) {
		printf("OS: Windows\n");
		process(str);
	}else{
		printf("OS: Linux\n");
		process(str);
	}
		
	return 0;
}