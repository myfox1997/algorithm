#include "stdafx.h"
/*
int main() {
	int n;
	
	while (scanf("%d", &n) != EOF && n != 0) {
		int ScoreList[101] = { 0 };     //使用hash散列的形式对数据进行预处理，直接计算count。
										//但需要注意的是，如果源数据不止有分数信息，用该方式进行处理则丢失数据信息
		int score;
		for (int i = 0; i < n; i++) {
			scanf("%d", &score);
			ScoreList[score]++;
		}

		int requestScore;
		scanf("%d", &requestScore);
		printf("%d\n", ScoreList[requestScore]);
	}
}
*/