#include <stdio.h>

void main() {
    int a, b, l;
    int locker[50];
    for (a = 1; a <= 50; a++) {
        for (b = 0; b = 50; b++) {
            l = b % a;
            if (l == 0) {
                locker[b] = 1;
            }
            
        }
    }
    return 0;
}