#include<stdio.h>
#include<ctype.h>
#include<stdlib.h>

int atoi_custom(char s[]) {
    int n,i, sign;
    for(i=0;isspace(s[i]); i++) // Skip leading spaces
        ;
    sign = (s[i]=='-')?-1:1; //capture sign
    if(s[i] == '+' || s[i] =='-')
        i++; //Move ahead, ignore sign
    for(n=0;isdigit(s[i]);i++) {
        n = n * 10 + (s[i] - '0');
    }
    return sign * n;
}
int main(int argc, char** argv) {
    char s1[] = {' ','-','1','2','3'};
    char s2[] = {' ','+','5','4','6'};
    char s3[20] = "546 This is a demo";
    char *s3ptr;

    int a = atoi_custom(s1);
    int b = atoi_custom(s2);
    int c = strtol(s3,&s3ptr,10);

    printf("a = %d\n",a);
    printf("b = %d\n",b);
    printf("c = %d and text = %s\n",c,s3ptr);
    printf("\n");
    return 0;
}
