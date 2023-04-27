#include <stdio.h>

void main() {
    /* %s:文字列　%d:整数　%c:文字　%f:float
    */
    printf("こんにちは。私の名前は%sです。\n年齢は%dです。\n", "坂元仁哉", 20);
    printf("イニシャルは、%cです。\n", 'Y');
    printf("%f + %f = %f\n", 1.2, 2.7, 1.2+2.7);
}