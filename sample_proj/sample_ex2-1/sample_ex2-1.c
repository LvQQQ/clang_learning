#include <stdio.h>

void main() {
    int a = 100;
    double b = 123.4;
    float c = 123.4f;
    char d = 'a';

    printf("aの値は%d、大きさは%dbyteアドレスは0x%x\n", a, sizeof(int), &a);
    printf("aの値は%f、大きさは%dbyteアドレスは0x%x\n", b, sizeof(double), &b);
    printf("aの値は%f、大きさは%dbyteアドレスは0x%x\n", c, sizeof(float), &c);
    printf("aの値は%c、大きさは%dbyteアドレスは0x%x\n", d, sizeof(char), &d);
}