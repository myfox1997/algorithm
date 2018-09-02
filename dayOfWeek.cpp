#include "stdafx.h"

#define ISYEAP(x) x % 100 != 0 && x % 4 == 0 || x % 400 == 0? 1 : 0

int dayOfMonth[13][2] = {
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
		if (day > dayOfMonth[month][ISYEAP(year)]) {
			day = 1;
			month++;
			if (month > 12) {
				month = 1;
				year++;
			}
		}
	}
};

int buf[3001][13][32];

char monthName[13][20] = {
	" ",
	"January",
	"February",
	"March",
	"April",
	"May",
	"June",
	"July",
	"August",
	"September",
	"October",
	"November",
	"December"
};

char weekName[7][20] = {
	"Sunday",
	"Monday",
	"Tuesday",
	"Wednesday",
	"Thursday",
	"Friday",
	"Saturday"
};
/*
int main(){
	Date tmp;
	tmp.day = 1;
	tmp.month = 1;
	tmp.year = 0;
	int count = 0;
	while (tmp.year != 3001) {
		buf[tmp.year][tmp.month][tmp.day] = count;
		tmp.nextDay();
		count++;
	}
	int d, m, y;
	int i;
	char mName[20];
	while (scanf("%d%s%d", &d, mName, &y) != EOF) {
		for (i = 1; i <= 12; i++) {
			if (strcmp(mName, monthName[i]) == 0)
				break;
		}
		
		int days = buf[y][i][d] - buf[2018][6][29];
		//printf("%d\n", days);
		//printf("%d", i);
		days = days + 5;  //代表今天是星期五
		printf("%s", weekName[(days % 7 + 7) % 7]);
	}
	return 0;
}*/