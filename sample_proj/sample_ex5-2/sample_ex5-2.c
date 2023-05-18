#include <stdio.h>
#include <string.h>

// 学生のダータを入れる構造体
struct student {
	int id;
	char name[256];
	int age;
};

// 構造体の名前をtypedefで定義
typedef struct student student_data;

void main() {
	int i;
	student_data data[] = {
		{ 1,"マサヤ",18 },
		{ 2,"マイケル",19 },
		{ 3,"ミク",18 },
		{ 4,"マイク",18 }
	};

	for (i = 0; i < 4; i++) {
		printf("学生番号:%d 名前:%s 年齢:%d\n", data[i].id, data[i].name, data[i].age);
	}
}