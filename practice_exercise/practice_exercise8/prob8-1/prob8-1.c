// #include <stdio.h>

// void main() {
//     int ans = 0;
//     int a = 1;
//     int l = 0, m = 0;
//     while (1) {
//         int b = 1;
//         while (1) {
//             int c = 1;
//             while (1) {
//                 l = a * a + b * b;
//                 m = c * c;
//                 if (l == m) {
//                     printf("##################\n");
//                     printf("a : %d\n", a);
//                     printf("b : %d\n", b);
//                     printf("c : %d\n", c);
//                     printf("##################\n");
//                 }
                
//                 c++;
//                 if (c == 100) {
//                     break;
//                 }
                
//             }
            
//             b++;
//             if (b == 100) {
//                 break;
//             }
//         }
        
//         a++;
//         if (a == 100) {
//             break;
//         }
//     }
    
// }

// chatGPT回答
#include <stdio.h>

int main() {
    int a, b, c, count = 0;
    for (a = 1; a <= 100; a++) {
        for (b = 1; b <= 100; b++) {
            for (c = 1; c <= 100; c++) {
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
