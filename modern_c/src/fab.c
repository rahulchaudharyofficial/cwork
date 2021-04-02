#include<stdio.h>
#include<stdlib.h>

int fib(int n) {
    if(n < 3)
        return 1;
    else
        return fib(n-1)+fib(n-2);
}

/*
int main(int argc, char const *argv[])
{
    int num = atoi(argv[1]);
    printf("Num = %d\n",num);
    for(int i = 1; i <= num; ++i) 
    {
        printf("%d\t",fib(i));
    }
    printf("\n");
    return 0;
}
*/
