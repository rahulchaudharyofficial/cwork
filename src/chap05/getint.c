#include<stdio.h>
#include<ctype.h>

int getint(int *pm) {
    int c, sign;

    //Skip whitespace
    while(isspace(c = getchar()))
        ;
    
    if(!isdigit(c) && c!=EOF && c!='+' && c!='-') {
        ungetch(c);
        return 0;
    }

    sign = (c=='-')?-1:1;

    if(c=='+' || c=='-')
        c=getch();
    
    for(*pm =0;isdigit(c);c=getch()) {
        *pm = *pm * 10 + (c - '0');
    }

    *pm = *pm * sign;

    if(c!=EOF)
        ungetch(c);

    return c;
}

int main(int argc, char const *argv[])
{
    
    return 0;
}
