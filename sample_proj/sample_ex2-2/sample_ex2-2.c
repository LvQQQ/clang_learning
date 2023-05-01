#include <stdio.h>

void show(int, int, int);

void main() {
    // 整数型変数a
	int a = 100;
    // 整数型変数b
	int b = 200;
    // 整数型のポインタ変数p
	int *p = NULL;
    // pにaのアドレスを代入
	p = &a;
	show(a, b, *p);
    // *pに値を代入
	*p = 300;
	show(a, b, *p);
    // pにbのアドレスを代入
	p = &b;
	show(a, b, *p);
    // *pに値を代入
	*p = 400;
	show(a, b, *p);
}

void show(int n1, int n2, int n3) {
	printf("a = %d b = %d *p = %d\n", n1, n2, n3);
}