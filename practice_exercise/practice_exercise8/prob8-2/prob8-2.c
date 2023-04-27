// chatGPT回答
#include <stdio.h>

int main() {
    int a, b, c, count = 0;
    for (a = 1; a <= 100; a++) {
        for (b = a; b <= 100; b++) { // b >= a にすることで重複を取り除く
            for (c = b; c <= 100; c++) { // c >= b にすることで重複を取り除く
                if (a * a + b * b == c * c) {
                    printf("%d, %d, %d\n", a, b, c);
                    count++;
                }
            }
        }
    }
    printf("組み合わせの数: %d\n", count);
    return 0;
}
