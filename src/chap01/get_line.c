#include<stdio.h>
#define MAXLINE 1000

int get_line(char line[], int len);
void copy(char from[], char to[]);

int main(int argc, char const *argv[])
{
    int len, max=0;
    char line[MAXLINE], longest[MAXLINE];

    while ((len = get_line(line, MAXLINE)) > 0)
    {
        if(len>max) {
            max = len;
            copy(line, longest);
        }
    }
    if(max>0) {
        printf("%s\n", longest);
    }
    return 0;
}

int get_line(char line[], int lim) {
    int i, c;

    for(i=0; (i < lim -1 && (c = getchar())!= EOF && c!='\n'); i++)
        line[i] = c;
    
    if(c=='\n') {
        line[i++] = c;
    }
    line[i] = '\0';
    return i;
}

void copy(char from[], char to[]) {
    int i=0;
    while((to[i] = from[i])!='\0') {
        ++i;
    }
}