#include<stdio.h>

#include "string.h"


int main(int argc, char const *argv[])
{
    char *s = alloc(10);
    printf("Starting with %p\n",s);
    s = "rahul chaudhary";    
    printf("%s\n",s);
    afree(s);
    printf("%s\n",s);

    char *a = "rahulc";
    char *b = "rahul";
    int d = str_cmp(a,b);
    printf("Diff = %d\n",d);
    return 0;
}
