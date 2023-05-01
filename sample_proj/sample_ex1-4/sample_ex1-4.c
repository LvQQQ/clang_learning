#include <stdio.h>

void main() {
    // 16進数
    unsigned char i = 0xf;
    unsigned char j = 0xff;

    // 1ビット左シフト
    printf("%x << 1 = %x\n", i, i << 1);
    // 1ビット右シフト
    printf("%x >> 1 = %x\n", i, i >> 1);
    // OR演算
    printf("%x | %x = %x\n", i, j, i | j);
    // AND演算
    printf("%x & %x = %x\n", i, j, i & j);
    // NOT演算
    printf("~%x = %x\n", i, (unsigned char)~i);
}