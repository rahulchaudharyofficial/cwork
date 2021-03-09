#include<stdio.h>

/**
 * @file month.c
 * @author Rahul Chaudhary
 * @brief return monnth name for given number n
 * @version 0.1
 * @date 2021-03-09
 * 
 * @copyright Copyright (c) 2021
 * 
 */
char* month_name(int n) {
    static char *name[] = {
        "Illegal Name",
        "January",
        "February",
        "March",
        "April",
        "May",
        "June",
        "July",
        "August",
        "September",
        "October",
        "November",
        "December"
    };

    return (n < 1 || n > 12) ? *name : *(name+n);
}

int main(int argc, char const *argv[])
{
    printf("Month for 0 = %s\n",month_name(0));
    printf("Month for 7 = %s\n",month_name(7));
    printf("Month for 11 = %s\n",month_name(11));
    return 0;
}
