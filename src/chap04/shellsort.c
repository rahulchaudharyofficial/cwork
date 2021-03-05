#include<stdio.h>

void shellsort(int v[], int n) {
    int gap, i, j , temp;

    for(gap = n/2; gap > 0; gap /= 2) {
        for( i = gap; i < n; i++) {
            for(j = i - gap; j >= 0 && v[j] > v[j + gap]; j -= gap) {
                temp = v[j];
                v[j] = v[j+ gap];
                v[j + gap] = temp;
            }
        }
    }

    for (int k=0; k<n; k++) {
        printf("%d\t",v[k]);
    }
    printf("\n");
}

int main(int argc, char **argv) {
    int v[] = {3,2,7,6,9,1};
    shellsort(v,6);
    return 0;
}