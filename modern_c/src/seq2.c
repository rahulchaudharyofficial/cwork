#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>

int fun() 
{
    printf("i am %s\n",__func__);
    return EXIT_SUCCESS;
}

void demo1()
{
    unsigned *ip = 0;
    RETRY:
        ip = &(size_t) {fun()};
    do
    {
        goto RETRY;
    } while (0);
    printf("i = %d\n",*ip);
}

int main(int argc, char const *argv[])
{
    demo1();
    return 0;
}
