/**
 * @file gcd.c
 * @author Rahul Chaudhary (rahulchaudharyofficial.in)
 * @brief this library provide greatest common divisor functionality
 * @version 0.1
 * @date 2021-04-02
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>

int gcd2(int a, int b) {
    if(!a)
        return b;
    else
        return gcd2(b%a,a);
}

/**
 * @brief This function evaluate greatest common divisor for given input a and b
 * 
 * @param a : first number param
 * @param b : second number param
 * @return int 
 */
int gcd(int a, int b) {
    if(a<b)
        return gcd2(a,b);
    else
        return gcd2(b,a);
}
/*
int main(int argc, char const *argv[])
{
    if(argc==3) {
        int num1 = atoi(argv[1]);
        int num2 = atoi(argv[2]);
        int gc = gcd(num1,num2);
        printf("GCD of %d and %d = %d\n",num1,num2,gc);
    }
    else {
        exit(1);
    }
    return 0;
}
*/
