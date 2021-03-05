#include<stdio.h>
#define MAX 10

char arr[MAX];
int arr_size;

int atoi() {
    int sum = 0;
    for(int i=0;arr[i]>='0' && arr[i] <= '9';i++) {
        sum = sum*10 + (arr[i] - '0');
    }
    return sum;
}

void getinput() {
    int c;
    int i=0;
    while(((c = getchar())!=EOF && i<MAX-1)) {
        arr[i++] = c;
    }
    arr[i] = '\0';
    arr_size=i;
}

int main(int argc, char const *argv[])
{
    getinput();
    int num = atoi();
    printf("\nnum = %d\n", num);
    return 0;
}
