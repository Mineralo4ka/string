#include "strings.h"
#include "function.h"

int main()
{
	char string[MAX_LENGHT];
	int ent = input(string);

	printf("Строка: %s\n", string);
    
    if(ent == 1) {
        output(string, check(string));
    } else if(ent == 0) {
    	printf("Некорректный ввод\n");
    }
	
	return 0;
}