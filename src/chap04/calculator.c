#include<stdio.h>
#include<stdlib.h>


#define MAXOP 100
#define NUMBER '0' //Signal that number is found

int getop(char []);
void push(double);
double pop();


int main(int argc, char const *argv[]) {
  int type;
  double op;
  char s[MAXOP];
  while((type = getop(s))!=EOF) {

  }
  return 0;
}

//get next operator or numeric operand
int getop(char s[]) {
  int i,c ;

  while((s[0] = c = getchar()) == ' ' || c == '\t')
    ;
  s[1]='\0';
}