TARGET := bin/string
CC := gcc
CFLAGS :=  -Wall -Werror -c
LFLAGS := -I thirdparty -I src -c

all: $(TARGET)

$(TARGET): build/src/main.o build/src/function.o build/src/strings.o
		$(CC) build/src/main.o build/src/function.o build/src/strings.o -o $@


build/src/main.o: src/main.c
		$(CC) $(CFLAGS) src/main.c -o $@ 

build/src/function.o: src/func.c
		$(CC) $(CFLAGS) src/func.c -o $@ 

build/src/strings.o: src/string.c
		$(CC) $(CFLAGS) src/strings.c -o $@


.PHONY: all clean
clean:	
	rm -f build/src/*.o
	rm -f bin/*