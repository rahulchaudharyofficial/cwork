#include<stdio.h>
#include "string.h"


static char buffer[MAX_ALLOC]; //storage for alloc
static char *allocp = buffer; //next free position

int str_len(char *str) 
{
    int count = 0;
    for(; *str != '\0'; str++)
    {
        count++;
    }
    return count;
}

char *alloc(int n) {
    if((buffer + MAX_ALLOC - allocp) >= n) {
        allocp += n;
        printf("returning p = %p\n",(allocp - n));
        return allocp - n;
    }
    else {
        return 0;
    }
}

void afree(char *p) {
    if(p >= buffer && p < buffer + MAX_ALLOC) {
        allocp = p;
    }
}

void str_cpy(char *s, char *t)
{
    while((*t = *s)!='\0') {
        s++;
        t++;
    }
}

int str_cmp(char *s, char *t)
{
    int i;

    for(i=0;*s == *t; s++,t++)
    {
        if(*s=='\0') 
        {
            return 0;
        }
    }
    return *s - *t;
}