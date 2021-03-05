#include<stdio.h>

void line_count(void) {
    int lc=0;
    int c= -1;
    while((c=getchar())!=EOF) {
        if (c == '\n') {
            lc++;
        }
    }
    printf("Lines = %d\n",lc);
}

int main(int argc, char const *argv[])
{
    line_count();
    return 0;
}
