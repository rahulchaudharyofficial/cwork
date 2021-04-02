/**
 * @file trace.c
 * @author Rahul Chaudhary
 * @brief trace verify
 * @version 0.1
 * @date 2021-04-02
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include<stdio.h>
#include<stdlib.h>

#define TRACE()                                    \
    do                                              \
    {                                               \
        printf("%s - %s - %d\n",__FILE__,__func__, __LINE__);      \
    }                                               \
    while(0)

int main(int argc, char const *argv[])
{
        TRACE();
    return 0;
}
