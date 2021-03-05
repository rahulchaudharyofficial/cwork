#include<stdio.h>

/**
 * C = (5/9)(F - 32)
 * F = ((9 * C)/5) + 32
 */
void temprature() {
    int i = 0; 

    printf("F\t\tC\n");
    printf("------------------------\n");
    while(i<=300) {
        int c = 5*(i-32)/9;
        printf("%d\t\t%d\n",i,c);
        i=i+20;
    }
}

int main(int argc, char const *argv[])
{
    temprature();
    return 0;
}
 