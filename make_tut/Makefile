
CC=clang
CFLAG=-Wall -g

hello: size hello.o
	$(CC) $(CFLAG) -o hello *.o
hello.o:
	$(CC) $(CFLAG) -c *.c

.PHONY: clean
clean:
	rm hello hello.o

run:
	./hello

.PHONY: size
size:
	@printf "\n------------ Starting  to build hello ------------ \n"
