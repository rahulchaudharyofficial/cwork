#include<stdio.h>

int main(int argc, char const *argv[]) {
  int x = 1;

  int *p = &x;

  printf("%d\n", *p);
  printf("%d\n", ++*p);
  printf("%d\n", *p);
  printf("%d\n", ++*p);
  printf("%d\n",(*p)++);
  printf("%d\n", *p);
  return 0;
}
