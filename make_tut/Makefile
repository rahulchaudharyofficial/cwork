
CC=clang
CFLAG=-Wall -g

hello: hello.o
	$(CC) $(CFLAG) -o hello $<

hello.o: hello.c
	$(CC) $(CFLAG) -c $<

.PHONY: clean
clean:
	rm hello hello.o

run:
	./hello

.PHONY: size
size:
	@printf "\n------------ Starting  to build hello ------------ \n"
