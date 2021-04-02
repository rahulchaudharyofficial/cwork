#include<stdio.h>
#include "gen.h"

int main(int argc, char const *argv[])
{
    float a = 1.2;
    float b = 4.5;
    float result = MIN(a,b);
    printf("MIN(1.2,4.5) = %f\n",result);
    return 0;
}