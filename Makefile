TARGET := bin/main
CC := gcc
CFLAGS :=  -Wall -Werror -c
LFLAGS := -I thirdparty -I src -c

all: $(TARGET)

$(TARGET): build/src/main.o build/src/func.o build/src/string.o
		$(CC) build/src/main.o build/src/func.o build/src/string.o -o $@


build/src/main.o: src/main.c
		$(CC) $(CFLAGS) src/main.c -o $@ 

build/src/func.o: src/func.c
		$(CC) $(CFLAGS) src/func.c -o $@ 

build/src/string.o: src/string.c
		$(CC) $(CFLAGS) src/string.c -o $@


.PHONY: all clean
clean:	
	rm -f build/src/*.o
	rm -f bin/*