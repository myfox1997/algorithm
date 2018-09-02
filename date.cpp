//计算两天时间差

#include "stdafx.h"
#define ISYEAP1(x) x % 100 != 0 && x % 4 == 0 || x % 400 == 0? 1 : 0

using namespace std;

int dayOfMonth1[13][2] = {
	0, 0,
	31, 31,
	28, 29,
	31, 31,
	30, 30,
	31, 31,
	30, 30,
	31, 31,
	31, 31,
	30, 30,
	31, 31,
	30, 30,
	31, 31
};

struct Date
{
	int day;
	int month;
	int year;
	void nextDay() {
		day++;
		if (day > dayOfMonth1[month][ISYEAP1(year)])
		{
			day = 1;
			month++;
			if (month > 12) {
				month = 1;
				year++;
			}
		}
	}
};

int buf1[5001][13][32];
int ABS(int x) {
	return x < 0 ? -x : x;
}

/*
int main() {
	Date tmp;
	int cnt = 0;
	tmp.day = 1;
	tmp.month = 1;
	tmp.year = 0;
	while (tmp.year != 5001) {   //初始化的结果数组，为后续操作提供 O（1）的时间复杂度
		buf1[tmp.year][tmp.month][tmp.day] = cnt;
		tmp.nextDay();
		cnt++;
	}
	int d1, m1, y1;
	int d2, m2, y2;
	while (scanf("%4d%2d%2d", &y1, &m1, &d1) != EOF) {
		scanf("%4d%2d%2d", &y2, &m2, &d2);
		printf("%d\n", ABS(buf1[y2][m2][d2] - buf1[y1][m1][d1]) + 1);
	}
	return 0;
}
*/