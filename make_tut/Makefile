.PHONY: clean
CC=clang
CFLAG=-Wall -g

hello: hello.o
	$(CC) $(CFLAG) -o hello *.o
hello.o:
	$(CC) $(CFLAG) -c *.c
clean:
	rm hello hello.o
run:
	./hello
