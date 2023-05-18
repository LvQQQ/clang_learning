#include <stdio.h>
#include <string.h>


typedef struct {
	int id;
	char name[256];
	int age;
}student_data;

// 構造体のデータを表示する関数
void setData(student_data*, int, char*, int);
void showData(student_data*);

void main() {
	student_data data[4];
	int i;
	int id[] = { 1,2,3,4 };
	char name[][256] = { "マイク","ナンシー","マサヤ","ミク" };
	int age[] = { 18,19,18,18 };
	// データの設定
	for (i = 0; i < 4; i++) {
		setData(&data[i], id[i], name[i], age[i]);
	}
	// データの内訳を表示
	for (i = 0; i < 4; i++) {
		showData(&data[i]);
	}
	return;
}
// データのセット
void setData(student_data* data, int id, char* name, int age) {

    // ポインターの場合はピリオドではなく "->"アロー演算子になる
    // idのコピー
	data->id = id;
    // 名前のコピー
	strcpy(data->name, name);
    // 年齢のコピー
	data->age = age;
}
//データの表示
void showData(student_data* data) {
	printf("学生番号:%d 名前:%s 年齢:%d\n", data->id, data->name, data->age);
}