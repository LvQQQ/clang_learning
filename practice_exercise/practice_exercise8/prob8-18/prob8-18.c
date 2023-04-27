#include <stdio.h>

int main() {
    int student, locker_num, i;
    double l;
    int locker[51];// locker[0]は使わない配列50個
    int r = 0;
    for (student = 1; student <= 50; student++) {
        for (locker_num = 1; locker_num <= 50; locker_num++) {
            if (student == 1) {
                locker[locker_num] = 1;
            }

            if (student == 2) {
                l = locker_num % 2;
                if (l == 0) {
                    locker[locker_num] = 0;
                }
            }

            l = locker_num % student;
            if ( student >= 3  && l == 0)
                if (locker[locker_num] == 1) {
                    locker[locker_num] = 0;
                } 
                else {
                    locker[locker_num] = 1;
                }
            
        }
    }
    
    for (i = 1; i <= 50; i++) {
        if (locker[i] == 1) {
            printf("%d\n", i);
        r++;
        }
    }
    
    printf("扉が開いている数：%d", r);
    return 0;
}


// // chatGPT回答
// #include <stdio.h>

// int main()
// {
//     int lockers[50] = {0}; // ロッカーの初期状態（0:閉まっている、1:開いている）
    
//     // 生徒の操作を模擬する
//     for (int i = 1; i <= 50; i++) {
//         if (i == 1) {
//             // 1番目の生徒は1の倍数のロッカーを開ける
//             for (int j = 0; j < 50; j++) {
//                 if ((j + 1) % i == 0) {
//                     lockers[j] = 1;
//                 }
//             }
//         } else if (i == 2) {
//             // 2番目の生徒は2の倍数のロッカーを閉める
//             for (int j = 0; j < 50; j++) {
//                 if ((j + 1) % i == 0) {
//                     lockers[j] = 0;
//                 }
//             }
//         } else {
//             // 3番目以降の生徒は、来た順番の倍数のロッカーを開け閉めする
//             for (int j = 0; j < 50; j++) {
//                 if ((j + 1) % i == 0) {
//                     lockers[j] = 1 - lockers[j]; // ロッカーを開け閉めする
//                 }
//             }
//         }
//     }
    
//     // 開いているロッカーの数を数える
//     int count = 0;
//     for (int i = 0; i < 50; i++) {
//         if (lockers[i] == 1) {
//             count++;
//         }
//     }

//     for (int r = 0; r < 50; r++) {
//         if (lockers[r] == 1) {
//             printf("%d\n", r);
//         }
//     }
    
//     printf("開いているロッカーの数は %d 個です。\n", count);
    
//     return 0;
// }
