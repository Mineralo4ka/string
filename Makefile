TARGET := bin/string
TARGET_TEST := bin/string_test
CC := gcc
CFLAGS :=  -Wall -g -O0 -c
LFLAGS := -I thirdparty -I src -c

all: $(TARGET) $(TARGET_TEST)

$(TARGET): build/src/main.o build/src/function.o build/src/strings.o
		$(CC) build/src/main.o build/src/function.o build/src/strings.o -o $@


build/src/main.o: src/main.c
		$(CC) $(CFLAGS) src/main.c -o $@ 

build/src/function.o: src/function.c
		$(CC) $(CFLAGS) src/function.c -o $@ 

build/src/strings.o: src/strings.c
		$(CC) $(CFLAGS) src/strings.c -o $@


$(TARGET_TEST): build/test/strings_test.o build/test/main.o build/src/strings.o build/src/function.o
		$(CC) build/test/strings_test.o build/test/main.o build/src/strings.o build/src/function.o -o $@


build/test/strings_test.o: test/strings_test.c   
		$(CC) $(LFLAGS) test/strings_test.c -o $@

build/test/main.o: test/main.c 
		$(CC) -I thirdparty -c test/main.c -o $@

.PHONY: all clean
clean:	
	rm -rf build/src/*.o
	rm -rf build/test/*.o
	rm -rf bin/*