#include "strings.h"
#include "function.h"

int main()
{

/*	if (input(str) != 0) {
		printf("Некорректный ввод\n");
	}
*/
	char str[MAX_LENGHT];
	
	int inp = input(string);

	printf("Строка: %s\n", str);
    
    if(inp == 1) {
        output(string, check(string), process(string));
    }

/*	if(system(str) != 0) {
		printf("OS: Windows\n");
		process(str, string);
	}else{
		printf("OS: Linux\n");
		process(str, string);
		printf("Max dir name: %s\n", string);
	}
*/		
	return 0;
}