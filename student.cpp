//学生成绩排名

#include "stdafx.h"

using namespace std;

struct E
{
	char name[101];
	int age;
	int score;
}buf[1000];

bool cmp(E a, E b) {   //cmp函数定义规则，当返回值为true的时候，则cmp的第一个参数将被排在第二个之前
	if (a.score != b.score)
		return a.score < b.score;  //分数低的在前面
	int tmp = strcmp(a.name, b.name);
	if (tmp != 0)  
		return tmp < 0;  //分数相同字母序排序
	else
		return a.age < b.age;  //姓名相同，年龄排序
}
/*
int main() {
	int n;
	while (scanf("%d", &n) != EOF) {
		for (int i = 0; i < n; i++) {
			scanf("%s%d%d", &buf[i].name, &buf[i].age, &buf[i].score);
		}
		sort(buf, buf + n, cmp);
		for (int i = 0; i < n; i++) {
			printf("%s  %d  %d\n", buf[i].name, buf[i].age, buf[i].score);
		}
	}
	return 0;
}
*/