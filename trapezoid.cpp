#include "stdafx.h"

//打印一个高为h，上底为h的梯形，每一行比上一行多两个*， 右对齐。
/*
int main() {
	int h;
	while (scanf("%d", &h) != EOF) {
		int underCount = h + (h - 1) * 2;
		for (int i = 0; i < h; i++) {
			for (int j = 0; j < underCount; j++) {
				if (j < underCount - (h + i * 2))
					printf(" ");
				else
					printf("*");
			}
			printf("\n");
		}
	}
	
	return 0;
}
*/