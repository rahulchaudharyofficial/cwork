#include<stdio.h>
#include "scope.h"

#define MAX 30
char name[MAX] = "Rahul Chaudhary";

static void print_name() {
    printf("Name = %s\n", name);
}

/*
int main(int argc, char **argv) {
    print_name();
    return 0;
}
*/