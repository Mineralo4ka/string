TARGET := bin/string
CC := gcc
CFLAGS :=  -Wall -g -O0 -Werror -c
LFLAGS := -I thirdparty -I src -c

all: $(TARGET)

$(TARGET): build/src/main.o build/src/function.o build/src/strings.o
		$(CC) build/src/main.o build/src/function.o build/src/strings.o -o $@


build/src/main.o: src/main.c
		$(CC) $(CFLAGS) src/main.c -o $@ 

build/src/function.o: src/function.c
		$(CC) $(CFLAGS) src/function.c -o $@ 

build/src/strings.o: src/strings.c
		$(CC) $(CFLAGS) src/strings.c -o $@


.PHONY: all clean
clean:	
	rm -f build/src/*.o
	rm -f build/test/*.o
	rm -f bin/*