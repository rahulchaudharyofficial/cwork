#include<stdio.h>

#include "string.h"

int main(int argc, char const *argv[]) {
  int x = 1;
  char *name = "rahul chaudhary";

  int *p = &x;

  printf("%d\n", *p);
  printf("%d\n", ++*p);
  printf("%d\n", *p);
  printf("%d\n", ++*p);
  printf("%d\n",(*p)++);
  printf("%d\n", *p);

  printf("str len = %d\n", str_len(name));
  return 0;
}
