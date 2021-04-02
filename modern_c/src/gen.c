/**
 * @file gen.c
 * @author your name (you@domain.com)
 * @brief example of generic interface
 * @version 0.1
 * @date 2021-04-02
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include<stdio.h>
#include "./gen.h"

int main(int argc, char const *argv[])
{
    float a = 1.2;
    float b = 4.5;
    float result = MIN(a,b);
    printf("MIN(1.2,4.5) = %f\n",result);
    return 0;
}
