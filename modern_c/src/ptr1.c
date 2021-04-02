#include<stdio.h>
#include<inttypes.h>

typedef union u_inspect {
    unsigned val;
    unsigned char bytes[sizeof(unsigned)];
} inspect_u;

/**
 * Little Endian Demo
int main(int argc, char const *argv[])
{
    inspect_u u = {
        .val=0xAABBCCDD,
    };

    printf("value is 0x%.08X\n",u.val);
    
    for(int i=0;i<sizeof(u.bytes);i++) {
        printf("byte [%zu] = 0x%.02hhX\n",i,u.bytes[i]);
    }
    return 0;
}
*/