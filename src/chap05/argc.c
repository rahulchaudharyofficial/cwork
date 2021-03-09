/**
 * @file argc.c
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2021-03-09
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include<stdio.h>

int main(int argc, char const *argv[])
{
    while(--argc > 0) {
        printf("%s%s",*++argv,(argc > 1) ? " ":"");
    }
    printf("\n");
    return 0;
}
