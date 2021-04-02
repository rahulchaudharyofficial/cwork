#include<stdio.h>

int main(int argc, char const *argv[])
{
    char *ptr1 = "rahul chaudhary";
    char *ptr2 = NULL;

    if(ptr1) {
        printf("Ptr1 = %s\n",ptr1);
    }
    else {
        printf("Ptr 1 is NULL\n");
    }

    if(ptr2) {
        printf("ptr2 = %s\n",ptr2);
    }
    else {
        printf("ptr2 is NULL\n");
    }
    return 0;
}
