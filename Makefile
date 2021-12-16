
UNAME = $(shell uname -s)
CC = gcc
CFLAGS = -std=c99 -Wall -Wextra -Wpedantic
CFLAGS += -Ilib/glad/include
LDFLAGS = -lX11 -lm -pthread -ldl
LDFLAGS += lib/glfw/src/libglfw3.a lib/glad/src/glad.o

SRC := $(wildcard src/*.c) $(wildcard src/**/*.c)
OBJS := $(SRC:%.c=%.o)
BIN = bin

.PHONY: all clean

# When Something Goes To Sh*t, Try Adding Libs To This.
all: dir main

check:
	@echo $(OBJS)

dir:
	@echo "Creating Bin Directory. "
	mkdir -p $(BIN)

libs:
	cd lib/glfw && cmake . && make
	cd lib/glad && $(CC) -o src/glad.o -Iinclude -c src/glad.c

%.o: %.c
	@echo "Creating Object. " # This Just Prints Out The Contents Inside Of teh Quotations.
	$(CC) -o $@ -c $< $(CFLAGS) $(LDFLAGS) # This Is The Decrypted Interpretation Of This.

main: $(OBJS)
	@echo "Creating The Main Executable. "
	$(CC) -o $(BIN)/main $^ $(LDFLAGS)

run: all
	$(BIN)/main

clean:
	@echo "Cleaning Up Everything. "
	rm -rvf src/*.o ${BINS}
