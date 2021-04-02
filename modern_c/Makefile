#Compiler setup
CC=clang
CFLAGS=-Wall -g

#Documentation
DOCTOOL=doxygen
DOXY_CONFIG_FILE=doxygen.conf


#Dir structure setup
SRCDIR=src
OBJDIR=obj
BINDIR=bin
DOCDIR=docs



#release: CFLAGS= -Wall -g -02 -DNDEBUG
#release: clean
#release: $(BIN)

#Compilation options
SRCS=$(wildcard $(SRCDIR)/*.c)
ALLFILES=$(SRCS)
OBJS=$(patsubst $(SRCDIR)/%.c, $(OBJDIR)/%.o, $(SRCS))
BIN=$(BINDIR)/main


all:$(BIN)

$(BIN): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $@

$(OBJDIR)/%.o : $(SRCDIR)/%.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) -r -v $(BINDIR)/* $(OBJDIR)/* $(DOCDIR)/*

run:
	./$(BIN)

doc:
	$(DOCTOOL) $(DOXY_CONFIG_FILE)
