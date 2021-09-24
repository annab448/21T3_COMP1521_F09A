#include <stdio.h>


typedef unsigned int Word;

Word reverseBits(Word w) {
    Word rev = 0;
    for (unsigned int bit = 0; bit < 32; bit++) {
        Word bitMask = 1u << bit;
        if ((bitMask & w) != 0) {
            rev = rev | (1u << (31 - bit));
        }
    }
    return rev;
}


int main(void) {
    printf("%x\n", reverseBits(0x01234567));
}
