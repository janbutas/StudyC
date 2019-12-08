# I am a comment, and I want to say that the variable CC will be
# the compiler to use.
CC=gcc
# Hey!, I am comment number 2. I want to say that CFLAGS will be the
# options I'll pass to the compiler.
CFLAGS= -Wall -W -Werror

all: hello

hello:  Hello.c
	$(CC) $(CFLAGS) ./Hello.c -o Hello

clean:
	rm -rf *o hello



