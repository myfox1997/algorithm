#include "stdafx.h"

using namespace std;

//use the greedy algorithm to solve the program problem

struct Program
{
	int startTime;
	int endTime;
	bool operator < (const Program &b) const {
		return endTime < b.endTime;
	}
}buf[100];

/*
int main() {
	int n;
	while (scanf("%d", &n) != EOF) {
		if (n == 0)
			break;
		for (int i = 0; i < n; i++) {
			scanf("%d%d", &buf[i].startTime, &buf[i].endTime);
		}

		sort(buf, buf + n);

		int currentTime = 0, ans = 0;

		for (int i = 0; i < n; i++) {
			if (currentTime <= buf[i].startTime) {  //if this program is ok
				currentTime = buf[i].endTime;
				ans++;
			}
		}
		printf("%d", ans);
	}
	return 0;
}*/